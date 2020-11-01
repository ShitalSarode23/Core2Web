
#include<stdio.h>
void main(){

	int n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	char arr[n];
	for(int i = 0;i<n;i++){
		scanf(" %c",&arr[i]);
	}
	void *ptr[] = {arr};
	printf("Entered array:");
	for(int i = 0;i<n;i++)
		printf("%c ",arr[i]);
	printf("\n");

	for(int i = 0;i<n;i++){
		if(*((char*)(*(ptr)+i)) >='0' && *((char*)(*(ptr)+i))<='9')
			printf("Digit\n");
		else
			printf("Character\n");
	}

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-14-October-2020$ cc p1.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-14-October-2020$ ./a.out 
Enter number of elements:4
A
6
t
r
Entered array:A 6 t r 
Character
Digit
Character
Character
*/
