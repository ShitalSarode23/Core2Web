

#include<stdio.h>

void main(){

	char *str = "ONE";
	str++;

	switch(str){

		case "ONE":
			printf("BRAZIL ");
			break;
		case "NE":
			printf("Toy Story ");
			break;
		case "N":
			printf("His Girl Friday ");
			break;
		case "E":
			printf("Casino Royale ");
	}

}
/*
shital@sarode:~/Desktop/PPA/CodeSnippet/CodeSnippet-22July2020$ cc p8.c 
p8.c: In function ‘main’:
p8.c:10:9: error: switch quantity not an integer
   10 |  switch(str){
      |         ^~~
p8.c:12:3: error: case label does not reduce to an integer constant
   12 |   case "ONE":
      |   ^~~~
p8.c:15:3: error: case label does not reduce to an integer constant
   15 |   case "NE":
      |   ^~~~
p8.c:18:3: error: case label does not reduce to an integer constant
   18 |   case "N":
      |   ^~~~
p8.c:21:3: error: case label does not reduce to an integer constant
   21 |   case "E":
*/
