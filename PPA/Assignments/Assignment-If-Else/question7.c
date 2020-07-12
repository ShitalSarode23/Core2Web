

#include<stdio.h>
void main(){

	int weight=50;

	if(weight<50 && weight >30){
		printf("You are under weight\n");
	}
	if(weight>=50 && weight <= 70){					//1
		printf("you are well maintained\n");		
	}
	if(weight > 70);{						//null statement
		printf("you are overweight you have to work hard\n");	//out of if ,so will execute
	}
}
