
#include<stdio.h>
void main(){

	int num;
	printf("Enter number to print series in reverse order:");
	scanf("%d",&num);
	for(int i = num;i>0;i--){

		if(i % 2 != 0)
			printf("%d ",i);
	}
	printf("\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-9 September 2020$ ./a.out 
Enter number to print series of even numbers in reverse order:100
100 98 96 94 92 90 88 86 84 82 80 78 76 74 72 70 68 66 64 62 60 58 56 54 52 50 48 46 44 42 40 38 36 34 32 30 28 26 24 22 20 18 16 14 12 10 8 6 4 2 


*/
