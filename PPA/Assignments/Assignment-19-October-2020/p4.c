



#include<stdio.h>

void oddNumIn(int (*ptr)[3]){

		for(int i = 0; i<3; i++){

			for(int j = 0; j<3; j++){

				if(*(*(ptr + i) + j) % 2 != 0)
					printf("%d ",*(*(ptr + i) + j));
			}
		}
}
void main(){

	   int mrr[3][3];

        for(int i = 0; i<3; i++){

             for(int j = 0;j<3; j++)
	                  scanf("%d",(*(mrr + i) + j));
        }

	int (*ptr)[][3] = &mrr;

        for(int i = 0; i<3; i++){
                for(int j = 0;j<3; j++)
	                  printf("%d ",*(*(*ptr + i) + j));

		printf("\n");
        }

	oddNumIn(mrr);
	printf("\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-19-October-2020$ cc p4.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-19-October-2020$ ./a.out 
1
2
3
4
5
6
7
8
9
1 2 3 
4 5 6 
7 8 9 
1 3 5 7 9 
*/
