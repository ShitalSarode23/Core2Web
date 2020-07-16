

#include<stdio.h>

void main(){

	int rad;
	float area,circum;
	printf("Radius : ");
	scanf("%d",&rad);

	area = 3.14*rad*rad;
	circum = 2*3.14*rad;
	
	printf("Area of Circle : %.2f\n",area);
	printf("circumference of Circle : %.2f\n",circum);

}

/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-InputOutput$ ./a.out 
Radius : 4
Area of Circle : 50.24
circumference of Circle : 25.12
*/
