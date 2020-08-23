//normal method............
#include<stdio.h>
int main()
{
	int n,i;
	long int fact=1;
	printf("enter n value:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("factorial of %d is %d",n,fact);
	return 0;
}


//using funtion............
#include<stdio.h>
long int factorial(n);
int main()
{
	int n,i;
	printf("enter n value:");
	scanf("%d",&n);
	long int res=factorial(n);
	printf("factorial of %d is %d",n,res);
	return 0;
	
}
long int factorial(n)
{
	int i;
	long int fact=1;
	for(i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	return fact;
	
}
//using recursion...........
#include<stdio.h>
long int factorial(int n);
int main()
{
	int n,i;
	printf("enter n value:");
	scanf("%d",&n);
	long int res=factorial(n);
	printf("%d",res);
	return 0;
}
long int factorial(int n)
{
	if(n==0)
	return 1;
	else
	return n*factorial(n-1);
}











