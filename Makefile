PYTHON ?= python3

.PHONY: all build check tools clean

all: build

build:
	$(PYTHON) tools/build.py

# validate the A2L with a2ltool (fetched on first use, pinned + hash-checked)
check: build tools
	$(PYTHON) tools/check_a2l.py build/out/opengk01.a2l

tools:
	tools/fetch_a2ltool.sh

clean:
	rm -rf build/out
