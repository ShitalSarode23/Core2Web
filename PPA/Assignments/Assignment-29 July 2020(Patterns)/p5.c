
#include<stdio.h>
void main(){

	int num = 0;
	int cnt = 1;
	for(int outer = 1;outer<=5;outer++){

		for(int space = 1;space<outer;space++){
			printf("\t");
		}
		for(int inner = 5;inner>=outer;inner--){

			if(inner==5 && outer == 1)
				printf("%d\t",num);
			else if(inner==4 && outer == 1)
				printf("%d\t",cnt);
			else{
				int num1 = num + cnt;
				printf("%d\t",num1);
				num = cnt;
				cnt = num1;
			}
		}
		printf("\n");
	}

}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-29 July 2020(Patterns)$ ./a.out 
0	1	1	2	3	
	5	8	13	21	
		34	55	89	
			144	233	
				377	

*/
