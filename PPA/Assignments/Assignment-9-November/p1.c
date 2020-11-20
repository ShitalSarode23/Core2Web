
#include<stdio.h>
struct Student{

	int stud_rollNo;
	char *stud_name;
	int stud_fees;
	char *stud_DOB;
};
void main(){

	//struct Student stud1,stud2,stud3;
	struct Student stud1 = {1,"Tejal",234560,"09/03/2000"};
	struct Student stud2 = {2,"Darshan",224300,"09/04/1999"};
	struct Student stud3 = {3,"shital",2345436,"23/07/1999"};
	struct Student arr[3] = {stud1,stud2,stud3};
	arr[2].stud_name = "Shreya";
	for(int i = 0;i<3;i++){

		printf("Information of student %d:\n",i+1);
		printf("Student's rollno: %d\n",arr[i].stud_rollNo);
		printf("Student's fees: %d\n",arr[i].stud_fees);
		printf("Student's name: %s\n",arr[i].stud_name);
		printf("Student's DOB: %s\n",arr[i].stud_DOB);
	}
}	

/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-9-November$ ./a.out 
Information of student 1:
Student's rollno: 1
Student's fees: 234560
Student's name: Tejal
Student's DOB: 09/03/2000
Information of student 2:
Student's rollno: 2
Student's fees: 224300
Student's name: Darshan
Student's DOB: 09/04/1999
Information of student 3:
Student's rollno: 3
Student's fees: 2345436
Student's name: Shreya
Student's DOB: 23/07/1999
*/
