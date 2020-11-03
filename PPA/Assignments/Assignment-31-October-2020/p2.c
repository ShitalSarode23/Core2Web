
#include<stdio.h>
void isUpper(char str[],int ind){

	for(int i = 0;i<ind;i++){

		if(str[i] >=97 && str[i]<=121)
			str[i] -= 32;
	}
	printf("%s\n",str);
}
void isLower(char str[],int ind){

	for(int i = 0;i<ind;i++){

		if(str[i] >=65 && str[i]<=90)
			str[i] += 32;
	}
	printf("%s\n",str);
}
void main(){

	char str[20],ch;
	int ind = 0;
	while((ch = getchar())!='\n'){

		str[ind] = ch;
		ind++;
	}
	str[ind] = '\0';
	char c;
	printf("Do you String in upper case or lower case(u/l):");
	scanf("%c",&c);
	if(c == 'u')
		isUpper(str,ind);
	else if(c == 'l')
		isLower(str,ind);
	else
		printf("Wrong choice\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-31-October-2020$ ./a.out 
Shital Sarode
Do you String in upper case or lower case(u/l):u
SHITAL SARODE
shital@sarode:~/Desktop/PPA/Assignments/Assignment-31-October-2020$ ./a.out 
Core2Web
Do you String in upper case or lower case(u/l):l
core2web
*/
