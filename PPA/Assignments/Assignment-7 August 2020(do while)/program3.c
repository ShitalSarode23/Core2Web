
#include<stdio.h>
void main(){

	char agree;
	do{

		int ch;
		printf("Welcome To Burger King,Please Selct from the following : \n");
		printf("1. Veg\n2. Non Veg\n");
		scanf("%d",&ch);
		switch(ch){

			case 1 :
				printf("Veg Blast\n");
				char choice = 'a';
				printf("a.Veggi Tikki Burger\nb.Aloo Tikki Burger\nc.Mushroom Veggie cheese Burger\nd.Peanut Butter Sweat Potato Burger\n");
				scanf(" %c",&choice);
				switch(choice){

					case 'a' :
						printf("Enjoy your Veggi Tikki Burger\n");
						break;
					case 'b' :
						printf("Enjoy your Aloo Tikki Burger\n");
						break;
					case 'c' :
						printf("Enjoy your Mushroom Veggi cheese Burger\n");
						break;
					case 'd' :
						printf("Enjoy your Peanut Butter Sweat Potato Burger\n");
						break;
					default :
						printf("Sorry...Not Available\n");
						break;
				}
				break;
			case 2 :
				printf("Non Veg Blast\n");
				char ch1 = 'A';
				printf("A.Tandoori Chiken Burger\nB. Chiken Cheese Burst Burger\nC. Chiken Chilli Cheese Burger\nD. Crispy Chiken Burger\n");
				scanf(" %c",&ch1);
				switch(ch1){

					case 'A' :
						printf("Enjoy your Tandoori Chiken Burger\n");
						break;
					case 'B' :
						printf("Enjoy your Chiken Cheese Burst Burger\n");
						break;
					case 'C' :
						printf("Enjoy your Chiken Chilli Cheese Burger\n");
						break;
					case 'D' :
						printf("Enjoy your Crispy Chiken Burger\n");
						break;
					default :
						printf("Sorry...Not Available\n");
						break;
				}
				break;
		}
	printf("Do you want to order again\n");
	scanf(" %c",&agree);
	}while(agree == 'y' || agree =='Y');
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-7 August 2020(do while)$ ./a.out 
Welcome To Burger King,Please Selct from the following : 
1. Veg
2. Non Veg
1
Veg Blast
a.Veggi Tikki Burger
b.Aloo Tikki Burger
c.Mushroom Veggie cheese Burger
d.Peanut Butter Sweat Potato Burger
d
Enjoy your Peanut Butter Sweat Potato Burger
Do you want to order again
y
Welcome To Burger King,Please Selct from the following : 
1. Veg
2. Non Veg
2
Non Veg Blast
A.Tandoori Chiken Burger
B. Chiken Cheese Burst Burger
C. Chiken Chilli Cheese Burger
D. Crispy Chiken Burger
B
Enjoy your Chiken Cheese Burst Burger
Do you want to order again
n
*/
