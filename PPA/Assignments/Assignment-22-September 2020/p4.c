
#include<stdio.h>
void main(){

	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	int *aptr = &a;
	int *bptr = &b;
	int temp;
	temp = *aptr;
	*aptr = *bptr;
	*bptr = temp;
	printf("Swap numbers....\na = %d, b = %d\n",*aptr,*bptr);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-22-September 2020$ ./a.out 
Enter two numbers: 
10 20
Swap numbers....
a = 20, b = 10
*/
