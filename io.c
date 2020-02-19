#include "header.h"

void getInput(FILE *fp, char name[20], int *population, int *sqMileage, int *pollution, int *crime, int *expense, int *highwayAmt)
{
	fscanf(fp, "%s %d %d %d %d %d %d", name, population, sqMileage, pollution, crime, expense, highwayAmt);
}