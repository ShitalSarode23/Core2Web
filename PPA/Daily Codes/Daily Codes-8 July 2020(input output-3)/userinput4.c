

#include<stdio.h>

void main(){

	int x,y;
	int choice;

	printf("Enter value for x &y\n");
	scanf("%d %d",&x,&y);

	printf("Enter your choice\n");
	printf("1: Add\n2: Sub\n3: Mult\n4: div\n");
	scanf("%d",&choice);

	switch(choice){

		case 1:
			printf("Add = %d\n",x+y);
			break;
		case 2:
			printf("Sub = %d\n",x-y);
			break;
		case 3:
			printf("Mult = %d\n",x*y);
			break;
		case 4:
			printf("Div = %d\n",x/y);
			break;
		default:
			printf("wrong choice\n");
			break;
	}
	printf("Out of switch\n");

}
