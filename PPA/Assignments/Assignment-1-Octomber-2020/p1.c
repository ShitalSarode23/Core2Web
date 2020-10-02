
#include<stdio.h>
void main(){

	int arr1[] = {1,2,3,4,5};
	int arr2[] = {9,8,7,6,5};

	int *iptr = arr1;   //if we declared pointer as a constant then we can not assign another array address to it, so we can not do that.
	printf("Array 1:\n");
	for(int i = 0;i<5;i++){

		printf("arr1[%d] = %d and address is %p\n",i,*(iptr+i),(iptr+i));
	}
	printf("Array 2:\n");
	iptr = arr2;
	for(int i = 0;i<5;i++){

		printf("arr2[%d] = %d and address is %p\n",i,*(iptr+i),(iptr+i));
	}
	
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-1-Octomber-2020$ ./a.out 
Array 1:
arr1[0] = 1 and address is 0x7fff2d96d940
arr1[1] = 2 and address is 0x7fff2d96d944
arr1[2] = 3 and address is 0x7fff2d96d948
arr1[3] = 4 and address is 0x7fff2d96d94c
arr1[4] = 5 and address is 0x7fff2d96d950
Array 2:
arr2[0] = 9 and address is 0x7fff2d96d960
arr2[1] = 8 and address is 0x7fff2d96d964
arr2[2] = 7 and address is 0x7fff2d96d968
arr2[3] = 6 and address is 0x7fff2d96d96c
arr2[4] = 5 and address is 0x7fff2d96d970
*/
