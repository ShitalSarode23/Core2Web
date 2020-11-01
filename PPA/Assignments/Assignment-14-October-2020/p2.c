
#include<stdio.h>
void main(){

	int n;
	printf("Enter number of float elements:");
	scanf("%d",&n);
	float arr[n];
	void *ptr[n];
	for(int i = 0;i<n;i++){
		scanf("%f",&arr[i]);
		ptr[i] = &arr[i];
	}
	for(int i = 0;i<n;i++){
		printf("%.2f ",*((float*)(*(ptr+i))));
	}
	printf("\n");


}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-14-October-2020$ cc p2.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-14-October-2020$ ./a.out 
Enter number of float elements:4
12.2
34.5
67.678
11.3
12.20 34.50 67.68 11.30 
*/
