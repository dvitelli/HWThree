/*
 ============================================================================
 Name        : Population.c
 Author      : Dominick Vitelli
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	int population, birthRate, deathRate, years, newPopulationSize;

	printf("Enter the starting size of a population: ");
	fflush(stdout);
	scanf(" %d", &population);

	if(population < 2){

		printf("Your population can't be less than 2.");
		exit(0);
	}

	printf("Enter the birth rate of that population: ");
	fflush(stdout);
	scanf(" %d", &birthRate);

	printf("Enter the death rate of that population: ");
	fflush(stdout);
	scanf(" %d", &deathRate);

	printf("Enter the years over which to calculate population growth: ");
	fflush(stdout);
	scanf(" %d", &years);

	for (int i = 0; i < years; i++){

		newPopulationSize = population + birthRate - deathRate;
		population = newPopulationSize;

	}

	printf("The population size after %d years is: %d", years, population);

	return EXIT_SUCCESS;
}
