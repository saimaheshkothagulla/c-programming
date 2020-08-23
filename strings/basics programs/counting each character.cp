#include<stdio.h>
int main()
{
	int i,count[26]={0};
	char string[100];
	printf("enter string:");
	gets(string);
	for(i=0;string[i]!='\0';i++)
	{
		count[string[i]-97]++;
		
	}
	printf("count of each character....");
	for(i=0;i<26;i++)
	{
		if(count[i]>0)
		printf("%c--%d\n",i+97,count[i]);
	}
	return 0;
}
