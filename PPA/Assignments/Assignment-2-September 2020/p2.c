
#include<stdio.h>
void main(){

	int n1,n2;
	scanf("%d",&n1);
	scanf("%d",&n2);
	int min = (n1<n2)?n1:n2;
	printf("Minimum number amongst %d & %d is:%d\n",n1,n2,min);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-2-September 2020$ ./a.out 
56
99
Minimum number amongst 56 & 99 is:56
*/
