

#include<stdio.h>

void main(){

	//printf("%c",(*(1+"AB" "CD"+1)));
	switch(*(1+"AB" "CD"+1)){

		case 'A':
			printf("Pulp Fiction ");
			break;
		case 'B':
			printf("12 Angry Man ");
			break;
		case 'C':
			printf("Casabance ");
			break;
		case 'D':
			printf("Blood Diamond ");
	}

}
/*
shital@sarode:~/Desktop/PPA/CodeSnippet/CodeSnippet-22July2020$ ./a.out 
Casabance */
