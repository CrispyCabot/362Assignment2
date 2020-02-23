#include "header.h"

int getInput(FILE *fp, char name[20], int *population, int *sqMileage, int *pollution, int *crime, int *expense, int *highwayAmt)
{
	return fscanf(fp, "%s %d %d %d %d %d %d", name, population, sqMileage, pollution, crime, expense, highwayAmt);
}

void printSummary(char name[], double popDensity, double livability)
{
	printf("%-29s %-40.2f %.2f\n", name, popDensity, livability);
}