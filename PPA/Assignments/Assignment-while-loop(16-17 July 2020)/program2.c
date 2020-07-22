

#include<stdio.h>

void main(){

	int num;
	int c=0;
	printf("Enter number to count digits ");
	scanf("%d",&num);

	while(num!=0){

		num = num/10;
		c +=1;
	}
	printf("%d\n",c);

}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-while-loop$ ./a.out 
Enter number to count digits 13345
5
*/

