#include<stdio.h>
void main(){

	int num;
	printf("Enter number : ");
	scanf("%d",&num);

	printf("Second Predecessor: %d\n",num-2);
	printf("Second Successor: %d\n",num+2);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-4-September 2020$ ./a.out 
Enter number : 50
Second Predecessor: 48
Second Successor: 52

*/
