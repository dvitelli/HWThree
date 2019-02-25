
#include <stdio.h>
#include <stdlib.h>

int *reverseArray(int array[], int arraySize){

	int *arrayReversed = (int*)malloc(sizeof(int)*arraySize);

	for (int i = 0; i < arraySize; i ++){

		*(arrayReversed + i) = array[arraySize - 1 - i];

	}

	return arrayReversed;

}

int main(void){

	int arraySize, entry;
	int *reversedArray;

	printf("Enter your array size: ");
	fflush(stdout);
	scanf("%d", &arraySize);

	int array[arraySize];

	for(int i = 0; i < arraySize; i++){

		printf("\nEnter an int to add to your array: ");
		fflush(stdout);
		scanf("%d", &entry);
		array[i] = entry;


	}

	reversedArray = reverseArray(array, arraySize);

	printf("\nThis is your array in reverse: ");

	for(int i = 0; i < arraySize; i++){

		printf("\n%d", reversedArray[i]);

	}

	return 0;

}
