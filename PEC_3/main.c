#include <stdio.h>

#define N 3
int main(int argc, char **argv)
{
	const int NUM_SEATS_FIRST = 16;
	const int NUM_SEATS_BUSINESS = 20;
	const int NUM_SEATS_ECONOMY = 144;
	const int PITCH_FIRST = 135;
	const int PITCH_BUSINESS = 100;
	const int PITCH_ECONOMY = 74;
	const int LENGTH_FIRST = 600;
	const int LENGTH_BUSINESS = 550;
	
	const int SEATS_PER_LINE_BUSINESS = 4;
	const int SEATS_PER_LINE_ECONOMY = 6;
	
	int seatsWithoutFirstAndBusinessClass;
	int seatsWithoutFirstClass;
	int halfSoldFirst;
	int halfSoldBusiness;
	int halfSoldEconomy;
	int halfSold[N];
	
	printf("Enter the half tickets sold at the first class: \n");
	scanf("%d", &halfSold[0]);
	printf("Enter the half tickets sold at the business class: \n");
	scanf("%d", &halfSold[1]);
	printf("Enter the half tickets sold at the economy class: \n");
	scanf("%d", &halfSold[2]);
	
	halfSoldFirst = (halfSold[0] * 100) / NUM_SEATS_FIRST;
	halfSoldBusiness = (halfSold[1] * 100) / NUM_SEATS_BUSINESS;
	halfSoldEconomy = (halfSold[2] * 100) / NUM_SEATS_ECONOMY;
	
	seatsWithoutFirstAndBusinessClass = ((LENGTH_FIRST + LENGTH_BUSINESS) / PITCH_ECONOMY) * SEATS_PER_LINE_ECONOMY;
	seatsWithoutFirstClass = (LENGTH_FIRST / PITCH_BUSINESS) * SEATS_PER_LINE_BUSINESS;
	
	if (halfSold[0] >= 0 && halfSold[0] <= NUM_SEATS_FIRST && halfSold[1] >= 0 && halfSold[1] <= NUM_SEATS_BUSINESS && halfSold[2] >= 0 && halfSold[2] <= NUM_SEATS_ECONOMY) 
	{
		if (halfSoldFirst < 25)
		{
			if (halfSoldBusiness < 50)
			{
				printf("It is recommended that you convert all the plane to economy class. \n");
				printf("New seats of economy class if you convert all the plane: \n");
				printf("%d \n", seatsWithoutFirstAndBusinessClass);
			}
			else
			{
				printf("It is recommended that you convert the first class to business class. \n");
				printf("New seats of business class if you convert the first class: \n");
				printf("%d \n", seatsWithoutFirstClass);
			}
		}
		
		else
		printf("You need a more detailed study. \n");
	}else
	{
		printf("Data error. \n");
		if (halfSold[0] < 0 || halfSold[0] > NUM_SEATS_FIRST)
		{
			printf("For the first class, you need a number between 0 and 16. \n");
		}
		if (halfSold[1] < 0 || halfSold[1] > NUM_SEATS_BUSINESS)
		{
			printf("For the business class, you need a number between 0 and 20. \n");
		}
		if (halfSold[2] < 0 || halfSold[2] > NUM_SEATS_ECONOMY)
		{
			printf("For the economy class, you need a number between 0 and 144. \n");
		}
	}
	return 0;
}
