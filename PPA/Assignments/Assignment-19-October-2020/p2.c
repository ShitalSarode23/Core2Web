



#include<stdio.h>
void main(){

	   int mrr[5][3];

        for(int i = 0; i<5; i++){

             
                for(int j = 0;j<3; j++)
	                  scanf("%d",(*(mrr + i) + j));
        }

	int (*ptr)[][3] = &mrr;

        for(int i = 0; i<5; i++){
                for(int j = 0;j<3; j++)
	                  printf("%d ",*(*(*(ptr) + i) + j));

		printf("\n");
        }
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-19-October-2020$ cc p2.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-19-October-2020$ ./a.out 
2
3
4
5
12
4
5
7
8
9
11
23
45
67
54
2 3 4 
5 12 4 
5 7 8 
9 11 23 
45 67 54 
*/
