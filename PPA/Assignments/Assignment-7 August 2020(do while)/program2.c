
#include<stdio.h>
void main(){

	int num;
	printf("Enter number = ");
	scanf("%d",&num);
	do{

		printf("%d\n",num);
		num--;
	}while(num!=0);
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-7 August 2020(do while)$ ./a.out 
Enter number = 8
8
7
6
5
4
3
2
1
shital@sarode:~/Desktop/PPA/Assignments/Assignment-7 August 2020(do while)$ ./a.out 
Enter number = 3
3
2
1
*/
