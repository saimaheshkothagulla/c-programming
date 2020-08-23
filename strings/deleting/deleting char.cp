#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	int i,n;
	printf("enter string:-");
	gets(string);
	printf("enter position where we want to delete char:");
	scanf("%d",&n);
	for(i=n;i<strlen(string);i++)
	{
		string[i]=string[i+1];
	}
	puts(string);
	
	return 0;
}
