VERSION = 0.1

PREFIX = /usr/local
MANPREFIX = ${PREFIX}/man

LIBS =
CFLAGS = -g -Wall -pedantic -std=c99 -static

BIN = uncomment
SRC = ${BIN}.c

CC = cc 

build:
	$(CC) $(SRC) -o $(BIN) $(LIBS) ${CFLAGS}

clean:
	rm $(BIN)

install: build 
	@echo installing executable file to ${PREFIX}/bin
	@mkdir -p ${PREFIX}/bin
	@cp -f ${BIN} ${PREFIX}/bin
	@chmod 755 ${PREFIX}/bin/${BIN}
	@echo installing manual page to ${MANPREFIX}/man1
	@mkdir -p ${MANPREFIX}/man1
	@sed "s/VERSION/${VERSION}/g" < ${BIN}.1 > ${MANPREFIX}/man1/${BIN}.1
	@chmod 644 ${MANPREFIX}/man1/${BIN}.1
