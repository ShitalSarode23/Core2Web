

#include<stdio.h>
void main(){

	int array1[] = {10,'A',30,'B',50};
	int array2[] = {'a','b','c','d','e'};
	int farray[5] = {10.5,20.5,30.5};

	for(int i = 0;i<5;i++){

		printf("%d\n",farray[i]);
	}
}
/*shital@sarode:~/Desktop/PPA/Daily Codes/DailyCodes-14 September 2020$ cc p2.c 
shital@sarode:~/Desktop/PPA/Daily Codes/DailyCodes-14 September 2020$ ./a.out 
10
20
30
0
0
*/
