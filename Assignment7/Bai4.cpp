#include <stdio.h>

int main(){
	int n;
	do{
		printf("Nhap mang so nguyen n: ");
		scanf("%d",&n);
	}while(n<=0);

	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap so nguyen thu %d: ",i+1);
		scanf("%d",&ary[i]);
	}
	
	int a=ary[0];
	int b=ary[0];
	for(int i=0;i<n;i++){
		if(ary[i]>b){
			b=ary[i];
		}
		if(ary[i]<a){
			a=ary[i];
		}
	}
	
	int a1;
	if(a<0){
		a1=-a;
	}
	
	int b1;
	if(b<0){
		b1=-b;
	}
	
	if(a1>b1){
		printf("Doan can tim la [%d,%d]",-a1,a1);
	}else{
		printf("Doan can tim la [%d,%d]",-b1,b1);
	}
}
