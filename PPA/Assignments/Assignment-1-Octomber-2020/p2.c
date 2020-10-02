
#include<stdio.h>
void main(){

	int arr[5];
	for(int i = 0;i<5;i++){

		scanf("%d",&arr[i]);
	}
	int *ptr1 = arr;
	int *ptr2 = &arr;

	long x,y;
	x = ptr1;
	y = ptr2;

	printf("Before iteration element address is:%ld\n",x);
	printf("Before iteration base address is:%ld\n",y);
	for(int i = 0;i<5;i++){

		printf("Element address :%ld\n",ptr1);
		ptr1++;
		printf("Base address :%ld\n",ptr2);
		ptr2++;
	}
	x = ptr1;
	y = ptr2;
	printf("After iteration element address is:%ld\n",x);
	printf("After iteration base address is:%ld\n",y);
	printf("Difference is:%ld\n",x-y);

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-1-Octomber-2020$ ./a.out 
1 2 3 4 5
Before iteration element address is:140727209397488
Before iteration base address is:140727209397488
Element address :140727209397488
Base address :140727209397488
Element address :140727209397492
Base address :140727209397492
Element address :140727209397496
Base address :140727209397496
Element address :140727209397500
Base address :140727209397500
Element address :140727209397504
Base address :140727209397504
After iteration element address is:140727209397508
After iteration base address is:140727209397508
Difference is:0
*/
