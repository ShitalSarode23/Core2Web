
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){

	char str[20],str1[20];
	printf("Enter string:");
	scanf("%[^\n]",str);
	//printf("%s\n",str);
	for(int i = 0;i<=strlen(str);i++){

		if(str[i] == ' ')
			str1[i] = '-';
		else
			str1[i] = str[i];
	}
	printf("%s\n",str1);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-29-October-2020$ ./a.out 
Enter string:Elon Reeve Musk
Elon-Reeve-Musk
*/
