#include <stdlib.h>
#include <stdio.h>

static void callback1()
{
	printf("callback1\n");
}

static void callback2()
{
	printf("callback2\n");
}

static void callback3()
{
	printf("callback3\n");
}

int main()
{
	atexit(callback1);
	atexit(callback2);
	atexit(callback3);	
	printf("main exit\n");
	return 0;
}
