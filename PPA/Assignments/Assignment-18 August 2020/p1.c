#include<stdio.h>
void main(){
		char ch;
		printf("Enter Character:");
		scanf("%c",&ch);
		if(ch>='A' && ch<='Z' || ch >='a' && ch<='z')
			printf("%c is an alphabet\n",ch);
		else
			printf("%c is an character\n",ch);	
}/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-18 August 2020$ ./a.out 
Enter Character:v
v is an alphabet
*/
