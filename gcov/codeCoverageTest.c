#include <stdio.h>
#include "codeCoverageTest.h"

int fn1()
{
	int a =5;
	a++;
	return (a);
}

int fn2(int b)
{
	if (b>10)
	{
		fn1();
		return(b);
	}
	else
		return(0);
}
