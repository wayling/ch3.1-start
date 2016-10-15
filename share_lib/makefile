all:
	$(CC) -Wall -g -shared -fPIC dlib.c -o libdlib.so
	$(CC) -Wall -g main.c -o example -L./ -ldlib
	$(CC) -Wall -g main_1.c -o example_dl -L./ -ldlib -ldl
