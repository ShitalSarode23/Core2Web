
#include<stdio.h>
void main(){
		char ch ;
		printf("Enter character :");
		scanf("%c",&ch);
		if(ch=='A' || ch=='E' || ch =='I' || ch=='O' || ch=='U' || ch=='a' || ch =='e' || ch=='i' || ch=='o' || ch=='u')
			printf("%c is a Vowel\n",ch);
		else
			printf("%c is a Consonant\n",ch);
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-18 August 2020$ ./a.out 
Enter character :E
E is a Vowel
*/
