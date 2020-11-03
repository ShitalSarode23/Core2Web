
#include<stdio.h>
int myStrLen(char *str){

	int cnt = 0;
	while(*str !='\0'){
		cnt++;
		str++;
	}
	return cnt;
}
int isPalindrome(char * str1,char* str2,int l1){

	for(int i = 0;i<l1;i++){

		if(*str1!=*str2)
			return 0;
		else{
			str1++;
			str2++;
		}
	}
	return 1;
}
void main(){
	
	char *str1 = "Shital";
	char *str2 = "Shital";	
	int l1,l2;
	l1 = myStrLen(str1);
	l2 = myStrLen(str2);
	if(l1 == l2){
		if(isPalindrome(str1,str2,l1))
			printf("Palindrome\n");
		else
			printf("not Palindrome\n");
	}
	else
		printf("not Palindrome\n");

}/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-31-October-2020$ cc p5.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-31-October-2020$ ./a.out 
Palindrome

*/
