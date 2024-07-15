all: install

clean:
	rm -rf *.o encrypt

install: clean
	gcc algorithms.c encrypt.c -o encrypt

run: install
	./encrypt input.txt output.txt rsa
