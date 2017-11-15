#include<stdio.h>

int main()
{
	int height;
	printf("How tall do you want the blocks?  \n");
	scanf("%d", &height);
	
	if(height < 0 || height > 23)
	{
		printf("Setting default height of 4. \n");
		height = 4;
	}
	
	int width = (2 * height) + 2;
	int half_width = height + 1;
	
	for(int row = 1; row <= height; row++)
	{
		for(int j = 1; j <= (half_width - row); j++)
		{
			printf(" ");
		}
		for(int k = 1; k <= row; k++)
		{
			printf("#");
		}
		printf("  ");
		for(int l = 1; l <= row; l++)
		{
			printf("#");
		}
		for(int m = 1; m <= (half_width - row); m++)
		{
			printf(" ");
		}
		printf("\n");
	}

	return 0;
}