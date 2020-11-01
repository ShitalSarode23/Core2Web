#include<stdio.h>
void main(){

	char carr[2];
	void *vptr[10];
	int iarr[8];
	printf("Enter Password(First two must be character..):\n");
	for(int i = 0;i<10;i++){
		if(i<2){
			scanf(" %c",&carr[i]);
			vptr[i] = &carr[i];
		}
		else{
	
			scanf("%d",&iarr[i]);
			vptr[i] = &iarr[i];
		}
	}
	printf("Password:");
	for(int k = 0;k<10;k++){
		if(k<2)
			printf("%c",*((char*)vptr[k]));
		else
			printf("%d",*((int*)vptr[k]));
	}
	printf("\n");
}
