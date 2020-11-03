
#include<stdio.h>
void main(){

	char str[10],ch;
	int ind = 0;
	while((ch = getchar())!='\n'){

		str[ind] = ch;
		ind ++;
	}
	str[ind] = '\0';
	printf("%s\n",str);
	for(int i = 0;i<ind;i++){

		if((str[i] >='A' && str[i] <='Z') || (str[i] >='a' && str[i]<='z'))
			printf("%c is alphabet\n",str[i]);
		else if(str[i] >= '0' && str[i]<='9')
			printf("%d is digit\n",str[i]);
		else
			printf("%c is special character\n",str[i]);

	}

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-29-October-2020$ ./a.out 
c2w@
c2w@
c is alphabet
50 is digit
w is alphabet
@ is special character
*/
