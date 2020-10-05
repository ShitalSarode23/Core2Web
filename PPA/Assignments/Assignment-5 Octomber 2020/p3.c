
#include<stdio.h>
void main(){

	int arr[3][3];
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++)
			scanf("%d",&*(*(arr+i)+j));
	}
	int cnt = 0;
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			if(*(*(arr+i)+j) < 0 )
				cnt++;
		}
	}
	printf("Count of negative numbers : %d\n",cnt);

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-5 Octomber 2020$ cc p3.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-5 Octomber 2020$ ./a.out 
1 2 3
-1 -4 5
5 -4 0
Count of negative numbers : 3

*/
