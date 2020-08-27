
#include<stdio.h>
void main(){

	int n1,n2;
	scanf("%d%d",&n1,&n2);
	printf("Multiplication is %d\n",n1*n2);
	if(n1>n2)
		printf("Division is %d\n",n1/n2);
	else
		printf("Division is %d\n",n2/n1);

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-27-August 2020$ ./a.out 
10 20
Multiplication is 200
Division is 2
shital@sarode:~/Desktop/PPA/Assignments/Assignment-27-August 2020$ ./a.out 
20 10
Multiplication is 200
Division is 2

*/
