

#include<stdio.h>
void main(){

	int a,b,c,d;
	printf("Enter four values: ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int *aptr,*bptr,*cptr,*dptr;
	aptr = &a;
	bptr = &b;
	cptr = &c;
	dptr = &d;

	printf("a = %d\n",a);				//10
	printf("b = %d\n",b);				//20
	printf("c = %d\n",c);				//30
	printf("d = %d\n",d);				//40
	printf("aptr = %p\n",aptr);			//100 Address of a
	printf("bptr = %p\n",bptr);			//200 Address of b
	printf("cptr = %p\n",cptr);			//300 Address of c
	printf("dptr = %p\n",dptr);			//400 Address of d
	printf("Size of a = %ld\n",sizeof(a));		//4 Size of integer is 4 byte
	printf("Size of b = %ld\n",sizeof(b));		//4
	printf("Size of c = %ld\n",sizeof(c));		//4
	printf("Size of d = %ld\n",sizeof(d));		//4
	printf("Size of aptr = %ld\n",sizeof(aptr));	//8 Size of every type of pointer is 8 byte(Still depends on System)
	printf("Size of bptr = %ld\n",sizeof(bptr));	//8
	printf("Size of cptr = %ld\n",sizeof(cptr));	//8
	printf("Size of dptr = %ld\n",sizeof(dptr));	//8

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-22-September 2020$ ./a.out 
Enter four values: 
10
20
30
40
a = 10
b = 20
c = 30
d = 40
aptr = 0x7fff8d61a518
bptr = 0x7fff8d61a51c
cptr = 0x7fff8d61a520
dptr = 0x7fff8d61a524
Size of a = 4
Size of b = 4
Size of c = 4
Size of d = 4
Size of aptr = 8
Size of bptr = 8
Size of cptr = 8
Size of dptr = 8
*/
