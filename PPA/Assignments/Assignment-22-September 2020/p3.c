

#include<stdio.h>
void main(){

	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	char ch;
	printf("Enter character: ");
	scanf(" %c",&ch);
	float num1;
	printf("Enter float number: ");
	scanf("%f",&num1);
	double d;
	printf("Enter double number: ");
	scanf("%lf",&d);
	int *nptr = &num;
	char *cptr = &ch;
	float *fptr = &num1;
	double *dptr = &d;


	printf("Address of integer number:%p\n",nptr);
	printf("Address of Character:%p\n",cptr);
	printf("Address of float:%p\n",fptr);
	printf("Address of double:%p\n",dptr);
	printf("Address of integer number pointer:%p\n",&nptr);
	printf("Address of Character pointer:%p\n",&cptr);
	printf("Address of float pointer:%p\n",&fptr);
	printf("Address of double pointer:%p\n",&dptr);
	printf("Value of integer number:%d\n",*nptr);
	printf("Value of Character:%c\n",*cptr);
	printf("Value of float:%f\n",*fptr);
	printf("Value of double:%lf\n",*dptr);


}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-22-September 2020$ ./a.out 
Enter number: 23
Enter character: S
Enter float number: 0.5
Enter double number: 235.79      
Address of integer number:0x7ffc12c80058
Address of Character:0x7ffc12c80057
Address of float:0x7ffc12c8005c
Address of double:0x7ffc12c80060
Address of integer number pointer:0x7ffc12c80068
Address of Character pointer:0x7ffc12c80070
Address of float pointer:0x7ffc12c80078
Address of double pointer:0x7ffc12c80080
Value of integer number:23
Value of Character:S
Value of float:0.500000
Value of double:235.790000

*/
