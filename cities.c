//Chris Bridewell
//CSC 362, Section 2, 10 am
//Programming Assignment #2 2/28/20

#include "header.h"
#include "computations.c"
#include "io.c"

int main()
{
	FILE* inputFile;
	//Values to be inputted
	char cityName[50];
	int population, sqMileage, pollution, crime, expense, highwayAmt;

	//Values to be calculated
	double popDensity, pollutionRating, trafficRating, crimePerCapita, expensePerCapita, livability;

	//Totals
	int totalLivability=0, totalCities=0, highestLivability=0;
	char bestCity[50];

	inputFile = fopen("cities1.txt", "r");
	getInput(inputFile, cityName, &population, &sqMileage, &pollution, &crime, &expense, &highwayAmt);
	popDensity = getPopulationDensity(population, sqMileage);
	computeRates(popDensity, pollution, crime, expense, highwayAmt, &pollutionRating, &trafficRating, &crimePerCapita, &expensePerCapita);
	livability = getLivability(pollution, trafficRating, crimePerCapita, expensePerCapita);
	updateStats(&totalLivability, &totalCities, &highestLivability, &bestCity, livability, cityName);

	popDensity = getPopulationDensity(population, sqMileage);
	computeRates(popDensity, pollution, crime, expense, highwayAmt, &pollutionRating, &trafficRating, &crimePerCapita, &expensePerCapita);
	fclose(inputFile);
}