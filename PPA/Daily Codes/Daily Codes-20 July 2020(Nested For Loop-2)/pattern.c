
#include<stdio.h>

void main(){

	for(int i=1;i<=4;i++){

		for(int j=1;j<=4;j++){

			if((i==j && i==1)||(i==j && i==4)||(i==1 && j==4)||(i==4 && j==1))
				printf("= ");
			else
				printf("* ");
		}
		printf("\n");

	}
}
