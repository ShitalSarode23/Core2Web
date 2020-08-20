
#include<stdio.h>
void main(){

	int m1,m2,m3,m4,m5;
	int sum,per;
	printf("Enter marks of Physics,Chemistry,Biology,Math & Computer :");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	sum = m1+m2+m3+m4+m5;
	per = sum*100/500;
	if(per>=90)
		printf("Grade A\n");
	else if(per>=80)
		printf("Grade B\n");
	else if(per>=70)
		printf("Grade C\n");
	else if(per>=60)
		printf("Grade D\n");
	else if(per>=40)
		printf("Grade E\n");
	else if(per<40)
		printf("Grade F\n");
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-20 August 2020$ ./a.out 
Enter marks of Physics,Chemistry,Biology,Math & Computer :78 87 89 76 88
Grade B
*/
