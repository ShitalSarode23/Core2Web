

#include<stdio.h>

void main(){

	int movie = 1;
	switch(movie<<2+movie){

		default:
			printf("3 Idiots ");
		case 4:
			printf("Ghajini ");
		case 5:
			printf("Krish ");
		case 8:
			printf("Race  ");
	}

}
/*
shital@sarode:~/Desktop/PPA/CodeSnippet/CodeSnippet-22July2020$ ./a.out 
Race  */
