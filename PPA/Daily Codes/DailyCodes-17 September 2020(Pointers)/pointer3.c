

#include<stdio.h>
void main(){

	int a = 110;
	int *ptr = &a;
	printf("%d\n",a);
	printf("%p\n",ptr);
	printf("%d\n",*ptr);

	char ch = 'A';
	char *cptr = &ch;
	printf("%c\n",ch);
	printf("%p\n",cptr);
	printf("%c\n",*cptr);

	float f = 10.6;
	float *fptr = &f;
	printf("%f\n",f);
	printf("%p\n",fptr);
	printf("%f\n",*fptr);

	double d = 23.44;
	double *dptr = &d;
	printf("%lf\n",d);
	printf("%p\n",dptr);
	printf("%lf\n",*dptr);

	

}
/*shital@sarode:~/Desktop/PPA/Daily Codes/DailyCodes-17 September 2020(Pointers)$ ./a.out 
110
0x7ffc0e512978
110
A
0x7ffc0e512977
A
10.600000
0x7ffc0e51297c
10.600000
23.440000
0x7ffc0e512980
23.440000

*/
