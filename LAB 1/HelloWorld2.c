#include <stdio.h>
#include <stdbool.h>
//This is Nong Hoang Vu...
int main()
{
	bool x = true;
	int a = 8, b=5;
	x = a<b;
	if(x)
	{
		printf("a is a larger number than b");
	}
	else
	{
		printf("b is a smaller number than a");
	}
	return 0;
}
