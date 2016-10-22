#include <stdio.h>
#include <stdlib.h>

static void __attribute__((constructor)) before_main1(void)
{
	printf("Before main1\n");
}

static void __attribute__((constructor)) before_main2(void)
{
	printf("Before main2\n");
}

static void __attribute__((constructor)) before_main3(void)
{
	printf("Before main3\n");
}

int main()
{
		printf("Hello World\n");
		return 0;
}
