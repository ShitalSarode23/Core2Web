
#include<stdio.h>
void main(){

	int isPrime(int num){

		for(int i = 2;i<=num;i++){

			if(num % i == 0){
				return 0;
				break;
			}
			else
				return 1;
		}
	}
	int num;
	do{

		printf("Enter number : ");
		scanf("%d",&num);
		printf("%d\n",num);
	}while(isPrime(num)!=1);
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-7 August 2020(do while)$ ./a.out 
Enter number : 62
62
Enter number : 38
38
Enter number : 44
44
Enter number : 5
5
*/
