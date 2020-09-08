
#include<stdio.h>
void main(){

	int num,sum = 1;
	printf("Enter number :");
	scanf("%d",&num);
	for(int i = 1;i<=10;i++){

		printf("%d ",sum);
		sum +=num;
	}
	printf("\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-8 September 2020$ ./a.out 
Enter number :15
1 16 31 46 61 76 91 106 121 136 
*/
