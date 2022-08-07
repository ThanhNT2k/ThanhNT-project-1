#include <stdio.h>

int main(){
	int n,a=0;
	do{
		printf("Nhap mang so nguyen n: ");
		scanf("%d",&n);
	}while(n<=0);
	
	int x;
	do{
		printf("Nhap so nguyen x: ");
		scanf("%d",&x);
	}while(x<=0);
	
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap so nguyen thu %d: ",i+1);
		scanf("%d",&ary[i]);
	}
	int min=x-ary[a];
	for(int i=0;i<n;i++){
		int b=x-ary[i];
		if(b<min){
			min=b;
		}
	}
	printf("Gia tri trong mang gan %d nhat la: %d",x,ary[a]);
}
