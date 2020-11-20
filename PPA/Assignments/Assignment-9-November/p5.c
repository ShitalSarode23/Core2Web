
#include<stdio.h>
struct Doctor{

	char *dName;
	struct Hospital{

		char *hName;
		int noOfDoc;
	}h;
};
void main(){

	struct Doctor d = {"Dr.Shukla",{"Sanjeevani",35}};
	printf("Doctor Name:%s\n",d.dName);
	printf("Hospital Name:%s\n",d.h.hName);
	printf("Number of Doctors:%d\n",d.h.noOfDoc);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-9-November$ cc p5.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-9-November$ ./a.out 
Doctor Name:Dr.Shukla
Hospital Name:Sanjeevani
Number of Doctors:35
*/
