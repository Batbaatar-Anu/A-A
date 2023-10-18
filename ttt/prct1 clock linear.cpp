#include<stdio.h>
#include<time.h>
int summation(int n){
	int i;
	int sum = 0;
//	for(i=1;i<n;i++){
//		sum = sum+i;  linear vyd 
//	}
//constant vyd -> sum = n*(n+1)/2;

	return sum;
}
int main(){
	clock_t start,end;
	float execution_time;
	
	start = clock();
	int result = summation(10);
	printf("%d",result);
	end=clock();
	execution_time=(float)(end - start)/CLOCKS_PER_SEC;
	printf("\nExecution Time: %3f \n",execution_time);
	return 0;
}
