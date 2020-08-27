
#include<stdio.h>
void main(){

	int n1,n2;
	char ch;
	printf("Enter First Number:");
	scanf("%d",&n1);
	printf("Enter Second Number:");
	scanf("%d",&n2);
	printf("Enter the sign of Operation:");
	scanf(" %c",&ch);
	switch(ch){

		case '+':
			printf("Addition of %d & %d is %d\n",n1,n2,n1+n2);
			break;
		case '-':
			printf("Subtraction of %d & %d is %d\n",n1,n2,n1-n2);
			break;
		case '*':
			printf("Multiplication of %d & %d is %d\n",n1,n2,n1*n2);
			break;
		case '/':
			printf("Division of %d & %d is %d\n",n1,n2,n1/n2);
			break;
		case '%':
			printf("Modulus of %d & %d is %d\n",n1,n2,n1%n2);
			break;
	}

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-27-August 2020$ ./a.out 
Enter First Number:10
Enter Second Number:20
Enter the sign of Operation:+
Addition of 10 & 20 is 30
shital@sarode:~/Desktop/PPA/Assignments/Assignment-27-August 2020$ ./a.out 
Enter First Number:20
Enter Second Number:15
Enter the sign of Operation:-
Subtraction of 20 & 15 is 5
shital@sarode:~/Desktop/PPA/Assignments/Assignment-27-August 2020$ ./a.out 
Enter First Number:10
Enter Second Number:20
Enter the sign of Operation:*
Multiplication of 10 & 20 is 200
shital@sarode:~/Desktop/PPA/Assignments/Assignment-27-August 2020$ ./a.out 
Enter First Number:20
Enter Second Number:10
Enter the sign of Operation:/
Division of 20 & 10 is 2
shital@sarode:~/Desktop/PPA/Assignments/Assignment-27-August 2020$ ./a.out 
Enter First Number:20
Enter Second Number:15
Enter the sign of Operation:%
Modulus of 20 & 15 is 5

*/
