

#include<stdio.h>
void main(){

	int iarray[5] = {10,20,30,40,50};
	printf("%ld\n",sizeof(iarray));

	char carray[5] = {'A','B','C'};
	//printf("%ld\n",sizeof(carray));
	for(int i = 0;i<5;i++){

		printf("%c\n",carray[i]);
	}

	float farray[5] = {10.5,20.5,30.5,40.5};
	for(int i = 0;i<5;i++){

		printf("%f\n",farray[i]);
	}

}/*shital@sarode:~/Desktop/PPA/Daily Codes/DailyCodes-14 September 2020$ ./a.out 
20
A
B
C


10.500000
20.500000
30.500000
40.500000
0.000000
*/
