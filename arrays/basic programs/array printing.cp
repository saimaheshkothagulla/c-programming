#include<stdio.h>
int main()
{ 	
	const int size=5;//we can declare constant variables with 'const' keyword....
	int arr[size]={1,2,3,4,5},i;
	printf("sum of the elements of an given array is:\n");
	for(i=0;i<5;i++)
	printf("%d\n",arr[i]);
	return 0;
}
