/*count the each digit in a given number
example:-
   n=171
   1:count=2
   7:count=1
*/
#include<stdio.h>
int main()
{
	int count[10]={0};
	long int num;
	int i,digit;
	printf("enter random digit :-");
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
		count[digit]++;
		num/=10;
	}
	for(i=0;i<=9;i++)
	{
		if(count[i]>0)
		printf("digit:%d  :  count=%d\n",i,count[i]);
	}
	return 0;
	
}
