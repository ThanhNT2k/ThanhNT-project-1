#include <stdio.h>

int main(){
	
	//Nhap so a
	int a;
	printf("Nhap so a de so sanh: ");
	scanf("%d",&a);
	
	//Nhap so b
	int b;
	printf("Nhap so b de so sanh: ");
	scanf("%d",&b);
	
	//Nhap so c
	int c;
	printf("Nhap so c de so sanh: ");
	scanf("%d",&c);
	
	//So sanh a va b
	if(a<b){
		if(a<c){
			printf("Min: %d",a);
		}else{
			printf("Min: &d",c);
		}
		
	}else{
		if(b<c){
			printf("Min: %d",b);
		}else{
			printf("Min: %d",c);
		}
	}
}
