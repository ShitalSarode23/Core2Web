
#include<stdio.h>
void main(){

	int arr[10];
	for(int i = 0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	int sumOdd = 0,sumEven = 0;
	for(int i = 0;i<10;i++){
		if(*(arr+i) % 2 == 0)
			sumEven += *(arr+i);
		else
			sumOdd += *(arr+i);
	}
	printf("Sum of Even Numbers = %d\n",sumEven);
	printf("Sum of Odd Numbers = %d\n",sumOdd);

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-1-Octomber-2020$ ./a.out 
1 2 3 4 5 6 7 8 9 0
Sum of Even Numbers = 20
Sum of Odd Numbers = 25

*/
