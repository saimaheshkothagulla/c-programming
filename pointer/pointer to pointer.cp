#include<stdio.h>
int main()
{
	int a=10;
	int *ptr=&a;
	int **dptr=&ptr;
	
	printf("address  of a =%u\n",&a);
	printf("address  of ptr=%u\n",&ptr);
	printf("address  of dptr=%u\n",&dptr);
	
	printf("\n\n");
	printf(" value of a =%d\n",a);
	printf(" value of ptr =%d\n",*ptr);
	printf(" value of dptr =%d\n",**dptr);
	return 0;
}
