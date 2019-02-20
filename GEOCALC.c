/*
 ============================================================================
 Name        : GEOCALC.c
 Author      : Dominick Vitelli
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

		double pi = 3.14159;
		int input;

		printf("1. Calculate the Area of a Circle");
		printf("\n2. Calculate the Area of a Rectangle");
		printf("\n3. Calculate the Area of a Triangle");
		printf("\n4. Quit");

		fflush(stdout);
		scanf(" %d", &input);

		if(input == 1){

			printf("Enter the radius of your circle: ");
			int radius;
			fflush(stdout);
			scanf(" %d", &radius);

			if(radius < 0){

				printf("\nYou have entered a negative value.");
				exit(0);

			}

			double areaCircle = pi * (radius * radius);
			printf("\nThe area of your circle is %.2f.", areaCircle);

		} if(input == 2){

			printf("Enter the length and width of your rectangle: ");
			fflush(stdout);
			float height, length;
			scanf("%f %f", &height, &length);
			if(height < 0 || length < 0){

						printf("\nYou have entered a negative value.");
						exit(0);

					}

			double areaRectangle = height * length;
			printf("\nThe area of your rectangle is %.2f.", areaRectangle);


		} if(input == 3){

			printf("\nEnter the length of the triangles base and its height: ");
			fflush(stdout);
			float lengthT, heightT;
			scanf("%f %f", &lengthT, &heightT);
			if(heightT < 0 || lengthT < 0){

								printf("\nYou have entered a negative value.");
								exit(0);

							}
			double areaTriangle = lengthT * heightT * .5;
			printf("\nThe area of your triangle is %.2f", areaTriangle);


		} if(input == 4){

			exit(0);

		} if(input > 4 || input < 0){

			printf("Your input isn't within bounds.");
		exit(0);



		}

}
