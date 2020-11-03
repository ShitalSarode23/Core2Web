
#include<stdio.h>
void myStrRev(char str[20],int ind){

	printf("String: %s\n",str);
	char strRev[20];
	int i,cnt = ind-1;
	for(i = 0;i<=ind;i++){

		strRev[i] = str[cnt];
		cnt--;
	}
	strRev[i] = '\0';
	printf("Reverse String: %s\n",strRev);
}
void main(){
	char str[20],ch;
	int ind = 0;
	while((ch = getchar())!='\n'){

		str[ind] = ch;
		ind++;
	}
	str[ind] = '\0';
	myStrRev(str,ind);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-31-October-2020$ ./a.out 
Shital    
String: Shital
Reverse String: latihS
shital@sarode:~/Desktop/PPA/Assignments/Assignment-31-October-2020$ ./a.out 
Shashi Sir
String: Shashi Sir
Reverse String: riS ihsahS
*/
