#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	int i,j;
	char temp;
	printf("enter string:");
	gets(string);
	printf("string after sorting:-");
	for(i=0;i<strlen(string);i++)
	{
		for(j=0;j<strlen(string)-1;j++)
		{
			if(string[j]>string[j+1])
			{
		
				temp=string[j];
				string[j]=string[j+1];
				string[j+1]=temp;
			}
		}
	}
	puts(string);
	return 0;
}
