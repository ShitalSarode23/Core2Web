
#include<stdio.h>
void main(){

	int num;
	printf("Enter number to find squares and Cubes of odd number ranges between this number");
	scanf("%d",&num);
	for(int i = 1;i<=num;i++){

		if(i % 2 != 0)
			printf("Cube of %d:%d and Square of %d:%d\n",i,i*i*i,i,i*i);
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-31 August 2020$ ./a.out 
Enter number to find squares and Cubes of odd number ranges between this number 10
Cube of 1:1 and Square of 1:1
Cube of 3:27 and Square of 3:9
Cube of 5:125 and Square of 5:25
Cube of 7:343 and Square of 7:49
Cube of 9:729 and Square of 9:81
*/
