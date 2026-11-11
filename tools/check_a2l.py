#!/usr/bin/env python3
"""Validate an A2L with a2ltool (tools/fetch_a2ltool.sh installs it).

  1. a2ltool --check --strict   grammar, cross-references, consistency
  2. a2ltool --ifdata-cleanup   every IF_DATA block must parse against the A2ML
                                (a block a2ltool would drop is invalid)

Usage: python3 tools/check_a2l.py [file.a2l]      (default build/out/opengk01.a2l)
a2ltool is taken from $A2LTOOL, build/tools/a2ltool or PATH.
"""
import os
import shutil
import subprocess
import sys
import tempfile

REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def find_tool():
    for c in (os.environ.get("A2LTOOL"), os.path.join(REPO, "build", "tools", "a2ltool"),
              shutil.which("a2ltool")):
        if c and os.path.isfile(c) and os.access(c, os.X_OK):
            return c
    sys.exit("a2ltool not found: run tools/fetch_a2ltool.sh (or set A2LTOOL)")


def count_ifdata(path):
    return open(path, encoding="utf-8-sig", errors="replace").read().count("/begin IF_DATA")


def main():
    a2l = sys.argv[1] if len(sys.argv) > 1 else os.path.join(REPO, "build", "out", "opengk01.a2l")
    tool = find_tool()
    r = subprocess.run([tool, a2l, "--check", "--strict"], capture_output=True, text=True)
    out = "\n".join(l for l in (r.stdout + r.stderr).splitlines()
                    if l.strip() and not l.startswith(("a2ltool ", "Run complete")))
    print(out)
    if r.returncode != 0 or "No problems found" not in out:
        sys.exit("A2L check FAILED")

    with tempfile.TemporaryDirectory() as tmp:
        cleaned = os.path.join(tmp, "cleaned.a2l")
        r = subprocess.run([tool, a2l, "--ifdata-cleanup", "-o", cleaned], capture_output=True, text=True)
        if r.returncode != 0:
            sys.exit("a2ltool --ifdata-cleanup failed:\n" + r.stdout + r.stderr)
        before, after = count_ifdata(a2l), count_ifdata(cleaned)
    if after != before:
        sys.exit("A2L check FAILED: %d of %d IF_DATA block(s) don't parse against the A2ML"
                 % (before - after, before))
    print("IF_DATA: all %d block(s) parse against the A2ML" % before)
    print("A2L OK: %s" % os.path.relpath(a2l, os.getcwd()))


if __name__ == "__main__":
    main()
