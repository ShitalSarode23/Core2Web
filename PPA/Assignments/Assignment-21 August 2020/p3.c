
#include<stdio.h>
void main(){

	int age;
	char sex,mary;
	printf("Enter age,sex(M/F),marital status(Y/N): ");
	scanf("%d",&age);
	scanf(" %c",&sex);
	scanf(" %c",&mary);
	if(sex == 'F')
		printf("She will work in only urban areas\n");
	else if(sex == 'M' && age>=20 && age<=40)
		printf("He may work anywhere\n");
	else
		printf("ERROR\n");
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-21 August 2020$ ./a.out 
Enter age,sex(M/F),marital status(Y/N): 22 F N
She will work in only urban areas
shital@sarode:~/Desktop/PPA/Assignments/Assignment-21 August 2020$ ./a.out 
Enter age,sex(M/F),marital status(Y/N): 23 M N
He may work anywhere
shital@sarode:~/Desktop/PPA/Assignments/Assignment-21 August 2020$ ./a.out 
Enter age,sex(M/F),marital status(Y/N): 25 M Y
He may work anywhere
shital@sarode:~/Desktop/PPA/Assignments/Assignment-21 August 2020$ ./a.out 
Enter age,sex(M/F),marital status(Y/N): 47 M Y
ERROR
*/
