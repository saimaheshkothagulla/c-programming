#include<stdio.h>
int main()
{
	int i,count[26];
	char string[100];
	printf("enter string:");
	gets(string);
	for(i=0;string[i]!='\0';i++)
	{
		printf("%c--- %d ",string[i],string[i]);
		
	}
	return 0;
}
