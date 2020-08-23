#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));
	printf("%d\n",sizeof(arr));
	printf("%u\n",arr);
	printf("%u\n",++arr[0]);
	printf("%u\n",&arr+1);
	printf("%u\n",(arr+1));
	return 0;
}
