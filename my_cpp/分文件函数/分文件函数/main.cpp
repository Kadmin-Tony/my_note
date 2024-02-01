#include <iostream>
#include "func.h"
using namespace std;

int main()
{
	print("hello, world");

	MyClass *m = new MyClass(1);
	m -> show();

	system("pause");
	return 0;
}

