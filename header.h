/* Include statements */
#include <stdio.h>

/* Constants */
#define TRAFFIC_NUM 1.7
#define CRIME_NUM 872.6
#define EXPENSE_NUM 1217.1
#define LIVABILITY_NUM 13.81

/* Prototypes */
int getInput(FILE*, char[], int*, int*, int*, int*, int*, int*);
double getPopulationDensity(int, int);
void computeRates(double, int, int, int, int, double*, double*, double*, double*);
double getLivability(double, double, double, double);
void updateStats(int*, int*, double*, char*, double, char*);
void printSummary(char[], double, double);