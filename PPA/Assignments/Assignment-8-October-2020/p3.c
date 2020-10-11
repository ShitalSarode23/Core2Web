
#include<stdio.h>
void main(){

	int arr[3][3];
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			scanf("%d",&*(*(arr+i)+j));
		}
	}
	int arr1[3][3];
	int flag = 0;
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			if(*(*(arr+i)+j) != -*(*(arr+j)+i))
				flag = 1;
		}
	}
	if(flag == 0)
		printf("It is a Skew Sysmmetric mtrix\n");
	else
		printf("It is not a Skew Sysmmetric mtrix\n");

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-8-October-2020$ ./a.out 
0 3 -1
-3 0 8
1 -8 0
It is a Skew Sysmmetric mtrix

*/
