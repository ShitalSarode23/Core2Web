
#include<stdio.h>
void main(){

	char str[20],ch;
	int ind = 0;
	while((ch = getchar())!='\n'){

		str[ind] = ch;
		ind++;
	}
	str[ind] = '\0';
	for(int i = 0;i<ind;i++){

		if(str[i] >=97 && str[i] <=121)
			str[i] -=32; 
	}
	printf("%s\n",str);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-29-October-2020$ ./a.out 
Core2Web Technologies
CORE2WEB TECHNOLOGIES
*/
