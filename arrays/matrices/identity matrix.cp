#include<stdio.h>
int main()
{
	int matrix[10][10],i,j,identity=1;
	printf("enter size 3*3 matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&matrix[i][j]);
			if((i==j && matrix[i][j]!=1) ||(i!=j && matrix[i][j]!=0))
			identity=0;
		}
	}
	if(identity)
	printf("it is a identity matrix...");
	else
	printf("it is not a identity matrix...");
	return 0;
}
