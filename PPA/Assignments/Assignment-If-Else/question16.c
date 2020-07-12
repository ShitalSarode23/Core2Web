

#include<stdio.h>
void main(){

	char ch;
	printf("Enter character ");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
		printf("Character is uppercase\n");
	else if(ch>='a' && ch<='z')
		printf("Character is lowercase\n");
	else
		printf("%c is special character\n",ch);



}
