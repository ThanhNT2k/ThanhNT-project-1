#include <stdio.h>

int main(){
	int n,S;
	
	do{
		printf("Nhap so n nguyen duong: ");
		scanf("%d",&n);
	}while(n<=0);
	
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("Cac uoc so cua %d la: %d \n",n,i);
			S=S+i;
		}
	}
	printf("Tong cac uoc so cua %d la: %d",n,S);
}
