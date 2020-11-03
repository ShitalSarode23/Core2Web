
#include<stdio.h>
void main(){

	char str[20],ch;
	int ind = 0;

	while((ch = getchar())!='\n'){

		str[ind] = ch;
		ind++;
	}
	str[ind] = '\0';
	int cnt1 = 0,cnt2 = 0,cnt3 = 0,cnt4 = 0,cnt5 = 0;
	for(int i = 0;i<ind;i++){

		if(str[i] == 'a' || str[i] =='A')
			cnt1++;
		else if(str[i] == 'e' || str[i] =='E')
			cnt2++;
		else if(str[i] == 'i' || str[i] =='I')
			cnt3++;
		else if(str[i] == 'o' || str[i] =='O')
			cnt4++;
		else if(str[i] == 'u' || str[i] =='U')
			cnt5++;
	}
	printf("a Occured %d times\n",cnt1);
	printf("e Occured %d times\n",cnt2);
	printf("i Occured %d times\n",cnt3);
	printf("o Occured %d times\n",cnt4);
	printf("u Occured %d times\n",cnt5);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-31-October-2020$ ./a.out 
Core2web Technologies
a Occured 0 times
e Occured 4 times
i Occured 1 times
o Occured 3 times
u Occured 0 times
*/
