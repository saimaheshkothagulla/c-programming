#include<stdio.h>
int main()
{
	int arr1[50],i,n1,element,position;
	printf("enter the size of first array:");
	scanf("%d",&n1);

	printf("enter %d elements into the  array:",n1);
	for(i=0;i<n1;i++)
	scanf("%d",&arr1[i]);
	
	printf("enter the position where you want to insert an element in the array:-");
	scanf("%d",&position);
	printf("enter element:");
	scanf("%d",&element);
	//logic..
	for(i=n1-1;i>=position;i--)
	{
		arr1[i+1]=arr1[i];
	}
	arr1[position]=element;
	for(i=0;i<n1+1;i++)
	printf("%d ",arr1[i]);
	return 0;
}
