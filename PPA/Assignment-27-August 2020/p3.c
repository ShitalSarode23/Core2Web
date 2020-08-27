
#include<stdio.h>
void main(){

	int n1,n2;
	scanf("%d%d",&n1,&n2);
	int sq1 = n1*n1;
	int sq2 = n2*n2;
	int cub1 = sq1*n1;
	int cub2 = sq2*n2;
	printf("Addition of %d & %d is %d\n",cub1,cub2,cub1+cub2);
	printf("Subtraction of %d & %d is %d\n",sq1,sq2,sq1-sq2);

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-27-August 2020$ ./a.out 
10 20
Addition of 1000 & 8000 is 9000
Subtraction of 100 & 400 is -300

*/
