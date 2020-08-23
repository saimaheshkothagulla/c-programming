#include<stdio.h>
int main()
{
	int a[3]={1,2,3},i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=i;j<3;j++)
		{
			for(k=i;k<=j;k++)
			{
			
			printf("%d ",a[k]);
			}
		printf("\n");
		}
		
	}
}
