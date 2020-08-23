#include<stdio.h>
int main()
{
	int first[100][100],second[100][100],sum[100][100],n,m,i,j;
	printf("enter the no of rows and columns of each matrices:");
	scanf("%d %d",&n,&m);
	printf("enter first matrix elements:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&first[i][j]);
		}
	}
	printf("enter the elememts of second matrix:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&second[i][j]);
		}
	}
	printf("sum of two matrices is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			sum[i][j]=first[i][j]+second[i][j];
					}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",sum[i][j]);
					}
			printf("\n");
	}


return 0;
}
