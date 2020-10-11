
#include<stdio.h>
void main(){

	int r,c;
	printf("Enter number of rows & columns you want for your array:");
	scanf("%d %d",&r,&c);
	int arr[r][c];
	for(int i = 0;i<r;i++){
		for(int j = 0;j<c;j++){
			scanf("%d",&*(*(arr+i)+j));
		}
	}
	printf("The entered array is:\n");
	for(int i = 0;i<r;i++){
		for(int j = 0;j<c;j++){
			printf("%d ",*(*(arr+i)+j));
		}
		printf("\n");
	}
	printf("The address of element by using formula is:\n");
	for(int i = 0;i<r;i++){
		for(int j = 0;j<c;j++){
			printf("%p ",(*(arr+i)+j));
		}
		printf("\n");
	}

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-7-October-2020$ cc p3.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-7-October-2020$ ./a.out 
Enter number of rows & columns you want for your array:2 3
1 2 3 4 5 6
The entered array is:
1 2 3 
4 5 6 
The address of element by using formula is:
0x7ffe7cf67ac0 0x7ffe7cf67ac4 0x7ffe7cf67ac8 
0x7ffe7cf67acc 0x7ffe7cf67ad0 0x7ffe7cf67ad4 

*/
