all: install

clean:
	rm -rf *.o encrypt

install: clean
	gcc algorithms.c encrypt.c -o encrypt

run: install
	./encrypt 1 2 3
