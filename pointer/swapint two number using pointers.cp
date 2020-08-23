#include<stdio.h>
int main()
{
	
	int *ptr;
	int a=10,b=20;
	ptr=&a;
	&a=&b;
	&b=ptr;
	printf("%d %d",a,b);
	return 0;
}
