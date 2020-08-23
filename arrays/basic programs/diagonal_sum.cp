#include<stdio.h>
int main()
{
	int matrix[100][100],row,col,diagonal_sum=0,i,j;
	printf("enter size of row and column of a matrix:-");
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&matrix[i][j]);
			if(i==j || row-1==i+j)
			diagonal_sum+=matrix[i][j];
					}
	}
	printf("diagonal sum is = %d",diagonal_sum);
	return 0;
}
