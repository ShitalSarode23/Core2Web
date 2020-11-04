
#include<stdio.h>
void main(){

	int k,i;
	printf("Enter String:");
	char str[20],ch;
	char words[20][20];
	int ind = 0;
	while((ch = getchar())!='\n'){

		str[ind] = ch;
		ind++;
	}
	str[ind] = '\0';
	int cnt=0,j=0;
	for(int i = 0;i<=ind;i++){

		if(str[i] == ' ' || str[i] == '\0'){

			words[cnt][j]='\0';
			cnt++;
			j = 0;
		}
		else{

			words[cnt][j]=str[i];
			j++;
		}
	}
	for(i=0;i<cnt;i++)
		printf("%s\n",words[i]);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-2-November-2020$ cc p5.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-2-November-2020$ ./a.out 
Enter String:Change is inevitable
Change
is
inevitable

*/
