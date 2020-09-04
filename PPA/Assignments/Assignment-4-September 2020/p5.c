#include<stdio.h>
void main(){

	int date,month,year;
	printf("Enter date to check validity:");
	scanf("%d/%d/%d",&date,&month,&year);
	int flag = 0;
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		flag = 1;
	if(flag == 1 && month == 2 && date>=29)
		printf("Date doesn't exists!!..\n");
	else if(flag == 0 && month == 2 && date>=28)
		printf("Date doesn't exists!!..\n");
	else if(date < 1 || date > 31 || month < 1 || month >12)
		printf("Date doesn't exists!!..\n");
	else if(month == 4 || month == 6 || month == 9 || month == 11){

		if(date>30)
			printf("Date doesn't exists!!..\n");
		else
			printf("Date exists!!..\n");
	}
	else
		printf("Date exists!!..\n");

}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-4-September 2020$ ./a.out 
Enter date to check validity:30/02/2018
Date doesn't exists!!..
shital@sarode:~/Desktop/PPA/Assignments/Assignment-4-September 2020$ ./a.out 
Enter date to check validity:31/04/2019
Date doesn't exists!!..
shital@sarode:~/Desktop/PPA/Assignments/Assignment-4-September 2020$ ./a.out 
Enter date to check validity:04/09/2020
Date exists!!..
shital@sarode:~/Desktop/PPA/Assignments/Assignment-4-September 2020$ ./a.out 
Enter date to check validity:28/02/2020
Date exists!!..
*/
