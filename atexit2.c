#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void callback1(void)
{
	printf("callback1\n");
}


int main()
{
	atexit(callback1);
	while(1)
	{
		sleep(1);
	}
	printf("main exit\n");
	return 0;
}
