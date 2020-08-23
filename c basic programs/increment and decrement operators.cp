#include<stdio.h>
int main()
{
	int i,j;
	printf("I loop:-\n");
	for(i=0;i<5;i++)
		printf("%d ",i);
	printf("Js loop:-\n");
	for(j=0;j<5;++j)
		printf("%d ",j);
	printf("%d %d",i,j);
		
	printf("\n");
		
		
	int ans=i++-6;
	printf("%d\n",ans);
	ans=++i-6;
	printf("%d",ans);
	return 0;
}
