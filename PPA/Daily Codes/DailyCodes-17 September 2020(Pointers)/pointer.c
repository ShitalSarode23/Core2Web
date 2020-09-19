

#include<stdio.h>
void main(){

	int a = 110;
	int *ptr = a;
	printf("%d\n",a);
	printf("%p\n",ptr);
	printf("%p\n",&a);

}
/*shital@sarode:~/Desktop/PPA/Daily Codes/DailyCodes-17 September 2020(Pointers)$ ./a.out 
110
0x6e
0x7fffee9104ec
*/
