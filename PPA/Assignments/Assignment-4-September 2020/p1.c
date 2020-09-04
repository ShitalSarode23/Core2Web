#include<stdio.h>
void main(){

	int num;
	printf("Enter number to print its table in reverse order:");
	scanf("%d",&num);
	for(int i = 10;i>0;i--){

		printf("%d X %d = %d\n",num,i,num*i);
	}
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-4-September 2020$ ./a.out 
Enter number to print its table in reverse order:2
2 X 10 = 20
2 X 9 = 18
2 X 8 = 16
2 X 7 = 14
2 X 6 = 12
2 X 5 = 10
2 X 4 = 8
2 X 3 = 6
2 X 2 = 4
2 X 1 = 2
*/
