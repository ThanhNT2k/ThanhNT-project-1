#include <stdio.h>

int main(){
	int n,i,j;
	
	do{
		printf("Nhap so n nguyen duong: ");
		scanf("%d",&n);
	}while(n<=0);
	
	i=n;
	
	do{
		j=i%10;
	}while(i/=10);
	printf("Chu so dau tien cua %d la: %d",n, j);
}
