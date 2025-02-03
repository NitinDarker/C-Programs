// Pattern 2: Left Staircase
#include <stdio.h>
void main()
{
	int rows, spaces;

	printf("Enter the number of rows: ");
	scanf("%d", &rows);

	spaces = rows - 1;

	for (int i = 0; i < rows; i++)
	{
		for (int j = spaces; j > 0; j--)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		spaces--;
		printf("\n");
	}
}