
#include<stdio.h>
int gcd(){

	extern int x;
	extern int y;
	int i,gcd;
	
	for(i=1;i<x && i<y;i++){

		if((x % i == 0) && (y % i == 0)){
		
			gcd = i;
		}
	}
	printf("GCD = %d\n",gcd);
}
