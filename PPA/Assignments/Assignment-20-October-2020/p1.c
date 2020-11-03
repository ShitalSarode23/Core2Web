#include<stdio.h>
int isArmstrong(int n){

	int rem,sum = 0;
	int a = n;
	while(n!=0){

		rem = n%10;

		sum = sum + (rem*rem*rem);

		n = n/10;
	}

	if(sum == a)
		return 1;
	else
		return 0;
}



void main(){

	int n;

	scanf("%d",&n);

	if(isArmstrong(n))
		printf("%d is an armstrong no. \n",n);
	else
		printf("%d is not an arnstrong no.\n",n);
}
	
	/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-20-October-2020$ cc p1.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-20-October-2020$ ./a.out 
145
145 is not an arnstrong no.
shital@sarode:~/Desktop/PPA/Assignments/Assignment-20-October-2020$ ./a.out 
153
153 is an armstrong no. 
*/

	
