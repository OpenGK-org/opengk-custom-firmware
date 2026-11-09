PYTHON ?= python3

.PHONY: all build clean

all: build

build:
	$(PYTHON) tools/build.py

clean:
	rm -rf build/out
