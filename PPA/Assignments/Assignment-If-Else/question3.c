

#include<stdio.h>
void main(){

	int ilc=15,olc=25;

	if(olc>ilc)
		printf("olc:%d\n",olc);		//this will execute cause olc>ilc =25>15

	if(ilc<olc);{				//; Null statement
		printf("ilc:%d\n",ilc);		//this is a separete block(not part of if) so this also execute
	}

		printf("olc:%d\n",olc);		//it will execute evenif if will not cause it is out of if block 
		printf("ilc:%d\n",ilc);
}

