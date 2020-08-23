#include<stdio.h>
int main()
{
	int arr[10]={5,3,6,7,2,8,9,0,1,4},i,j;
	int n=10,temp,h;
	printf("before sorting: ");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\nenter increment value:-");
	scanf("%d",&h);
	while(h>=1){
	for(i=h;i<n;i++)
	{
		temp=arr[i];
		for(j=i-h;j>=0 && arr[j]>temp;j=j-h)
		{
			arr[j+h]=arr[j];
		}
		arr[j+h]=temp;
	}
	h-=2;
	}

	printf("\nafter sorting using insertion sort.....:  ");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
return 0;
}
