
#include<stdio.h>
void main(){

	char str[20],substr[20];
	printf("Enter String:");
	gets(str);
	printf("Enter SubString:");
	gets(substr);
	//printf("%s",str);
	//printf("%s",substr);

	int l,i,j;
	for(l = 0;substr[l]!='\0';l++);
	for(i = 0,j = 0;str[i]!='\0' && substr[j]!='\0';i++){

		if(str[i] == substr[j])
			j++;
		else
			j = 0;
	}
	if(j == l)
		printf("Substring is present in given string\n");
	else
		printf("Substring is not present in given string\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-2-November-2020$ ./a.out 
Enter String:Core2web
Enter SubString:web
Substring is present in given string
*/
