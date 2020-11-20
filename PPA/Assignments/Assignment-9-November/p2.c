
#include<stdio.h>
struct Complex{

	int real;
	int img;
};
int ComplexAdd(struct Complex *obj1,struct Complex *obj2,int *real,int *img){

	*real = obj1->real+obj2->real;
	*img = obj1->img+obj2->img;
}
int ComplexSub(struct Complex *obj1,struct Complex *obj2,int *real,int *img){

	*real = obj1->real-obj2->real;
	*img = obj1->img-obj2->img;
}
int ComplexMul(struct Complex *obj1,struct Complex *obj2,int *real,int *img){

	*real = obj1->real*obj2->real;
	*img = obj1->img*obj2->img;
}
void main(){

	struct Complex D1 = {10,20};
	struct Complex D2 = {20,30};
	int real,img;
	ComplexAdd(&D1,&D2,&real,&img);
	printf("Addition:%d+%di\n",real,img);
	ComplexSub(&D1,&D2,&real,&img);
	printf("Subtraction:%d+%di\n",real,img);
	ComplexMul(&D1,&D2,&real,&img);
	printf("Multiplication:%d+%di\n",real,img);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-9-November$ cc p2.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-9-November$ ./a.out 
Addition:30+50i
Subtraction:-10+-10i
Multiplication:200+600i
*/
