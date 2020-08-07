

#include<stdio.h>
void main(){

	int n1,n2;
	printf("Enter two numbers\n");
	scanf("%d %d",&n1,&n2);
	int sum = 0;
	int cnt = 0;
	do{
		sum = sum+n1;
		cnt++;
	}while(cnt!=n2);
	printf("%d * %d = %d\n",n1,n2,sum);

}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-7 August 2020(do while)$ ./a.out 
Enter two numbers
2 3
2 * 3 = 6
shital@sarode:~/Desktop/PPA/Assignments/Assignment-7 August 2020(do while)$ ./a.out 
Enter two numbers
4 8
4 * 8 = 32
*/
