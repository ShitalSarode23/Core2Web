
#include<stdio.h>
void main(){

	int len;
	printf("Enter length of your name:");
	scanf("%d",&len);

	char arr[len];
	char* cptr[len];
	printf("Enter name:");
	for(int i = 0;i<len;i++){

		scanf("%c",&arr[i]);
		cptr[i] = &arr[i];
	}
	int ind = 0;
	for(int i = len-1;i>=0;i--){

		printf("%c",*cptr[i]);
		if(*cptr[i] == ' ')
			ind = i;
	}
	printf("Space at %dth index\n",ind);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-12-October-2020$ cc p1.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-12-October-2020$ ./a.out 
Enter length of your name:13
Enter name:Shital Sarode
doraS latihS
Space at 7th index
*/
