#include "header.h"

void computeRates(int popDensity, int pollution, int crime, int expense, int highwayAmt, int *pollutionRating, int *trafficRating, int *crimePerCapita, int *expensePerCapita)
    {
        *pollutionRating = pollution * popDensity / 1000;
        *trafficRating = popDensity * TRAFFIC_NUM / highwayAmt;
        *crimePerCapita = crime * popDensity / CRIME_NUM;
        *expensePerCapita = expense * popDensity / EXPENSE_NUM;
    }