#include <stdio.h>
#include <stdlib.h>

static void __attribute__((constructor)) before_main(void)
{
	printf("Before main\n");
}

int main()
{
		printf("Hello World\n");
		return 0;
}
