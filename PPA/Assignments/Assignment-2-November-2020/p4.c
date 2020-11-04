
#include<stdio.h>
void revstr(char str[20],int ind){
	printf("String: %s\n",str);
	char strRev[20];
	int i,cnt = ind-1;
	for(i = 0;i<ind;i++){

		strRev[i] = str[cnt];
		cnt--;
	}
	strRev[i] = '\0';
	printf("Reverse String: %s\n",strRev);
}
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
	char str1[20],str2[20];
	int ind1=0,ind2=0;
	for(int i = 0;i<ind/2;i++){

		str1[i]=str[i];
		ind1++;
	}
	str1[i] = '\0';
	revstr(str1,ind1+1);
	for(int i = (ind/2);i<=ind;i++){

		str2[i]=str[i];
		ind2++;
	}
	str2[i] = '\0';
	revstr(str2,ind2+1);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-2-November-2020$ ./a.out 
Enter String:abcd
String: 
Reverse String: cb
String: 
Reverse String: dc

*/
