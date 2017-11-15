#include <stdio.h>

int main()
{
	int minutes;
	
	printf("How many minutes do you shower? ");
	
	scanf ("%d", &minutes);
	
	int water = minutes * 1.5 * 128;
	
	int bottles = water / 16;
	
	printf("Your %d minute shower used %d ounces of water. That's %d bottles. \n", minutes, water, bottles);
	
	return 0;
}