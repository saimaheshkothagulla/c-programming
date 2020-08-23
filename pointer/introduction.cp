/*
pointer:
		pointer used to access the information at certain memory location..
		
		syntax:
				datatype *identifier;
				
				ex: int *var;
		types of pointers:
				1.typed pointer: points to specific type of data.
				  example:
				  			int *  points to only integer data
				  			double* points to only double data
				2.untyped pointer(generic pointer): can points to any type of data.
				  example:
				  			void* points to any data.


*/

#include<stdio.h>
int main()
{
	
	int* ptr;
	int a=100;
	ptr=&a;
	printf("a=%d\n",a);
	printf("&a=%u\n",&a);
	printf("ptr=%u\n",ptr);
	printf("&ptr=%u\n",&ptr);
	printf("*ptr=%d\n",*ptr);
	printf("*(&a)=%d",*(&a));
	
	return 0;
}

