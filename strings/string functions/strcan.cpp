#include<stdio.h>
#include<string.h>
int main()
{
	char source[50],destination[50];
	printf("enter string1:-");
	gets(source);
	printf("enter string2:-");
	gets(destination);
	//string copying..
	strcat(destination,source);
	printf("source=%s",source);
	printf("destination=%s",destination);
	return 0;
}
