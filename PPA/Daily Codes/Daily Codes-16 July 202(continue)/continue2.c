

#include<stdio.h>

void main(){

	for(int i = 1;i<=100;i++){

		if(i%5 == 0 && i%15 ==0)
			break;
		else{
			printf("%d\n",i);
			continue;
		}

	}

}
/*
shital@sarode:~/Desktop/PPA/Daily Codes/Daily Codes-16 July 202(continue)$ ./a.out 
1
2
3
4
5
6
7
8
9
10
11
12
13
14
*/
