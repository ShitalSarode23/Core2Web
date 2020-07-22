

#include<stdio.h>

void main(){

	switch(5||4|1){

		case 3&2:
			printf("Anatomy of murder ");
			break;
		case -~11:
			printf("Planet of Apes  ");
			break;
		case 6-3<<2:
			printf("The conversation ");
			break;
		case 5>=5:
			printf("Shaun of the Dead ");
	}

}
/*
shital@sarode:~/Desktop/PPA/CodeSnippet/CodeSnippet-22July2020$ cc p10.c
p10.c: In function ‘main’:
p10.c:15:3: error: duplicate case value
   15 |   case 6-3<<2:
      |   ^~~~
p10.c:12:3: note: previously used here
   12 |   case -~11:
*/
