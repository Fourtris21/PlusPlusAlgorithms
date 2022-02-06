#include <stdio.h>

void GetStrangeMatrix(int size)
{
	int i, j;
	int row = 0;
	int col = 0;
	int counter = 0;
	int counter2 = 1;
	int bottom = size-1;
	int up = 0;
	int matrix[size][size];
	int n = (size*size)-size;

	for ( i = 1; i <= n/2; i++)
	{
		if(row == col)
		{
			matrix[row][col] = 0;
			if(row == size && col == size)
			{
				break;
			}
		
		}
		row++;
		matrix[row][col] = i;
		if(row == bottom)
		{
			counter ++;
			col++;
			row = size - (size -counter);
		}
	
	}
	for ( i = (n/2)+1; i <= n; i++)
	{
		row--;
		matrix[row][col] = i;
		
		if(row == up)
		{
			col--;
			counter2 ++;
			row = size-counter2;

		}

	}
	for ( i = 0; i < size; i++)
	{
		for ( j = 0; j < size; j++)
		{
			printf("%d  ", matrix[i][j]);
				
		}
		printf("\n");
	}
	
	
}

void GetSpiralMatrix(int size)
{
	int  i, j;
	int matrix[size][size];
	int count = size * size;
	char direction = 'd';
	int down = size-1;
	int right = size-1;
	int left = 1;
	int up = 0;
	int row = 0;
	int col = 0;

	matrix[0][0]= 1;
	for ( i = 2; i <= count; i++)
	{
		if(direction == 'd')
		{
			row++;
			matrix[row][col] = i;
			if(row == down)
			{
				direction = 'r';
				down--;
			}
		}
		else if(direction == 'r')
		{
			col++;
			matrix[row][col] = i;
			if(col == right)
			{
				direction = 'u';
				right--;
			}
		}
		else if(direction == 'u')
		{
			row--;
			matrix[row][col] = i;
			if(row == up)
			{
				direction = 'l';
				up++;
			}
		}
		else if(direction == 'l')
		{
			col--;
			matrix[row][col] = i;
			if(col == left)
			{
				direction = 'd';
				left ++;
			}
		}
	}
		for ( i = 0; i < size; i++)
		{
			for ( j = 0; j < size; j++)
			{
				printf("%d  ", matrix[i][j]);
				
			}
			printf("\n");
		}
}
int main()
{
	int size;
	printf("Wuwedi razmer na matrica: ");
	scanf("%d", &size);
	GetStrangeMatrix(size);
	//GetSpiralMatrix(size);
	
	return (0);
}