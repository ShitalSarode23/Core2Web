
#include<stdio.h>
void main(){

	int num,fact = 1;
	printf("Enter number to find its factorial:");
	scanf("%d",&num);
	while(num!=0){

		fact *= num;
		num--;
	}
	printf("%d\n",fact);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-28 August 2020$ ./a.out 
Enter number to find its factorial:5
120

*/
