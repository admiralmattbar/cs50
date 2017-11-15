#include <stdio.h>
#include <string.h>

int main()
{

	long card;
	long copycard;
	long copycard2;
	int sumDouble = 0;
	int sumAdd = 0;
	int sum2 = 0;
	int visaNo = 0;
	int doubled = 0;
	
	int cardDigits = 0;
	
	do
	{
		scanf("%ld", &card);
		getchar();
		copycard = card;
		copycard2 = card;
		
		
	}
	while(card < 0);
	
	copycard = card;
		copycard2 = card;
		
		while(copycard != 0)
		{
		copycard/=10;
		++cardDigits;
		}
		
	
	for(int i = 1; i <= cardDigits; i++)
	{
	
		if(i == cardDigits - 1)
		{
			sum2 += (copycard2 % 10);
		}
		
		if(i == cardDigits)
		{
			sum2 += ((copycard2 % 10)*10);
		}
		
		if(i%2==0)
		{
			doubled = (copycard2 % 10)*2;
			if(doubled >= 10)
			{
				for(int j = 1; j <= 2; j++)
				{
					sumAdd += (doubled%10);
					doubled /= 10;
				}
			}
			else
			{
				sumAdd += doubled;
			}
		}
		else
		{
			sumAdd += (copycard2 % 10);
		}
		
		copycard2 /= 10;
	}
	
	printf("Luhn's No. : %d\n", sumAdd);
	printf("Number for brand : %d\n", sum2);
	
	if(sumAdd%10 == 0)
	{
		printf("This is a valid card number.\n");
		if((sum2 == 34 || sum2 == 37) && cardDigits == 15)
		{
			printf("Brand: AmEx\n");
		}
		else if (sum2 >= 51 && sum2 <= 55 && cardDigits == 16)
		{
			printf("Brand: MasterCard\n");
		}
		else if ((cardDigits == 16 || cardDigits == 13) && (sum2 >= 40 && sum2 <= 49))
		{
			printf("Brand: Visa\n");
		}
		else
		{
			printf("Cannot identify brand of card.\n");
		}
	}
	else
	{
		printf("This is not a valid card number.\n");
	}
	
	return 0;
}