//Chris Bridewell
//CSC 362, Section 2, 10 am
//Programming Assignment #2 2/28/20

#include "header.h"
#include "computations.c"
#include "io.c"

void main()
{
	FILE* inputFile;
	//Values to be inputted
	char cityName[50];
	int population, sqMileage, pollution, crime, expense, highwayAmt;
	int eof; //End of file checker

	//Values to be calculated
	double popDensity, pollutionRating, trafficRating, crimePerCapita, expensePerCapita, livability;

	//Totals
	int totalLivability=0, totalCities=0;
	double highestLivability=0;
	char bestCity[50];

	inputFile = fopen("cities1.txt", "r");
	printf("City \t\t\t Population Density \t\t\t Livability Score\n");
	while (1)
	{
		eof = getInput(inputFile, cityName, &population, &sqMileage, &pollution, &crime, &expense, &highwayAmt);
		if (eof < 7)
		{
			break;
		}
		popDensity = getPopulationDensity(population, sqMileage);
		computeRates(popDensity, pollution, crime, expense, highwayAmt, &pollutionRating, &trafficRating, &crimePerCapita, &expensePerCapita);
		livability = getLivability(pollutionRating, trafficRating, crimePerCapita, expensePerCapita);
		updateStats(&totalLivability, &totalCities, &highestLivability, bestCity, livability, cityName);
		printSummary(cityName, popDensity, livability);
	}
	printf("\nOf the %d cities, the most liveable was %s with a score of %.2f", totalCities, bestCity, highestLivability);
	fclose(inputFile);
}