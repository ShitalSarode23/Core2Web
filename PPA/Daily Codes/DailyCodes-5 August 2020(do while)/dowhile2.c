#include<stdio.h>
void main(){

	char agree = 'y';
	do{
		int ch = 0;
		char movie;
		printf("Welcome\n");
		printf("1. Shopping\n");
		printf("2. PVR\n");
		printf("3. Playstation\n");
		printf("4. Food Court\n");
		printf("Enter your choice \n");
		scanf("%d",&ch);
		switch(ch){

			case 1 :
				printf("Wrogn\n");
				break;
			case 2 :
				printf("Which movie do you want to watch (Marathi/Hindi)(M/H)\n");
				scanf(" %c",&movie);
				switch(movie){

					case 'M':
					case 'm':
						printf("Hirkani\n");
						break;
					case 'h':
					case 'H':
						printf("Tanhaji\n");
						break;
				}
				break;
			case 3 :
				printf("Football\n");
				break;
			case 4 :
				printf("Biryani\n");
				break;
			default:
				printf("Wrong choice\n");
				break;

		}
		printf("Do you want to continue ?");
		scanf(" %c",&agree);
	}while(agree == 'y' || agree == 'Y');
}
/*
shital@sarode:~/Desktop/Core2Web/PPA/Daily Codes/DailyCodes_5$ ./a.out 
Welcome
1. Shopping
2. PVR
3. Playstation
4. Food Court
Enter your choice 
1
Wrogn
Do you want to continue ?y
Welcome
1. Shopping
2. PVR
3. Playstation
4. Food Court
Enter your choice 
2
Which movie do you want to watch (Marathi/Hindi)(M/H)
M
Hirkani
Do you want to continue ?y   
Welcome
1. Shopping
2. PVR
3. Playstation
4. Food Court
Enter your choice 
2
Which movie do you want to watch (Marathi/Hindi)(M/H)
h
Tanhaji
Do you want to continue ?y
Welcome
1. Shopping
2. PVR
3. Playstation
4. Food Court
Enter your choice 
3
Football
Do you want to continue ?n

*/
