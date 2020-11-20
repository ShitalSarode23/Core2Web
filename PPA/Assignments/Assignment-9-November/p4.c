
#include<stdio.h>
struct Marks{

	int m1,m2,m3;
};
void avg(struct Marks s1,struct Marks s2,struct Marks s3){

	printf("Average of subject 1:%d\n",(s1.m1+s2.m1+s3.m1)/3);
	printf("Average of subject 2:%d\n",(s1.m2+s2.m2+s3.m2)/3);
	printf("Average of subject 3:%d\n",(s1.m3+s2.m3+s3.m3)/3);
}
void main(){

	struct Marks s1 = {40,30,50};
	struct Marks s2 = {20,40,35};
	struct Marks s3 = {45,36,55};
	avg(s1,s2,s3);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-9-November$ cc p4.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-9-November$ ./a.out 
Average of subject 1:35
Average of subject 2:35
Average of subject 3:46
*/
