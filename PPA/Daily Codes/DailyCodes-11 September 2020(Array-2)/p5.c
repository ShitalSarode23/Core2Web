
#include<stdio.h>
void main(){

	int size;
	printf("Enter Size of an array:");
	scanf("%d",&size);
	int numArray[size];
	printf("Enter numbers:");
	for(int i = 1;i<=size;i++){

		scanf("%d",&numArray[i]);
	}
	for(int i = 1;i<=size;i++){

		int num = numArray[i];
		int rem,sum = 0 ;
		while(num!=0){

			rem = num % 10;
			int fact = 1;
			for(int j = 1;j<=rem;j++){

				fact *= j;
			}
			sum += fact;
			num = num / 10;
		}
		if(sum == numArray[i])
			printf("Strong Number = %d\n",numArray[i]);

	}

}
/*shital@sarode:~/Desktop/PPA/Daily Codes/DailyCodes-11 September 2020(Array-2)$ ./a.out 
Enter Size of an array:5
Enter numbers:
12
34
145
78
90
Strong Number = 145
shital@sarode:~/Desktop/PPA/Daily Codes/DailyCodes-11 September 2020(Array-2)$ ./a.out 
Enter Size of an array:4
Enter numbers:1
2
3
145
Strong Number = 1
Strong Number = 2
Strong Number = 145

*/
