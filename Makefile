CC = gcc
CFLAGS = -Wall -I./src

all: build

build:
	$(CC) $(CFLAGS) -o app src/main.c src/utils.c

test:
	$(CC) $(CFLAGS) -o test_runner tests/test_utils.c src/utils.c
	./test_runner

clean:
	rm -f app test_runner

release:
	@if [ -z "$(VERSION)" ]; then echo "VERSION is not set. Usage: make release VERSION=v1.0.0"; exit 1; fi
	git tag -a $(VERSION) -m "Release $(VERSION)"
	git push origin $(VERSION)

