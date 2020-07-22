

#include<stdio.h>

void main(){

	int const x = 0;
	switch(5/4/3){

		case x:
			printf("Clinton ");
			break;
		case x+1:
			printf("Gandhi ");
			break;
		case x+2:
			printf("Gates ");
			break;
		default:
			printf("Brown ");
	}

}
/*
shital@sarode:~/Desktop/PPA/CodeSnippet/CodeSnippet-22July2020$ cc p6.c
p6.c: In function ‘main’:
p6.c:10:3: error: case label does not reduce to an integer constant
   10 |   case x:
      |   ^~~~
p6.c:13:3: error: case label does not reduce to an integer constant
   13 |   case x+1:
      |   ^~~~
p6.c:16:3: error: case label does not reduce to an integer constant
   16 |   case x+2:
*/
