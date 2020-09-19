

#include<stdio.h>
void main(){

	int a = 110;
	int *ptr = &a;
	printf("%d\n",a);
	printf("%p\n",ptr);
	printf("%p\n",&a);
	
	char ch = 'S';
	char *cptr = &ch;
	printf("%c\n",ch);
	printf("%p\n",cptr);
	printf("%p\n",&ch);

	float x = 11.4;
	float *fptr = &x;
	printf("%f\n",x);
	printf("%p\n",fptr);
	printf("%p\n",&x);

	double d = 1.10;
	double *dptr = &d;
	printf("%lf\n",d);
	printf("%p\n",dptr);
	printf("%p\n",&d);

}
/*shital@sarode:~/Desktop/PPA/Daily Codes/DailyCodes-17 September 2020(Pointers)$ ./a.out 
110
0x7ffe85f32608
0x7ffe85f32608
S
0x7ffe85f32607
0x7ffe85f32607
11.400000
0x7ffe85f3260c
0x7ffe85f3260c
1.100000
0x7ffe85f32610
0x7ffe85f32610
*/
