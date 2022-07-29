#include <stdio.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	int c = 0;
	
	while(n!=0){
		c=(c*10)+(n%10);
		n/=10;
	}
	printf("So dao nguoc la: %d",c);
}
