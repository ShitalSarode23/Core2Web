

#include<stdio.h>
void main(){

	int marks=80;
	int compMarks=75;
	
	if(marks>70){

		printf("FC/Modern?\n");

		if(compMarks>80){

			printf("FC-BCS\n");
		}else{

			printf("Modern-BSC\n");
		}
	}else{

		printf("Sportsman Cricket\n");

	}

	printf("Out of if-else\n");



}
