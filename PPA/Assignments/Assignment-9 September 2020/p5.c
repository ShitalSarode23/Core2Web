
#include<stdio.h>
void main(){

	int n1,n2,l;
	printf("Enter two numbers to find GCD:");
	scanf("%d %d",&n1,&n2);
	if(n1>n2)
		l = n1;
	else
		l = n2;
	for(int i =l;i>1;i--){

		if(n1 % i == 0 && n2 % i == 0){
			printf("GCD = %d\n",i);
			break;
		}
	}
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-9 September 2020$ ./a.out 
Enter two numbers to find GCD:25 15
GCD = 5
*/
