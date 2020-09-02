
#include<stdio.h>
void main(){

	int dis,time;
	printf("Distance in m:");
	scanf("%d",&dis);
	printf("Time in sec:");
	scanf("%d",&time);

	int vel = dis/time;
	printf("The velocity of a particle roaming in a Space is %dm/s\n",vel);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-2-September 2020$ ./a.out 
Distance in m:100
Time in sec:20
The velocity of a particle roaming in a Space is 5m/s

*/
