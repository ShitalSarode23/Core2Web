
#include<stdio.h>
void main(){

	char ch;
	printf("Enter character: ");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
		printf("Letter %c is in uppercase\n",ch);
	else if(ch>='a' && ch<='z')
		printf("Letter %c is in lowercase\n",ch);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-19 August 2020$ ./a.out 
Enter character: v
Letter v is in lowercase
*/
