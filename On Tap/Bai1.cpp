#include <stdio.h>

int main(){
	float s;
	int n;
	do{
		printf("Nhap so nguyen duong n: ");
		scanf("%d",&n);
	}while(n<=0);
	
	for(int i=1;i<=n;i++){
		s=s+1.0/i;
	}
	printf("Tong cua bieu thuc can tinh= %f",s);
}
