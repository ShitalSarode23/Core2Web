
#include<stdio.h>
void main(){

	float arrsal[5];

	printf("enter salary :\n");
	for(int i = 0; i<5; i++)
		scanf("%f",&arrsal[i]);
	float *iptr1 = arrsal;
	int yr;
	char ch;
	
	do{

	printf("which year salary do you want ?\n");
	scanf("%d",&yr);

	if(yr == 2015)
		printf("%.2f\n",*(iptr1));
	else if(yr == 2016)
		printf("%.2f\n",*(iptr1 + 1));
	else if(yr == 2017)
		printf("%.2f\n",*(iptr1 + 2));
	else if(yr == 2018)
		printf("%.2f\n",*(iptr1 + 3));
	else if(yr == 2019)
		printf("%.2f\n",*(iptr1 + 4));
	else
		printf("Invalid input\n");
	
	printf("you want another : ");
	scanf(" %c",&ch);
	
	}while(ch == 'y' || ch == 'Y');

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-30-September-2020$ ./a.out 
enter salary :
1000 20125 1254 2356 2145
which year salary do you want ?
2015
1000.00
you want another : y
which year salary do you want ?
2018
2356.00
you want another : n
*/
