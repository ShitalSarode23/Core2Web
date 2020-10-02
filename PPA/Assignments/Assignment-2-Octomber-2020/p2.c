
#include<stdio.h>
void main(){

	int size;
	printf("Enter length of array:");
	scanf("%d",&size);
	char arr[size];
	for(int i = 0;i<size;i++)
		scanf(" %c",arr+i);
	for(int i = 0;i<size;i++){

		if(arr[i] == 'a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u' || arr[i]=='A' || arr[i]=='E' || arr[i]=='I' || arr[i]=='O' || arr[i]=='U'){

			if(*(arr+i)>=97)
				*(arr+i) -=32;
			printf("%c ",*(arr+i));
		}
		else{
			if(*(arr+i)<97 && *(arr+i)>=65)
				*(arr+i) +=32;
			printf("%c ",*(arr+i));
		}
	}
	printf("\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-2-Octomber-2020$ ./a.out 
Enter length of array:5 
M
a
t
C
h
m A t c h 
*/
