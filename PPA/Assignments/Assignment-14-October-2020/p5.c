
#include<stdio.h>
void main(){

	int id;
	float salary;
	char class;
	printf("Enter Employee ID:");
	scanf("%d",&id);
	printf("Enter Employee Salary:");
	scanf("%f",&salary);
	printf("Enter Employee Class:");
	scanf(" %c",&class);
	void *emp[] = {&id,&salary,&class};
	printf("Employee ID : %d\n",*((int*)emp[0]));
	printf("Employee Salary : %f\n",*((float*)emp[1]));
	printf("Employee Class : %c\n",*((char*)emp[2]));

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-14-October-2020$ cc p5.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-14-October-2020$ ./a.out 
Enter Employee ID:23
Enter Employee Salary:33000
Enter Employee Class:A
Employee ID : 23
Employee Salary : 33000.000000
Employee Class : A
*/
