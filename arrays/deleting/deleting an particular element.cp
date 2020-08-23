#include<stdio.h>
int main()
{
	int arr[]={12,45,67,88,44},i,element=45,temp=0,j;
	printf("array elements before deleting:-");
	for(i=0;i<5;i++)
	printf("%d ",arr[i]);
	for(i=0;i<5;i++)
	{
		if(element==arr[i])
		{
			for(j=i;j<5;j++)
			{
				arr[j]=arr[j+1];
			}
			temp=1;
			break;
		}
	}
	if(temp==0)
	printf("\nelement not found! please enter valid value..");
	else{
		printf("\narray after deleting element is:-\n");
	for(i=0;i<5-1;i++)
	printf("%d ",arr[i]);
	}
	return 0;
}
