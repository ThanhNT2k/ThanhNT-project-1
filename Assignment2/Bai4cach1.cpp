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
	if(a>b){
		//YES
		if(a>c){
			//YES
			printf("Max: %d",a);
		}else{
			//NO
			printf("Max: &d",c);
		}
		
	}else{
		if(b>c){
			//YES
			printf("Max: %d",b);
		}else{
			//NO
			printf("Max: %d",c);
		}
	}
}
