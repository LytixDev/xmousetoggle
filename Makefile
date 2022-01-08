OUT = xmousetoggle
PREFIX ?= /usr/local
BINPREFIX ?= $(PREFIX)/bin

install:
	gcc xmousetoggle.c -lX11 -lXfixes -o $(OUT)
	mkdir -p $(BINPREFIX)
	cp $(OUT) $(BINPREFIX)

uninstall:
	rm $(BINPREFIX)/$(OUT)

