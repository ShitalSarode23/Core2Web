

#include<stdio.h>

void main(){

	char ch1,ch2;
	printf("Lower bound of range:\n");
	printf("Upper bound of range:\n");
	scanf("%c%c",&ch1,&ch2);

	while(ch1<=ch2){

		if(ch1 =='A' || ch1 =='E' || ch1 =='I' || ch1 =='O' || ch1 == 'U')
			printf("%c is Vowel\n",ch1);
		else
			printf("%c is Consonant\n",ch1);
		ch1++;

	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-while-loop$ ./a.out 
Lower bound of range:
Upper bound of range:
CF
C is Consonant
D is Consonant
E is Vowel
F is Consonant
*/
