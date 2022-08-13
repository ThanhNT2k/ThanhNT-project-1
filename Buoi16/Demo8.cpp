#include <stdio.h>
#include "ThuVien.h";

int main(){
	int n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	
	if(ktSNT(n))
		printf("%d la so nguyen to",n);
	else
		printf("%d khong phai la so nguyen to",n);
}
