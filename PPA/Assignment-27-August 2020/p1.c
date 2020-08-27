
#include<stdio.h>
void main(){

	int n1,n2;
	scanf("%d%d",&n1,&n2);
	printf("Addition is %d\n",n1+n2);
	if(n1>n2)
		printf("Subtraction is %d\n",n1-n2);
	else
		printf("Subtraction is %d\n",n2-n1);

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-27-August 2020$ ./a.out 
10 20
Addition is 30
Subtraction is 10
shital@sarode:~/Desktop/PPA/Assignments/Assignment-27-August 2020$ ./a.out 
20 10
Addition is 30
Subtraction is 10
*/
