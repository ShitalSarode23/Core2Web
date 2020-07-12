

#include<stdio.h>
void main(){

	int a=5,b=3;

	switch(a){					//a=5

		case 1:
			printf("One\n");

		case 5:				
			printf("two\n");		//two

		case 'b':				//error	if we take (b)	
			printf("three\n");		//three

		case 'a':				
			printf("four\n");		//four

		default:					
			printf("default\n");		//default




	}

}
