# CCP seed & key DLL, cross-compiled with MinGW-w64
#   x64: opengk_seedkey.dll      (64-bit tools, e.g. current CANape)
#   x86: opengk_seedkey_x86.dll  (32-bit tools; rename to opengk_seedkey.dll to use)
OUT    ?= ../../build/out
CC64   ?= x86_64-w64-mingw32-gcc
CC32   ?= i686-w64-mingw32-gcc
CFLAGS  = -O2 -Wall -Wextra -std=c99
LDFLAGS = -shared -static -static-libgcc -s -Wl,--no-insert-timestamp

.PHONY: all clean
all: $(OUT)/opengk_seedkey.dll $(OUT)/opengk_seedkey_x86.dll

$(OUT)/opengk_seedkey.dll: opengk_seedkey.c
	@mkdir -p $(OUT)
	$(CC64) $(CFLAGS) $(LDFLAGS) -o $@ $<

$(OUT)/opengk_seedkey_x86.dll: opengk_seedkey.c
	@mkdir -p $(OUT)
	$(CC32) $(CFLAGS) $(LDFLAGS) -o $@ $<

clean:
	rm -f $(OUT)/opengk_seedkey.dll $(OUT)/opengk_seedkey_x86.dll
