/*
size of the pointer:
         pointer holds the address of a certain value.irrespective of data type,the pointer size remains constant
         pointer size depends on compiler ,not on datatype.
*/
#include<stdio.h>
int main()
{
	int a,
	float b;
	char c;
	int *ip=&a;
	float *fp=&b;
	char *cp=&c;
	printf("%d\n",sizeof(ip));
	printf("%d\n",sizeof(fp));
	printf("%d\n",sizeof(cp));
	return 0;
	
}
