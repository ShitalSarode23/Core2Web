
#include<stdio.h>
void main(){

	int arr[5];
	float frr[5];
	char crr[5];
	
	printf("enter integers : \n");
	for(int i = 0; i<5; i++)
		scanf("%d",&arr[i]);
	printf("enter characters : \n");
	for(int i = 0; i<5; i++)
		scanf(" %c",&crr[i]);
	printf("enter float values : \n");
	for(int i = 0; i<5; i++)
		scanf("%f",&frr[i]);

	int *iptr = arr;
	float *fptr = frr;
	char *cptr = crr;

	printf("%d\n",*iptr);
	iptr = arr + 1;
	printf("%d\n",*iptr);
	iptr = iptr - 1;
	printf("%d\n",*iptr);

	printf("%.2f\n",*fptr);

	fptr = frr + 1;
	printf("%.2f\n",*fptr);
	fptr = fptr - 1;
	printf("%.2f\n",*fptr);

	printf("%c\n",*cptr);

	cptr = crr + 1;
	printf("%c\n",*cptr);
	cptr = cptr - 1;  
	printf("%c\n",*cptr);


	printf("\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-30-September-2020$ ./a.out 
enter integers : 
1 2 3 4 5
enter characters : 
a b c d e
enter float values : 
1.2 3.4 5.32 12.1 9.87
1
2
1
1.20
3.40
1.20
a
b
a
*/
	
