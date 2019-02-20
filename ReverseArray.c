/*
 ============================================================================
 Name        : ReverseArray.c
 Author      : Dominick Vitelli
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int size;
	int arrayFill;

	printf("Enter array size: ");
	fflush(stdout);
	scanf("%d", &size);

	int array[size];


	for(int i = 0; i < size; i++){

		printf("Enter an int in the array: ");
		fflush(stdout);
		scanf("%d", &arrayFill);
		array[i] = arrayFill;

	}

	array = reverseArray(*array, size);

	}

 void *reverseArray(int array, int size){

	 int reverseArray[size];

	 for(int i = 0; i < size; i++){

		 reverseArray[size - 1 - i] = array[i];

	 }



}
