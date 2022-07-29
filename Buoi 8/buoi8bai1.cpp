#include <stdio.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	int S = 0;
	
	int c = 0;
	
	while(c <= n){
		S+=c;
		c++;
	}
	printf("S(%d)= %d",n,S);
}
