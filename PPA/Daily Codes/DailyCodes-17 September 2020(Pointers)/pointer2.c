

#include<stdio.h>
void main(){

	int a = 110;
	int *ptr = &a;
	
	char ch = 'S';
	char *cptr = &ch;

	float x = 11.4;
	float *fptr = &x;

	double d = 1.10;
	double *dptr = &d;
	printf("size of data types = %ld %ld %ld %ld\n",sizeof(a),sizeof(ch),sizeof(x),sizeof(d));
	printf("Size of pointers = %ld %ld %ld %ld\n",sizeof(ptr),sizeof(cptr),sizeof(fptr),sizeof(dptr));

}
/*shital@sarode:~/Desktop/PPA/Daily Codes/DailyCodes-17 September 2020(Pointers)$ ./a.out 
size of data types = 4 1 4 8
Size of pointers = 8 8 8 8

*/
