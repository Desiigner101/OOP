/*
Author: SARSONAS, Kervin Gino M.
Description: Problem 58 (test code not pro but single)
Date: October 5, 2023
Version: 1.0
*/


#include <stdio.h>
#include <ctype.h>

int main() {
	char type;
	int choice, enterh, enterm, lefth, leftm;
	

	printf("\nWelcome!\n");

	printf("\nPlease wait, long line ahead.\n");

	printf("Enter 1 to proceed: ");
	scanf("%d", &choice);

	if (choice == 1) {
		printf("\nWelcome to Gino's PARKINGANAN!!\n");
		printf("*******************************\n");
	}
	else {
		printf("You have to re-enter again to scan your car type\n");
	}
	
	printf("\nPlease enter your Vehicle Type: ");
	scanf(" %c", &type);
	
	type = toupper(type);

	switch(type){
		case 'C':
		printf("Your Vehicle type is: Car\nPlease proceed.\n");
		break;
		
		case 'B':
		printf("Your Vehicle type is: Bus\nPlease proceed.\n");
		break;
		
		case 'T':
		printf("Your Vehicle type is: Truck\nPlease proceed.\n");
		break;
		
		default:
			printf("\nYOUR VEHICLE TYPE IS NOT PROHIBITED HERE SORRY NOT SORRY :(");
		}
		
		printf("\nWhat hour did you enter the lot? (0 - 24)\n");
		scanf("%d", &enterh);
		printf("What minute point did you enter be specific!!? (0 - 60)\n");
		scanf("%d", &enterm);
		
		printf("What hour did you left the lot? (0 - 24)\n");
		scanf("%d", &lefth);
		printf("What minute point did you left be specific!!? (0 - 60)\n");
		scanf("%d", &leftm);
		
		
		
		
	return 0;
}

