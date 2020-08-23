#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5},i,sum=0;
	printf("sum of the elements of an given array is:");
	for(i=0;i<5;i++)
	sum+=arr[i];
	printf("%d",sum);
	return 0;
}
