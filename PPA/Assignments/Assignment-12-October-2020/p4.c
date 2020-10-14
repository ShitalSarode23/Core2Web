
#include<stdio.h>
void main(){

	char arr[8] = {'D','e','a','d','p','o','o','l'};
	char arr1[8] = {'S','u','p','e','r','m','a','n'};
	void * varr[2] = {arr,arr1};
	for(int i = 0;i<2;i++){

		for(int j = 0;j<8;j++){

			printf("%c",*((char*)*(varr+i)+j));
		}
		printf("\n");
	}

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-12-October-2020$ cc p4.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-12-October-2020$ ./a.out 
Deadpool
Superman
*/
