#include<stdio.h>
int main()
{
	int arr[100],temp=0,n,i,element,c=0;
	printf("enter tha size of array:-");
	scanf("%d\n",&n);
	printf("enter the elements to the array:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array elements are:-");
		for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("enter element to find the positon in the array:");
	scanf("%d\n",&element);
	while(c<n){
		if(element==arr[c]){
		printf("element %d is found at %d",element,c);
		temp=1;
		break;
	}
		c++;
			}
	
	
	if(temp==0)
	printf("element is not found ..");
	return 0;
	
}
