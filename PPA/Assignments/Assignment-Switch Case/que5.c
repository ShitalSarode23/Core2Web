

#include<stdio.h>
void main(){


	int a;
//	printf("%d\n",((sizeof(int))>-1));
	switch(a = (sizeof(int)>-1)){			//a=(4>unsigned int)
							//a=0

		case 1:
			printf("True\n");		
			break;

		case 0:				
			printf("False\n");		//False
			break;

	}

}
