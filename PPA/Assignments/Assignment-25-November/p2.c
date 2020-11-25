#include<stdio.h>
enum State{

	WORKING = 0,
	FAILED,
	FREZZED
};
enum State currState = 2;
enum State findState(){

	return currState;
}
int main(){

	(findState()==WORKING)?printf("WORKING\n"):printf("NOT WORKING\n");

	//findState() will return 2 & WORKING value = 0 so it will return false,hence NOT WORKING will be print
	return 0;
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-25-November$ cc p2.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-25-November$ ./a.out 
NOT WORKING
*/
