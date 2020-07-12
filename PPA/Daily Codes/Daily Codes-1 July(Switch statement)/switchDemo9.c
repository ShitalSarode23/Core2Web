

#include<stdio.h>
void main(){

	int a=10;
	int b=20;
	char ch='S';

	switch(a){

		case 10:

		switch(b){


			case 20:
				printf("20\n");
				printf("Inside 2nd switch\n");
				break;
		}

		printf("outside first switch\n");
	}

		printf("outside second switch\n");


}
