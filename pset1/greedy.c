#include <stdio.h>

int main()
{
	int quarterNo = 0, dimeNo = 0, nickelNo = 0, pennyNo = 0;
	
	int check = 0;
	
	float dollarAmt;
	
	
	int checking = 3;
	
	printf("How much do you want change for? \n");
	
	do
	{
		scanf("%f.2", &dollarAmt);
		getchar();
		
	}
	while(dollarAmt <= 0);
	
	printf("Getting change for %f...\n", dollarAmt);
	
	int change = (int)(dollarAmt * 100);
	
	printf("Converting it to cents at %d...\n",change);
	
	
	while(change > 0)
	{
		
		
	
		while(change >= 25)
		{
			quarterNo = change/25;
			change = change % 25;
		}
		while(change >= 10)
		{
			dimeNo = change/10;
			change = change % 10;
		}
		while(change >= 5)
		{
			nickelNo = change/5;
			change = change % 5;
		}
		while(change > 1)
		{
			pennyNo = change;
			change = 0;
		}
		
		printf("Change due...\nQuarters: %d\nDimes: %d\nNickels: %d\nPennies: %d\n", quarterNo, dimeNo, nickelNo, pennyNo);
		printf("\n \n Total Coins:  %d\n", quarterNo+dimeNo+nickelNo+pennyNo);
		return 0;
	}
	
	return -1;
}