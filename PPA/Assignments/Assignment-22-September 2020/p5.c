
#include<stdio.h>
void main(){

	int emp_id,emp_age,emp_sal;
	printf("Enter Employee_id: ");
	scanf("%d",&emp_id);
	printf("Enter Employee_age: ");
	scanf("%d",&emp_age);
	printf("Enter Employee_salary: ");
	scanf("%d",&emp_sal);
	int *e_idptr = &emp_id;
	int *e_ageptr = &emp_age;
	int *e_salptr = &emp_sal;
	printf("Employee_id = %d\nEmployee_age = %d\nEmployee_salary = %d\n",*e_idptr,*e_ageptr,*e_salptr);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-22-September 2020$ ./a.out 
Enter Employee_id: 2307
Enter Employee_age: 21
Enter Employee_salary: 45000
Employee_id = 2307
Employee_age = 21
Employee_salary = 45000

*/
