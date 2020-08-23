#include<stdio.h>
#include<string.h>
	struct student{

		char name[40];
		int rollno;
		int marks[3];
	};
int main()
{
	int i,j,n,key;
	
	struct student s[10];
	printf("enter no of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d student details:\n",i+1);
	
		printf("name:");
		scanf("%s",&s[i].name);
		printf("rollno:");
		scanf("%d",&s[i].rollno);
		printf("3 subjects, marks are:-");
		for(j=0;j<3;j++)
		scanf("%d",&s[i].marks[j]);
	}
		//printing
		printf("enter which student details u requived mention:");
		scanf("%d",&key);
		printf("%d->",s[key].rollno);
		puts(s[key].name);
		printf("\nmarks are:");
		for(j=0;j<3;j++)
		printf("%d ",s[key].marks[j]);
	
	return 0;
}
