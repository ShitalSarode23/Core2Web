
#include<stdio.h>
void main(){

	int len;
	printf("Enter length of an array: ");
	scanf("%d",&len);
	int arr[len];
	int sqr[len];
	for(int i = 0;i<len;i++){
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i<len;i++){
		scanf("%d",&sqr[i]);
	}
	int flag = 0;
	for(int i = 0;i<len;i++){
		if(arr[i]*arr[i] == sqr[i])
			flag = 1;
		else{
			flag = 0;
			break;
		}
	}
	if(flag == 1)
		printf("1\n");
	else
		printf("-1\n");

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-21-September 2020$ ./a.out 
Enter length of an array: 5
1 2 3 4 5
1 4 9 16 25
1
shital@sarode:~/Desktop/PPA/Assignments/Assignment-21-September 2020$ ./a.out 
Enter length of an array: 5                  
1 2 3 4 5 
1 4 6 16 25
-1

*/
