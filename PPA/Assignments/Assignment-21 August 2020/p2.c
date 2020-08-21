
#include<stdio.h>
void main(){

	int units;
	printf("Enter units:");
	scanf("%d",&units);
	if(units<=50)
		printf("Rs.%.2f\n",0.50*units);
	else if(units<=100)
		printf("Rs.%.2f\n",0.75*units);
	else if(units<=200)
		printf("Rs.%.2f\n",1.20*units);
	else if(units>=150)
		printf("Rs.%.2f\n",1.50*units);
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-21 August 2020$ ./a.out 
Enter units:40
Rs.20.00
shital@sarode:~/Desktop/PPA/Assignments/Assignment-21 August 2020$ ./a.out 
Enter units:80
Rs.60.00
shital@sarode:~/Desktop/PPA/Assignments/Assignment-21 August 2020$ ./a.out 
Enter units:140
Rs.168.00
shital@sarode:~/Desktop/PPA/Assignments/Assignment-21 August 2020$ ./a.out 
Enter units:200
Rs.240.00
*/
