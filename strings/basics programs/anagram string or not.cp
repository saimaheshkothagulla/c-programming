#include<stdio.h>
#include<string.h>
void anagram(char[],char[]);
int main()
{
	char str1[100],str2[100];
	printf("enter string1: ");
	gets(str1);
	printf("enter string2: ");
	gets(str2);
	printf("string1 are:");
	puts(str1);
	puts(str2);
	if(strlen(str1)!=strlen(str2))
	printf("strings are not anagram...");
	else
	{
	  anagram(str1,str2);
	}
	return 0;
}
void anagram(char str1[],char str2[])
{
	int c=0,temp=1,count1[26]={0},count2[26]={0};
	while(str1[c]!='\0')
	{
		count1[str1[c]-'a']++;
		c++;
	}
	c=0;
	while(str2[c]!='\0')
	{
		count2[str2[c]-'a']++;
		c++;
	}
	c=0;
	while(c<26)
	{
		if(count1[c]>0)
		{
			if(count1[c]!=count2[c])
			{
			temp=0;
			break;
			}
		}
		c++;
	}
	
	
	if(temp==1)
	printf("strings are anagram...");
	else
	printf("strings are not anagram...");
}
