
#include<stdio.h>
void main(){

	int min,max;
	printf("Min of Series:");
	scanf("%d",&min);
	printf("Max of Series:");
	scanf("%d",&max);

	printf("Series of even numbers ranging between %d & %d is:",min,max);
	for(int i = min;i<=max;i++){

		if(i % 2 == 0)
			printf("%d ",i);
	}
	printf("\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-2-September 2020$ ./a.out 
Min of Series:4
Max of Series:60
Series of even numbers ranging between 4 & 60 is:4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50 52 54 56 58 60 
*/
