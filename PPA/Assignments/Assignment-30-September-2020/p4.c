#include<stdio.h>
void main(){

	float frr[] = {2.4f,5.6f,7.8f,4.5f,3.4f,6.7f};

	float *fptr = NULL;
	float m = 1.0;
	for(int i = 0; i<5; i++){

		fptr = frr + i;
	
		if(i%2 == 0)
			m *= (*fptr);
	}
	printf("Multiplication = %.2f\n",m);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-30-September-2020$ ./a.out 
Multiplication = 63.65
*/
