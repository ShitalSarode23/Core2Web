



#include<stdio.h>
void main(){

	int n;

  	scanf("%d",&n);

	int arr[10];

	for(int i = 0; i<10; i++)
		arr[i] = n*(i+1);

	int (*ptr)[] = &arr;

	for(int i = 0; i<10; i++)
		printf("%d ",*(*ptr + i));

	printf("\n");
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-19-October-2020$ cc p3.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-19-October-2020$ ./a.out 
2
2 4 6 8 10 12 14 16 18 20 

*/
