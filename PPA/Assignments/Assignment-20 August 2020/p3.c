
#include<stdio.h>
void main(){

	int year;
	printf("Enter year: ");
	scanf("%d",&year);
	if(year % 4 == 0){

		if(year % 100 == 0)
			printf("%d is not a leap year\n",year);
		else
			printf("%d is a leap year\n",year);
	}
	else if(year%400==0)
		printf("%d is a leap year\n",year);
	else
		printf("%d is not a leap year\n",year);
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-20 August 2020$ ./a.out 
Enter year: 2016
2016 is a leap year
shital@sarode:~/Desktop/PPA/Assignments/Assignment-20 August 2020$ ./a.out 
Enter year: 1800
1800 is not a leap year
*/
