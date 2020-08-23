/*
size of the pointer:
         pointer holds the address of a certain value.irrespective of data type,the pointer size remains constant
         pointer size depends on compiler ,not on datatype.
*/
#include<stdio.h>
struct emp{
	int rno;
	double salary;
	char ename[50];
};
int main()
{
	int *ip;
	float *fp;
	char *cp;
	struct emp* emp1;
	printf("%d\n",sizeof(ip));
	printf("%d\n",sizeof(fp));
	printf("%d\n",sizeof(cp));
	printf("%d\n",sizeof(emp1));
	return 0;
	
}
