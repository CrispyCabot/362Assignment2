/* Include statements */
#include <stdio.h>

/* Constants */
#define TRAFFIC_NUM 1.7
#define CRIME_NUM 872.6
#define EXPENSE_NUM 1217.1
#define LIVABILITY_NUM 13.81

/* Prototypes */
void getInput(FILE*, char[], int*, int*, int*, int*, int*, int*);
double getPopulationDensity(int, int);
void computeRates(int, int, int, int, int, double*, double*, double*, double*);
double getLivability(int, int, int, int);