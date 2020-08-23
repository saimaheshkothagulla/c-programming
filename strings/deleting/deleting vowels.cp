#include<stdio.h>
#include<string.h>
int main()
{
	char string[100],result[100];
	int i,j,c=0;
	printf("enter string:-");
	gets(string);
	printf("before deleting the vowels the string:-");
	puts(string);
	printf("after deleting the vowels the string:-");
	for(i=0;string[i]!='\0';i++)
	{
		if(!(string[i]=='a' || string[i]=='e' || string[i]=='o' || string[i]=='i' || string[i]=='u'))
		{
          result[c]=string[i];
          c++;
		}
	}
	result[c]='\0';
	if(strlen(result))
	puts(result);
	else
	printf("\nstring contains all vowels ,so we get an empty string after deleting the vowels..");
	return 0;
}
