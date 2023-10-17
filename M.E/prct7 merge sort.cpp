 #include<stdio.h>
 void merge(int a[], int f, int m, int l){
 	int L[l-f], R[l-f];
 	int k=0;
 	for(int i=f;i<=m;i++){
 		L[k++]=a[i];
	 }
	 k=0;
	 for (int i=m+1;i<=l;i++){
	 	R[k++]=a[i];
	 }
	 
	 int j=0; int p=0; int i=f;
	 while(p<=m-f && j<l-m){
	 	if(R[j]>L[p]){
	 		a[i++]=L[p];
	 		p++;
		 }else{
		 	a[i++]=R[j];
		 	j++;
		 }
	 }
	 while(p<=m-f){
	 	a[i++]=L[p++];
	 }
	 while(j<l-m){
	 	a[i++]=R[j++];
	 }
 }
 void merge_sort(int a[], int f, int l){
 	if(f>=l) return;
 	int m=(f+l)/2;
 	merge_sort(a,f,m);
 	merge_sort(a,m+1,l);
 	merge(a,f,m,l);
 }
int main(){
 	int a[]={38,27,43,3,9,82,10};
 	int n=7;
 	merge_sort(a,0,n-1);
 	for(int i=0;i<n;i++){
 	printf("%d ",a[i]);
 } 
	return 0; 
}

