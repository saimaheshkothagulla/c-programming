#include<stdio.h>
int main()
{
	int a=5,b=10;
	printf("a=%d b=%d\n",a,b);
	a=a^b;
	printf("a=%d b=%d\n",a,b);
	b=a^b;
	printf("a=%d b=%d\n",a,b);
	a=a^b;
	printf("a=%d b=%d",a,b);
	return 0;
}
