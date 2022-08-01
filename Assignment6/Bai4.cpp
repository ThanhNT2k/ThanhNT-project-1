#include <stdio.h>

int main(){
	int n,a,b;
	printf("Nhap mang so nguyen n: ");
	scanf("%d",&n);
	
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap so nguyen thu %d: ",i+1);
		scanf("%d",&ary[i]);
	}
	//Tim so chan cuoi cung trong mang
	for(int i=n-1;i>=0;i--){
		if(ary[i]%2==0){
			printf("Gia tri chan cuoi cung trong mang la %d",ary[i]);
			b++;
			break;
		}
	}
	if(b==0){
		printf("Mang khong co gia tri chan");
	}
}
