#include<stdio.h>
void quicksort(int a[], int f, int l){
	if(f>=l) return;
	
	 int pivot_index=parition(a,f,l);
	 quicksort(a,f,pivot_index-1);
	 quicksort(a,pivot_index+1,l);
}
int main(){
	int a[]={38,27,43,3,9,82,10};
	int n=7;
	
	quicksort(a,0,n-1);
	return 0;
}
