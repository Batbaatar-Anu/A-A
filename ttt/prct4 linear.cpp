#include<stdio.h>
int linear_search(int arr[],int n, int x){
	
	int i;
	for (i = 1; i < n; i++) {
	if (arr[i] == x) return i;
	}
	return -1;
}
int main(){
	int arr[]={10,20,30,60,80,100,110,130,170,180};
	int x=110;
	
	int index=linear_search(arr,10,x);
	printf("index:%d",index);
	return 0;
}
