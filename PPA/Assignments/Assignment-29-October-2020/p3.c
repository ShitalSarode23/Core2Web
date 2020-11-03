
#include<stdio.h>
void main(){

	char str[20],ch;
	int ind = 0;
	while((ch = getchar()) !='\n'){

		str[ind] = ch;
		ind++;
	}
	str[ind] = '\0';
//	printf("%s ",str);
	for(int i = 0;i<ind;i++){

		printf("%c ",*(str+i));
	}
	printf("\n");

}/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-29-October-2020$ cc p3.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-29-October-2020$ ./a.out 
Core2web@gmail.com
C o r e 2 w e b @ g m a i l . c o m 
*/
