
#include<stdio.h>
void main(){

	int arr[4][4];
	for(int i = 0;i<4;i++){
		for(int j = 0;j<4;j++)
			scanf("%d",&*(*(arr+i)+j));
	}
	int max = *(*(arr+0)+0);
	for(int i = 0;i<4;i++){
		for(int j = 0;j<4;j++){
			if(*(*(arr+i)+j) > max)
				max = *(*(arr+i)+j);
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("Biggest number in the array is : %d\n",max);

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-5 Octomber 2020$ cc p2.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-5 Octomber 2020$ ./a.out 
10
11
12
13
14
36
16
17
18
19
20
21
22
23
24
25
10 11 12 13 
14 36 16 17 
18 19 20 21 
22 23 24 25 
Biggest number in the array is : 36
*/
