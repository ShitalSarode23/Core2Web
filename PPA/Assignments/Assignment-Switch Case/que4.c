

#include<stdio.h>
int main(){


	int x=2;

	switch(x<<(x+1)){					//2<<3 = 16

		default:					
			printf("\ndefault");			//default
								//no break-it will go to next case
		case 1:
			printf("\n1");				//1
			break;
		case 2:				
			printf("\n2");		
			break;
		case 3:				
			printf("\n3");
			break;
		case 4:				
			printf("\n4");
			break;
		case 8:				
			printf("\n8");
			break;

	}
	return 0;

}
