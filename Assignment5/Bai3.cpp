#include <stdio.h>

int main(){
	int n,a;
	int s=0;
	printf("Nhap so n: ");
	scanf("%d",&n);
	
	for(;n!=0;){
		a=n%10;
		s+=a;
		n/=10;
	}
	printf("Tong cac chu so cua %d bang: %d",n,s);
}
