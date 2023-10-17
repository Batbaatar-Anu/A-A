#include<stdio.h>
int* bubble_sort(int arr[],int n){
	
	for (int i=0; i < n - 1; i++){
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j+1]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;		
		}
}
}
	return arr;
}

int main(){
	int a[]={2,3,1,3,20,3,5,7};
	int n= sizeof(a)/sizeof(a[0]);
	int *sorted = bubble_sort(a,n);
	for(int i=0;i<n;i++) printf("%d\t",sorted[i]);
}
