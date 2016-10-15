#include <setjmp.h>
#include <iostream>

using namespace std;

static jmp_buf g_stack_env;

static void func1(void);

class Test
{
public:
	Test()
	{
		cout << "Constructor " << endl;
	}
	~Test()
	{
		cout << "Destructor " << endl;
	}
};

int main()
{
	int ret = setjmp(g_stack_env);
	if(ret == 0)
	{
		cout << "Normal flow" << endl;
		func1();
	}
	else
	{
		cout << "Longjmp flow" << endl
	}
}
