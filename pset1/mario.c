#include <stdio.h>

int main()
{
	int height;
	
	printf("How high do you want your pyramid? ");
	scanf("%d", &height);
	
	if(height < 0 || height > 23)
	{
		printf("Setting default height of 4. \n");
		height = 4;
	}
	
	for(int i = 1; i <= height; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			printf("#");
		}
		printf("\n");
	}
	
	return 0;
}