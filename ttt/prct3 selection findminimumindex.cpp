#include<stdio.h>
int find_minimum_index(int a[], int unsorted_index, int n){
	int min_value = a[unsorted_index];
	int min_index = unsorted_index;
	for(int i=unsorted_index+1;i<n;i++){
		if(min_value>a[i]){
			min_value=a[i];
			min_index=i;
		}
	}
	return min_index;
} int* selection_sort(int a[], int n){
	int min_index=0 ,min_value=a[0];
	
	for(int i=1;i<n;i++){
		min_index=find_minimum_index(a,i-1,n);
		min_value = a[min_index];
		a[min_index]= a[i-1];
		a[i-1]=min_value;
 	}
 	return a;
}
int main(){
	int a[]={2,3,1,3,20,3,5,7};
	int n = sizeof(a)/sizeof(a[0]);
	int *sorted = selection_sort(a,n);
	for(int i=0;i<n;i++) printf("%d\t",sorted[i]);
}
