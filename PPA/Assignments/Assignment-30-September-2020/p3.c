#include<stdio.h>
void main(){

	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	for(int i = 0; i<10; i++)
		printf("%d\t",arr[i]);
	printf("\n");

	for(int i = 0; i<10; i++)
		printf("%d\t",*(arr + i));
	printf("\n");

	for(int i = 0; i<10; i++)
		printf("%d\t",*(&arr[i]));
	printf("\n");
}/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-30-September-2020$ cc p3.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-30-September-2020$ ./a.out 
1	2	3	4	5	6	7	8	9	10	
1	2	3	4	5	6	7	8	9	10	
1	2	3	4	5	6	7	8	9	10	
*/
