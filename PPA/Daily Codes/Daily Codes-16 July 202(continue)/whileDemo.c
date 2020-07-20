

#include<stdio.h>

void main(){

	int num ;
	int rem ,sum = 0;
	printf("Enter value : ");
	scanf("%d",&num);

	while(num!=0){

		rem = num % 10;
		sum += rem;

		num = num/10;
	}
	printf("Sum = %d\n",sum);
}
/*
shital@sarode:~/Desktop/PPA/Daily Codes/Daily Codes-16 July 202(continue)$ ./a.out 
Enter value : 531
Sum = 9
shital@sarode:~/Desktop/PPA/Daily Codes/Daily Codes-16 July 202(continue)$ ./a.out 
Enter value : 1234 
Sum = 10
shital@sarode:~/Desktop/PPA/Daily Codes/Daily Codes-16 July 202(continue)$ ./a.out 
Enter value : 198
Sum = 18
shital@sarode:~/Desktop/PPA/Daily Codes/Daily Codes-16 July 202(continue)$ ./a.out 
Enter value : 12345
Sum = 15
*/
