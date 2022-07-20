#include <stdio.h>
int main(){
	//Nhap so a
	int a;
	printf("Nhap so a: ");
	scanf("%d",&a);
	
	//Nhap so b
	int b;
	printf("Nhap so b: ");
	scanf("%d",&b);
	
	//Nhap so c
	int c;
	printf("Nhap so c: ");
	scanf("%d",&c);
	
	//Gan bien a = max
	int max;
	max = a;
	
	//So sanh b va max
	if(b>max){
		max = b;
	}
	
	//So sanh c va max
	if(c > max){
		max = c;
	}
	printf("so lon nhat: %d",max);
	
}
