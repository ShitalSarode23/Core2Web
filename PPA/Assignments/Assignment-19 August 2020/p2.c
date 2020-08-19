
#include<stdio.h>
void main(){

	int num;
	printf("Enter number between 0 to 6 : ");
	scanf("%d",&num);
	if(num>6 || num <0)
		printf("Wrong input\n");
	switch(num){

		case 0 :
			printf("Monday\n");
			break;
		case 1 :
			printf("Tuesday\n");
			break;
		case 2 :
			printf("Wednesday\n");
			break;
		case 3 :
			printf("Thursday\n");
			break;
		case 4 :
			printf("Friday\n");
			break;
		case 5 :
			printf("Saturday\n");
			break;
		case 6 :
			printf("sunday\n");
			break;
	}
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-19 August 2020$ ./a.out 
Enter number between 0 to 6 : 2
Wednesday
*/
