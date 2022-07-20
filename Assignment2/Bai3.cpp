#include <stdio.h>
#include <math.h>

int main(){
	//Nhap a
	int a;
	printf("Nhap so a: ");
	scanf("%d",&a);
	
	//Nhap b
	int b;
	printf("Nhap so b: ");
	scanf("%d",&b);
	
	//Nhap c
	int c;
	printf("Nhap so c: ");
	scanf("%d",&c);
	
	//Tinh chu vi tam giac
	int p;
	p = (a+b+c)/2;
	
	//Cong thuc Heron
	int S;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	
	if(a+b>c){
		if(a+c>b){
			if(b+c>a){
				printf("a, b, c la 3 canh cua tam giac");
				printf("Dien tich tam giac= %d",S);
				printf("Chu vi tam giac= %d",p);
			}else{
				printf("a, b, c khong phai la 3 canh cua tam giac");
			}
		}else{
			printf("a, b, c khong phai la 3 canh cua tam giac");
		}
	}else{
		printf("a, b, c khong phai la 3 canh cua tam giac");
	}
}
