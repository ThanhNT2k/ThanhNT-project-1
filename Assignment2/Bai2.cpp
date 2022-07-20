#include <stdio.h>
#include <math.h>

int main(){
	//Nhap so a
	float a;
	printf("Nhap so a: ");
	scanf("%f",&a);
	
	//Nhap so b
	float b;
	printf("Nhap so b: ");
	scanf("%f",&b);
	
	//Nhap so c
	float c;
	printf("Nhap so c: ");
	scanf("%f",&c);
	
	//Delta
	float d;
	d = b*b-4*a*c;
	
	//Ngiem kep
	float x;
	x = -b/(2*a);
	
	//Nghiem 1
	float x1;
	x1 =(-b+sqrt(d))/(2*a);
	
	//Nghiem 2
	float x2;
	x2 = (-b-sqrt(d))/(2*a);
	
	//Nghiem 3 neu c = 0
	float x3;
	x3 = -c/b; 				
			
	if(a==0){
		if(b==0){
			printf("Phuong trinh vo nghiem");
		}else{
			printf("Phuong trinh co nghiem la: %f",x3);
		}
	}else{
			if(d<0){
				//Neu delta < 0 thi vo nghiem
				printf("Phuong trinh vo nghiem");
			}else{
				if(d>0){
					//Neu delta > 0 thi co 2 nghiem phan biet
					printf("Phuong trinh co 2 nghiem la: x1= %f va x2= %f",x1,x2);
				}else{
					//Neu delta = 0 thi co nghiem kep
					printf("Phuong trinh co nghiem kep la: x= %f",x3);
				}
			}
		}
}
