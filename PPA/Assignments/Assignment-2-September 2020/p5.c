
#include<stdio.h>
void main(){

	int n1,n2,n3;
	scanf("%d %d %d",&n1,&n2,&n3);
	int max = (n1>n2)?(n1>n3)?n1:n3:(n2>n3)?n2:n3;
	printf("The maximum number amongst %d %d & %d is:%d\n",n1,n2,n3,max);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-2-September 2020$ ./a.out 
56 7 99
The maximum number amongst 56 7 & 99 is:99

*/
