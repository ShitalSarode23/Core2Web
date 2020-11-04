
#include<stdio.h>
int main(){

	char *str1 = "Shital";
	char *str2 = "Shital";

	while(*str1 !='\0'){

		if(*str1 != *str2)
			return 0;
		str1++;
		str2++;
	}
	printf("Both Strings are equal\n");

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-2-November-2020$ cc p2.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-2-November-2020$ ./a.out 
Both Strings are equal
*/
