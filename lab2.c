#include <stdlib.h>
#include <stdio.h>

int function(int x)
{
	while (x > 0)
	{
		x = x;
		//x = function(x); mu mergea
	}
	return x;
}

int main()
{
	int a = 30, i = 0;
	while (a > 0)
	{
		a = function(a);
		i++;
	}
	printf("%d", i);
	return 0;
}
