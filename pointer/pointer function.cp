#include<stdio.h>
int add(int,int);
int main()
{
	int r1,r2;
	int (*ptr)(int,int);
	r1=add(10,20);
	printf(" r1 = %d",r1);
	ptr=&add;
	r2=ptr(20,50);
	printf("\nr2 = %d",r2);
	return 0;
}
int add(int x,int y)
{
	return x+y;
}
