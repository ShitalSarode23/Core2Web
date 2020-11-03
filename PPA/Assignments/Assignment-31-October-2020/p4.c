
#include<stdio.h>
void myStrLen(char *str){

	int cnt = 0;
	while(*str !='\0'){
		printf("Ascii Value of %c :%d\n",*str,*str);
		cnt++;
		str++;
	}
	printf("Length of string :%d\n",cnt);
}
void main(){
	
	char str[20],ch;
	int ind = 0;
	while((ch = getchar())!='\n'){

		str[ind] = ch;
		ind++;
	}
	str[ind] = '\0';
	
	//char *str = "Shital";
	myStrLen(str);
}/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-31-October-2020$ cc p4.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-31-October-2020$ ./a.out 
Shital
Ascii Value of S :83
Ascii Value of h :104
Ascii Value of i :105
Ascii Value of t :116
Ascii Value of a :97
Ascii Value of l :108
Length of string :6
*/
