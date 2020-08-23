#include<stdio.h>
int main()
{
	int arr[10]={5,3,6,7,2,8,9,0,1,4},i,j;
	int n=10,temp,c;
	printf("before sorting: ");
		for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	for(i=0;i<n;i++)
	{
			c=0;
		for(j=0;j<n-1;j++)
		{
		
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				c++;
			}
			
			
		}
		if(c==0)
			break;
		
	}
	printf("\nafter sorting using insertion sort.....:  ");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
return 0;
}
