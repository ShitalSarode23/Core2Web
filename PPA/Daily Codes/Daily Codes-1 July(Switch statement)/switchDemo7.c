
#include<stdio.h>
void main(){

	int a=20;
	int b=30;

	switch(a){


		case 20:
			printf("Twenty\n");
	
		case 30:
			printf("30\n");
			break;
	}
	printf("outside first switch\n");
	switch(b){

		case 30:
			printf("Thirty\n");
		
		case 20:
			printf("20\n");
			break;
	}
	printf("outside second switch\n");

}
