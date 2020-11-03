
#include<stdio.h>
void main(){

	int marr[5][3];
	for(int i = 0;i<5;i++){

		printf("Enter Marks of Student %d: ",i+1);
		for(int j = 0;j<3;j++){

			scanf("%d",&marr[i][j]);
		}
	}
	for(int i = 0;i<5;i++){

		int max = marr[i][0];
		for(int j = 0;j<3;j++){

			if(marr[i][j] > max){

				max = marr[i][j];
			}
		}
		printf("Highest Marks of Student %d is %d\n",i+1,max);

	}
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-19-October-2020$ cc p1.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-19-October-2020$ ./a.out 
Enter Marks of Student 1: 78 85 75
Enter Marks of Student 2: 85 96 80
Enter Marks of Student 3: 76 94 82
Enter Marks of Student 4: 68 71 80
Enter Marks of Student 5: 66 98 87                                                           
Highest Marks of Student 1 is 85
: Highest Marks of Student 2 is 96
: Highest Marks of Student 3 is 94
: Highest Marks of Student 4 is 80
: Highest Marks of Student 5 is 98
*/
