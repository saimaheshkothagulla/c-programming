#include<stdio.h>
int partition(int [],int,int);
void quick(int [],int,int);
int main()
{
	int arr[10]={5,3,6,7,2,8,9,0,1,4},i;
	int n=10,p;
	int low=0,high=n-1;
	printf("before sorting: ");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	quick(arr,low,high);
	
return 0;
}
void quick(int arr[],int low,int high)
{
	if(low>high)
		return;
	
	int p=partition(arr,low,high);
	quick(arr,low,p);
	quick(arr,p+1,high);

}
int partition(int arr[],int low,int high)
{
	int i,j,temp,pivot;
	i=low+1;
	j=high;
	pivot=arr[low];
	while(i<=j)
	{
		while(arr[i]<pivot)
		 {
		 i++;
		} 	
		while(arr[j]>pivot)
		{j--;
		}
		if(i<j)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
			j--;
		}
		else{
		break;
		}
	}
	arr[low]=arr[j];
	arr[j]=pivot;
	return j;
}
