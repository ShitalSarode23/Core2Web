
#include<stdio.h>
void main(){

	float f1 = 23.4,f2 = 43.23,f3 = 32.22,f4 = 68.21,f5 = 9.8;

	float *farr[] = {&f1,&f2,&f3,&f4,&f5};
	float max = *farr[0];
	int ind = 0;
	for(int i = 0;i<5;i++){
		printf("Elements is %d:%f\n",i+1,*farr[i]);
		if(*farr[i]>max){
			max = *farr[i];
			ind = i;
		}
	}
	printf("Biggest value is %f & its index is %d\n",max,ind);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-12-October-2020$ cc p2.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-12-October-2020$ ./a.out 
Elements is 1:23.400000
Elements is 2:43.230000
Elements is 3:32.220001
Elements is 4:68.209999
Elements is 5:9.800000
Biggest value is 68.209999 & its index is 3

*/
