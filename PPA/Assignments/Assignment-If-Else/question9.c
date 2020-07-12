

#include<stdio.h>
void main(){


	int number=10;

	if(number!=0 && number>0){				//1

		printf("%d is a positive no\n",number);
		number=-5;					///number becomes -5
	}
	if(number<0 ){						//1

		printf("%d is a negtive no\n",number);		 
		number=0;					//number becomes 0
	}
	if(number==0){						//1

		printf("number is zero\n");			
		number=15;					//number becomes 15
	}
	if(number%4==0);{					//null statement
		printf("%d is divisible by 4\n",number);	//out of if 
	}


}
