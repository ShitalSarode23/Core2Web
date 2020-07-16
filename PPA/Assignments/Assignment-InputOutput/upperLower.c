

#include<stdio.h>

void main(){

	char ch;

	scanf("%c",&ch);

	if(ch>='A' && ch<='Z')
		printf("Entered character is UPPERCASE character\n");
	else if(ch>='a' && ch<='z')
		printf("Entered character is LOWER character\n");

}
/*
A
Entered character is UPPERCASE character
shital@sarode:~/Desktop/PPA/Assignments/Assignment-InputOutput$ ./a.out 
a
Entered character is LOWER character
*/
