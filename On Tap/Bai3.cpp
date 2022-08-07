#include <stdio.h>

int main(){
	int n,f=1,f1=1,f2=1;
	printf("Nhap so n: ");
	scanf("%d",&n);
	
	if(n==1 || n==2){
		printf("So Fibonacci thu %d la: 1",n);
	}
	
	for(int i=3;i<=n;i++){
		f=f1+f2;
		f1=f2;
		f2=f;
	}
	printf("So Fibonacci thu %d la: %d",n,f);
}
