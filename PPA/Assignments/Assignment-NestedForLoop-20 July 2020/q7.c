
#include<stdio.h>
void main(){

	int range;
	printf("Enter number : ");
	scanf("%d",&range);
	int count = range;
	for(int outer = 1;outer<=range;outer++){

		if(range!=0){

		for(int inner = 1;inner<=10;inner++){

			printf("%d\t",count*inner);
		}
		count--;
		}
		else
			break;
		printf("\n");
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-NestedForLoop-20 July 2020$ ./a.out 
Enter number : 6
6	12	18	24	30	36	42	48	54	60	
5	10	15	20	25	30	35	40	45	50	
4	8	12	16	20	24	28	32	36	40	
3	6	9	12	15	18	21	24	27	30	
2	4	6	8	10	12	14	16	18	20	
1	2	3	4	5	6	7	8	9	10	
*/
