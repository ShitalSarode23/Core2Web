

#include<stdio.h>
int main(){
	int DecNum,counter,shiftval,cnt=0;
	printf("Enter Decimal Number:");
	scanf("%d",&DecNum);
	printf("Binary Number for %d is:",DecNum);
	for(counter=31;counter>=0;counter--){

		shiftval=DecNum>>counter;
		if(shiftval & 1){

			if(cnt==4){

				printf(" ");
				cnt=0;
			}
			printf("1");
		}
		else{
			if(cnt==4){

				printf(" ");
				cnt=0;
			}
			printf("0");
		}cnt++;

		}printf("\n");
		return 0;
}
