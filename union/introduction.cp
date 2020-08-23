#include<stdio.h>

	/*
	union:
		it is a user defined data type.which stores all the variables to a single memory loacation.
		
		whatever the elements defined in union ,all are points to a same memory location.
		
		
		syntax:
		
		
					union identifier{
					
					datatype element1;
					.
					.
					datatype element n;
				};
	*/
int main()
{
	union example
	{
		int a;
		int b;
	};
	union example var;
	var.a=122;
	printf("a=%d\tb=%d\n",var.a,var.b);
	var.b=100;
	printf("a=%d\tb=%d",var.a,var.b);
	
 return 0;	
}

