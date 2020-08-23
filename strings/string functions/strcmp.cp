#include<stdio.h>
#include<string.h>
int main()
{
	char source[20],destination[20];
	printf("enter string1:-");
	gets(source);
	printf("enter string2:-");
	gets(destination);
	//string comparing 
	if(strcmp(destination,source)==0)
	printf("\nboth are equal...");
	else
	printf("both are not equal...");
	return 0;
}
