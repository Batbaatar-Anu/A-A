#include<stdio.h>
int duplicated_element (int array[],int n){
	for (int i=0; i<n;i++){
		for(int j=0; j<n;j++){
		if(i!=j && array[i]==array[j]) return 1;	
		}
	}
	return 0;
}
int main(){
	int array[]={3,2,6,31,9,8,2,45};
	int result=duplicated_element(array,8);
	if(result==1) printf("Duplicated");
	else printf("No duplicated!");
}
