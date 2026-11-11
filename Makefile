PYTHON ?= python3

.PHONY: all build check tools seedkey clean

all: build

build:
	$(PYTHON) tools/build.py

# validate the A2L with a2ltool (fetched on first use, pinned + hash-checked)
check: build tools
	$(PYTHON) tools/check_a2l.py build/out/opengk01.a2l

tools:
	tools/fetch_a2ltool.sh

# CCP seed & key DLLs (x64 + x86) for the A2L; needs MinGW-w64
seedkey:
	$(MAKE) -C tools/seedkey

clean:
	rm -rf build/out
