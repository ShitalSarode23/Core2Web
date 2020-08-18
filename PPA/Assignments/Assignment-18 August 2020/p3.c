#include<stdio.h>
void main(){
		char ch;
		printf("Enter Character:");
		scanf("%c",&ch);
		if(ch>='A' && ch<='Z' || ch >='a' && ch<='z')
			printf("%c is an alphabet\n",ch);
		else if(ch>='0' && ch<='9')
			printf("%c is a digit\n",ch);
		else
			printf("%c is a special character\n",ch);
}/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-18 August 2020$ ./a.out 
Enter Character:*
* is a special character

*/
