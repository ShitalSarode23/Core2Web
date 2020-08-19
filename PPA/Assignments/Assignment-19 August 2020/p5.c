#include<stdio.h>
void main(){

	int a1,a2,a3;
	printf("Enter three angles of a triangle: ");
	scanf("%d%d%d",&a1,&a2,&a3);
	if(a1+a2+a3 == 180)
		printf("The triangle with angles %d %d & %d is a valid one\n",a1,a2,a3);
	else
		printf("The triangle with angles %d %d & %d is a invalid one\n",a1,a2,a3);
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-19 August 2020$ ./a.out 
Enter three angles of a triangle: 30 60 70
The triangle with angles 30 60 & 70 is a invalid one
*/
