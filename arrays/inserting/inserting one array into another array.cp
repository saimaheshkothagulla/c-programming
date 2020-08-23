#include<stdio.h>
int main()
{
	int arr1[50],arr2[20],i,n1,n2,position;
	printf("enter the size of first array:");
	scanf("%d",&n1);
	printf("enter the size of second array:");
	scanf("%d",&n2);
	printf("enter %d elements into the first array:",n1);
	for(i=0;i<n1;i++)
	scanf("%d",&arr1[i]);
	printf("enter %d elementsd to the second array:-",n2);
	for(i=0;i<n2;i++)
	scanf("%d",&arr2[i]);
	printf("enter the position where you want to insert the second array in first array:-");
	scanf("%d",&position);
	
	
	//logic..
	for(i=n1-1;i>=position;i--)
	{
		arr1[i+n2]=arr1[i];
	}
	for(i=0;i<n2;i++)
	{
		arr1[i+position]=arr2[i];
	}
	for(i=0;i<n1+n2;i++)
	printf("%d ",arr1[i]);
	return 0;
}
