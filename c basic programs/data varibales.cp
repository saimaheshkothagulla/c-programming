#include<stdio.h>
int main()
{/*
variable: variables are used to store the values at a particular place in a memory..
rules:1) variables must start with (underscore,character ) followed by digit or character...
   2)variables should not to be a c keywoard..

*/
	int i=9;//4bytes size
	float f =45.67;//4 bytes size
	char c='c';// 1 byte size
	double d=2343454.56767;//8 byte size
	printf("data values....\n");
	printf("%d\n%f\n%c\n%lf\n",i,f,c,d);
	printf("variables addresses...\n");
	printf("%d\n%f\n%c\n%lf",&i,&f,&c,&d);
	return 0;
}
