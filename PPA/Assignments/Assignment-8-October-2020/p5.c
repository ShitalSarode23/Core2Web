
#include<stdio.h>
void main(){

	int a;
	printf("Enter number:");
	scanf("%d",&a);
	int sq = a*a,cub = a*a*a;
	int *num = &a,*sqptr = &sq,*cubptr = &cub;
	int *ptr[] = {num,sqptr,cubptr};
	for(int i = 0;i<3;i++){

		printf("%d\n",*(*(ptr+i)));
	}
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-8-October-2020$ cc p5.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-8-October-2020$ ./a.out 
Enter number:3
3
9
27
*/
