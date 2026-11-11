#!/usr/bin/env bash
# Fetch the pinned a2ltool (https://github.com/DanielT/a2ltool, ASAP2 parser and
# checker) into build/tools/.  The download is verified against a SHA-256 pinned
# here; bump both together when updating.
set -euo pipefail

VERSION=3.4.2
SHA256=dd09c4331675272edea3a55b5606db682d432ead12313160e19000cfbeab4415   # a2ltool-linux-v$VERSION.zip
URL="https://github.com/DanielT/a2ltool/releases/download/v$VERSION/a2ltool-linux-v$VERSION.zip"

dest="$(cd "$(dirname "$0")/.." && pwd)/build/tools"
mkdir -p "$dest"
if [ -x "$dest/a2ltool" ] && "$dest/a2ltool" --version 2>/dev/null | grep -q " $VERSION\$"; then
    echo "a2ltool $VERSION already in $dest"
    exit 0
fi
zip="$dest/a2ltool-linux-v$VERSION.zip"
curl -fsSL -o "$zip" "$URL"
echo "$SHA256  $zip" | sha256sum -c --quiet -
unzip -o -q "$zip" a2ltool -d "$dest"
chmod +x "$dest/a2ltool"
rm -f "$zip"
"$dest/a2ltool" --version | head -1
