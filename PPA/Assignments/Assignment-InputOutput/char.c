

#include<stdio.h>

void main(){

	char ch;

	printf("Enter character : ");
	scanf("%c",&ch);

	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		printf("%c is a vowel\n",ch);
	else
		printf("%c is a consonant\n",ch);

}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-InputOutput$ ./a.out 
Enter character : a
a is a vowel
shital@sarode:~/Desktop/PPA/Assignments/Assignment-InputOutput$ ./a.out 
Enter character : b
b is a consonant
*/
