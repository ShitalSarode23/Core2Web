#include<stdio.h>
void main(){

	int p,noy,roi,SI;
	printf("Enter principle amount:");
	scanf("%d",&p);
	printf("Enter no of years:");
	scanf("%d",&noy);
	printf("Enter rate of interest:");
	scanf("%d",&roi);
	SI = (p*roi*noy)/100;
	printf("Simple Interest:%d\n",SI);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-20 August 2020$ ./a.out 
Enter principle amount:1000
Enter no of years:5
Enter rate of interest:0.8
Simple Interest:6250.00
*/
