#include<stdio.h>
int BinarySearch(int [],int,int,int);
int main()
{
	int arr[50],i,n,key;
	printf("enter array size:");
	scanf("%d",&n);
	printf("enter %d into array:",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("array elements are:  ");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	printf("\nenter the key that you want to search:");
	scanf("%d",&key);
	int index=BinarySearch(arr,0,n-1,key);
	if(index!=-1)
	printf("position of key %d is %d in the array.",n,index+1);
	else
	printf("given key is not found in the array...");

	return 0;
}
int BinarySearch(int arr[],int low,int high,int key)
{
	int mid,i;
	mid=low+(high-low)/2;
	if(low<=high){

	if(arr[mid]==key){
		return mid;
	}
	else if(arr[mid]>key){
		return BinarySearch(arr,low,mid-1,key);
	}
	else{
		return BinarySearch(arr,mid+1,high,key);
	}
	}
	else{
		return -1;
	}
}
