
#include<stdio.h>
void main(){

	int len;
	printf("Enter length of an array: ");
	scanf("%d",&len);
	int arr[len];
	int freq[len];
	for(int i = 0;i<len;i++){

		scanf("%d",&arr[i]);
		freq[i] = -1;
	}
	for(int i = 0;i<len;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	int c; 
	for(int i = 0;i<len;i++){
		c = 1;
		for(int j = i+1;j<len;j++){
	
			if(arr[i] == arr[j]){
				c++;
				freq[j] = 0;
			}
		}
		if(freq[i]!=0)
			freq[i] = c;
	
	}
	for(int i = 0;i<len;i++){
		if(freq[i]!=0)
			printf("%d occurs %d times\n",arr[i],freq[i]);
	}

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-21-September 2020$ ./a.out 
Enter length of an array: 4
1 0 2 1
1 0 2 1 
1 occurs 2 times
0 occurs 1 times
2 occurs 1 times
*/
