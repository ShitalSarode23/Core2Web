



#include<stdio.h>

void replaceEv(int (*ptr)[3]){

		printf("after replacing\n");

		for(int i = 0; i<3; i++){

			for(int j = 0; j<3; j++){

				if(*(*(ptr + i) + j) % 2 == 0)
					*(*(ptr + i) + j) = 0;
			}
		}

		for(int i = 0; i<3; i++){

			for(int j = 0; j<3; j++){

					printf("%d ",*(*(ptr + i) + j));
			}
			printf("\n");
		}
}
void main(){

	   int mrr[3][3];

        for(int i = 0; i<3; i++){

             for(int j = 0;j<3; j++)
	                  scanf("%d",(*(mrr + i) + j));
        }

	int (*ptr)[][3] = &mrr;
	printf("before replacing\n");
        for(int i = 0; i<3; i++){
                for(int j = 0;j<3; j++)
	                  printf("%d ",*(*(*ptr + i) + j));

		printf("\n");
        }

	replaceEv(mrr);
	printf("\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-19-October-2020$ cc p5.c 
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
before replacing
1 2 3 
4 5 6 
7 8 9 
after replacing
1 0 3 
0 5 0 
7 0 9 
*/
