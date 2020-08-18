#include<stdio.h>
void main(){
		int n1,n2,n3;
		printf("Enter three numbers:");
		scanf("%d%d%d",&n1,&n2,&n3);
		if(n1>=n2){
			if(n1>=n3)
				printf("%d is Max among %d , %d & %d\n",n1,n1,n2,n3);
			else
				printf("%d is Max among %d , %d & %d\n",n3,n1,n2,n3);
		}
		else{

			if(n2>=n3)
				printf("%d is Max among %d , %d & %d\n",n2,n1,n2,n3);
			else
				printf("%d is Max among %d , %d & %d\n",n3,n1,n2,n3);

		}
		
}/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-18 August 2020$ ./a.out 
Enter three numbers:1 4 2
4 is Max among 1 , 4 & 2

*/
