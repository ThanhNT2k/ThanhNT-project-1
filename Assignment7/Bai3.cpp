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
	printf("Doan can tim la [%d,%d]",a,b);
}
