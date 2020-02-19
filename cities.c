//Chris Bridewell
//CSC 362, Section 2, 10 am
//Programming Assignment #2 2/28/20

#include "header.h"

int main()
{
	FILE* inputFile;
	//Values to be inputted
	char cityName[20];
	int population, sqMileage, pollution, crime, expense, highwayAmt;

	//Values to be calculated
	int popDensity, pollutionRating, trafficRating, crimePerCapita, expensePerCapita;

	inputFile = fopen("cities1.txt", "r");
	getInput(inputFile, cityName, &population, &sqMileage, &pollution, &crime, &expense, &highwayAmt);

	popDensity = getPopulationDensity(population, sqMileage);
	computeRates(popDensity, pollution, crime, expense, highwayAmt, &pollutionRating, &trafficRating, &crimePerCapita, &expensePerCapita);
	fclose(inputFile);
}

void getInput(FILE *fp, char name[20], int *population, int *sqMileage, int *pollution, int *crime, int *expense, int *highwayAmt)
{
	fscanf(fp, "%s %d %d %d %d %d %d", name, population, sqMileage, pollution, crime, expense, highwayAmt);
}

int getPopulationDensity(int population, int sqMileage)
{
	return population/sqMileage;
}