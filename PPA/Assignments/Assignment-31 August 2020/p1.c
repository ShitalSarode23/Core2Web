#include<stdio.h>
void main(){

	for(int i = 1;i<=100;i++){

		if(i % 3 == 0 || i % 5 == 0)
			printf("%d ",i);
	}
	printf("\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-31 August 2020$ ./a.out 
3 5 6 9 10 12 15 18 20 21 24 25 27 30 33 35 36 39 40 42 45 48 50 51 54 55 57 60 63 65 66 69 70 72 75 78 80 81 84 85 87 90 93 95 96 99 100 
*/
