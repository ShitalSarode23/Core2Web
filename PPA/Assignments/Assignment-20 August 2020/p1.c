
#include<stdio.h>
void main(){

	int side1,side2,hypotenuse;
	printf("Enter three sides of triangle: ");
	scanf("%d%d%d",&side1,&side2,&hypotenuse);
	if((side1*side1)+(side2*side2) == (hypotenuse*hypotenuse))
		printf("Triangle Satisfies the pythagorus theorem\n");
	else
		printf("Triangle does not Satisfy the pythagorus theorem\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-20 August 2020$ ./a.out 
Enter three sides of triangle: 3 4 5
Triangle Satisfies the pythagorus theorem
*/
