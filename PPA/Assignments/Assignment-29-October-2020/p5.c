
#include<stdio.h>
void main(){

	int empId;
	char name[20],cmpname[20],desg[20];
	printf("Enter Employee Id:");
	scanf("%d",&empId);
	printf("Employee Id:%d\n",empId);
	printf("Enter Employee Name:");
	scanf("%c",&cmpname);
	gets(name);
	printf("Employee name:%s\n",name);
	printf("Enter Comapany Name:");
	gets(cmpname);
	printf("Employee Company name:%s\n",cmpname);
	printf("Enter Designation:");
	gets(desg);
	printf("Employee designation:%s\n",desg);

}/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-29-October-2020$ ./a.out 
Enter Employee Id:23
Employee Id:23
Enter Employee Name:shital
Employee name:shital
Enter Comapany Name:amazon   
Employee Company name:amazon
Enter Designation:software engineer
Employee designation:software engineer
*/
