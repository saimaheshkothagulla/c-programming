#include<stdio.h>
#include<string.h>
int main()
{
	char string1[100],string2[100];
	int i,j,pos;
	printf("enter first string: ");
	gets(string1);
	printf("enter second string: ");
	gets(string2);
	printf("enter the position where u want to insert the secon string in first string:");
	scanf("%d",&pos);
	int len1=strlen(string1);
	int len2=strlen(string2);
	for(i=len1;i>=pos;i--)
	string1[i+len2]=string1[i];
	//puts(string1);
	for(i=0;i<len2;i++)
	string1[i+pos]=string2[i];
	printf("new string is:");
	puts(string1);
	return 0;
}
