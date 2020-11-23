all:
	gcc -fPIC -c lib.c
	gcc -c l3.c
	gcc -shared -o liblib.so lib.o
	gcc l3.o -L. -llib -o l3