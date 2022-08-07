#include <stdio.h>

int main(){
	int n,dem=0;
	do{
		printf("Nhap so n: ");
		scanf("%d",&n);
	}while(n<=1);

	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			dem++;
		}
	}
	if(dem==0){
		printf("%d la so nguyen to",n);
	}else{
		printf("%d khong phai la so nguyen to",n);
	}
}
