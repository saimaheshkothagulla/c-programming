#include<stdio.h>
int main()
{
	int arr1[100],arr2[100],i,j,n,temp,count;
	printf("enter the size of an array:");
	scanf("%d",&n);
	printf("enter the elements to array:");
	for(i=0;i<n;i++)
	scanf("%d",&arr1[i]);
	count=0;
	for(i=0;i<n;i++)
	{
		temp=0;
		for(j=0;j<count;j++)
		{
			if(arr1[i]==arr2[j])
			{
			temp=1;
			break;
			}
		}
		if(temp==0)
		{
			arr2[count]=arr1[i];
			count++;
		}
		
	}
	for(i=0;i<count;i++)
	printf("%d ",arr2[i]);
	return 0;
}
