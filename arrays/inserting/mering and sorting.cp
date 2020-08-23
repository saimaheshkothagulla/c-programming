#include<stdio.h>
int main()
{
	int arr1[50],arr2[20],i,j,n1,n2,position,c,temp;
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
	printf("merging two array:");
	for(i=0;i<n2;i++)
	arr1[n1+i]=arr2[i];
	for(i=0;i<n1+n2;i++)
	printf("%d ",arr1[i]);
	printf("sorting the new array :-");
	for(i=0;i<n1+n2-1;i++)
	{
	  c=i;
	  for(j=i+1;j<n1+n2;j++)
	  {
	  	if(arr1[c]>arr1[j])
	  	{
	  		c=j;
		  }
	  temp=arr1[i];
	  arr1[i]=arr1[c];
	  arr1[c]=temp;
	 }
	}
	//printing sorted array,,
	for(i=0;i<n1+n2;i++)
	printf("%d ",arr1[i]);
	return 0;
}
