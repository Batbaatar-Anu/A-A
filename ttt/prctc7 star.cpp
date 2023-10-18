#include<stdio.h>
void print_star(int n){
if(n==1) printf("*\n");
else{
	print_star(n-1);
	for(int i=0; i<n; i++) printf("*");
	printf("\n");
}	
}

int main(){
	print_star(3);
	return 0;
}
