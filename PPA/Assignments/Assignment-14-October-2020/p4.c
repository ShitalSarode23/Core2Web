

#include<stdio.h>
void main(){

	void* vptr[7];
	float frr[5];
	int a = 2,b = 4;

	vptr[0] = &a;
	vptr[1] = &b;

	for(int i = 0; i<5; i++){

		scanf("%f",&frr[i]);
		vptr[i+2] = &frr[i];
		
	}

	for(int i = 0; i<7; i++){

		if(i<2)
			printf("%d ",*((int*)vptr[i]));
		else
			printf("%.2f ",*((float*)vptr[i]));
	}
	printf("\n");
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-14-October-2020$ cc p4.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-14-October-2020$ ./a.out 
12.34
45.32
554.12
13.2
4.3
2 4 12.34 45.32 554.12 13.20 4.30 

*/
