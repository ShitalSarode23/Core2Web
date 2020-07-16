

#include<stdio.h>

void main(){

	int sum = 0;
	int startNum = 0;
	int endNum = 0;

	printf("Enter Starting number & Ending Number :\n");
	scanf("%d %d",&startNum,&endNum);

	for(int i=startNum;i<=endNum;i++){

		sum +=i;
	}

		printf("Sum = %d\n",sum);
}
