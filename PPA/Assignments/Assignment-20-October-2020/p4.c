


#include<stdio.h>
int isPalindrome(int n){

	int rev = 0,rem;
	int a = n;

	for(int i = n; i!=0; i = i/10){

		rem = i%10;	
		rev = rev*10 + rem;
	}

	if(rev == a)
		return 1;
	else
		return 0;
}

void main(){

	int n;
	scanf("%d",&n);
	
	if(isPalindrome(n))
		printf("%d is palindrome no,\n",n);
	else
		printf("%d is not a palindrome no.\n",n);
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-20-October-2020$ ./a.out 
12321
12321 is palindrome no,
shital@sarode:~/Desktop/PPA/Assignments/Assignment-20-October-2020$ ./a.out 
1234
1234 is not a palindrome no.

*/
