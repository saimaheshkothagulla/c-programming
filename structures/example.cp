#include<stdio.h>
int main()
{
	struct student{
		
		char name[20];
	};
	struct student s[2];
	gets(s[1].name);
	puts(s[1].name);
	return 0;
}
