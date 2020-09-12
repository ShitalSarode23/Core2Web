
#include<stdio.h>
void main(){

	int n;
	printf("Enter Size of array:");
	scanf("%d",&n);
	char arrChar[n];
	for(int i = 1;i<=n;i++){

		scanf(" %c",&arrChar[i]);
	}
	int vcnt = 0,ccnt = 0;
	for(int i = 1;i<=n;i++){

		if(arrChar[i] == 'a' || arrChar[i] == 'e' || arrChar[i] == 'i' ||  arrChar[i] == 'o' || arrChar[i] == 'u'|| arrChar[i] == 'A' ||arrChar[i] == 'E' || arrChar[i] == 'I' || arrChar[i] == 'O' || arrChar[i] == 'U')
			vcnt++;
		else
			ccnt++;
	}
	printf("Vowels:%d\n",vcnt);
	printf("Consonants:%d\n",ccnt);
	
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-12-September 2020$ ./a.out 
Enter Size of array:4
J a E k
Vowels:2
Consonants:2
*/
