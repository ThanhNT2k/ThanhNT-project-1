#include <stdio.h>

int main(){
	int a,b;
	
	//Nhap a va b nguyen duong
	do{
		printf("Nhap so a nguyen duong: ");
		scanf("%d",&a);
	}while(a<=0);
	
	do{
		printf("Nhap so b nguyen duong: ");
		scanf("%d",&b);
	}while(b<=0);
	
	//Tim UCLN va BCNN
	for(int uc=a;uc>=1;uc--){
		if(a%uc==0 && b%uc==0){
			printf("UCLN(%d,%d)=%d\n",a,b,uc);
			break;
		}
	}
	
	for(int bc=b;bc<=a*b;bc++){
		if(bc%a==0 && bc%b==0){
			printf("BCNN(%d,%d)=%d\n",a,b,bc);
			break;
		}
	}
	
}

