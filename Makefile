CFLAGS += -Wall -Wextra -O2 -mssse3
LDFLAGS += -lssl -lcrypto -lpthread

all: sand-leek

sand-leek: sand-leek.o onion_base32.o

clean:
	rm -vf sand-leek *.o

.PHONY: all clean

