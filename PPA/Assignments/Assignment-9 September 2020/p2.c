
#include<stdio.h>
void main(){

	int num;
	printf("Enter number to print series of even numbers in reverse order:");
	scanf("%d",&num);
	for(int i = num;i>0;i--){

		if(i % 2 == 0)
			printf("%d ",i);
	}
	printf("\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-9 September 2020$ ./a.out 
Enter number to print series in reverse order:100
99 97 95 93 91 89 87 85 83 81 79 77 75 73 71 69 67 65 63 61 59 57 55 53 51 49 47 45 43 41 39 37 35 33 31 29 27 25 23 21 19 17 15 13 11 9 7 5 3 1 

*/
