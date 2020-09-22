

#include<stdio.h>
void main(){

	int s1,s2,s3,p1,p2,p3;
	printf("Enter roll numbers & pincodes of city of 3 students: ");
	scanf("%d",&s1);
	scanf("%d",&p1);
	scanf("%d",&s2);
	scanf("%d",&p2);
	scanf("%d",&s3);
	scanf("%d",&p3);

	int *s1ptr = &s1;
	int *s2ptr = &s2;
	int *s3ptr = &s3;
	int *p1ptr = &p1;
	int *p2ptr = &p2;
	int *p3ptr = &p3;

	printf("Roll no :%d,Pincode: %d\n",*s1ptr,*p1ptr);				//10
	printf("Roll no :%d,Pincode: %d\n",*s2ptr,*p2ptr);				//10
	printf("Roll no :%d,Pincode: %d\n",*s3ptr,*p3ptr);				//10

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-22-September 2020$ ./a.out 
Enter roll numbers & pincodes of city of 3 students: 
1
411041
2
423105
3
411041
Roll no :1,Pincode: 411041
Roll no :2,Pincode: 423105
Roll no :3,Pincode: 411041

*/
