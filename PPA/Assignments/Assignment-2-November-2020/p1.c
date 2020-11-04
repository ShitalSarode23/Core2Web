
#include<stdio.h>
void main(){

	int k,i;
	printf("Enter String:");
	char str[20],ch;
	int ind = 0;
	while((ch = getchar())!='\n'){

		str[ind] = ch;
		ind++;
	}
	str[ind] = '\0';
	printf("String: %s\n",str);
	char strRev[20];
	int cnt = ind-1;
	for(i = 0;i<ind;i++){

		strRev[i] = str[cnt];
		cnt--;
	}
	strRev[i] = '\0';
	printf("Reverse String: %s\n",strRev);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-2-November-2020$ ./a.out 
Enter String:Shital
String: Shital
Reverse String: latihS
*/
