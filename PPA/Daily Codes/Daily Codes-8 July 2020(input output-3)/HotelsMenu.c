

#include<stdio.h>

void main(){

	int choice;

	printf("Menu\n");
	printf("1: Atithi\n2: Swagat\n3: Shriji\n4: Durga\n5: Bakasur\n");

	scanf("%d",&choice);

	switch(choice){

		case 1:
			printf("You choosed Hotel Atithi\n");
			break;
		case 2:
			printf("You choosed Hotel Swagat\n");
			break;
		case 3:
			printf("You choosed Hotel Shriji\n");
			break;
		case 4:
			printf("You choosed Hotel Durga\n");
			break;
		case 5:
			printf("You choosed Hotel Bakasur\n");
			break;
		default:
			printf("Not Available\n");
			break;
	}



}
