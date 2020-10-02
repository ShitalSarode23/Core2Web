
#include<stdio.h>
void main(){

	int s1,s2;
	printf("Enter size of first array: ");
	scanf("%d",&s1);
	int a1[s1];
	for(int i = 0;i<s1;i++)
		scanf("%d",a1+i);
	printf("Enter size of second array: ");
	scanf("%d",&s2);
	int a2[s2];
	for(int i = 0;i<s2;i++)
		scanf("%d",a2+i);
	int sum = 0;
	if(s1==s2){

		printf("Addition of two array: ");
		for(int i = 0;i<s1;i++)
			printf("%d ",*(a1+i)+*(a2+i));
	}
	else
		printf("Length is not same to perform addtion");
	printf("\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-2-Octomber-2020$ ./a.out 
Enter size of first array: 5
10 20 30 40 50
Enter size of second array: 5
1 2 3 4 5
Addition of two array: 11 22 33 44 55 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-2-Octomber-2020$ ./a.out 
Enter size of first array: 3
1 2 3
Enter size of second array: 4
3 4 5 6
Length is not same to perform addtion
*/
