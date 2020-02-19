#include "header.h"

void computeRates(int popDensity, int pollution, int crime, int expense, int highwayAmt, double *pollutionRating, double *trafficRating, double *crimePerCapita, double *expensePerCapita)
{
    *pollutionRating = pollution * popDensity / 1000;
    *trafficRating = popDensity * TRAFFIC_NUM / highwayAmt;
    *crimePerCapita = crime * popDensity / CRIME_NUM;
    *expensePerCapita = expense * popDensity / EXPENSE_NUM;
}

double getLivability(int pollution, int trafficRating, int crimePerCapita, int expensePerCapita)
{
    return 100 - (pollution + trafficRating + crimePerCapita + expensePerCapita) / LIVABILITY_NUM;
}

double getPopulationDensity(int population, int sqMileage)
{
	return population/sqMileage;
}

void updateStats(int *totalLivability, int *totalCities, int *highestLivability, char *bestCity[], int livability, char name[])
{
	*totalLivability += livability;
	*totalCities = *totalCities + 1;
	if (livability > *highestLivability)
	{
		*highestLivability = livability;
		*bestCity = name;
	}
}