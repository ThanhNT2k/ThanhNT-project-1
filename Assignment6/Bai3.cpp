#include <stdio.h>

int main(){
	int n,x,a=0;
	printf("Nhap mang so nguyen n: ");
	scanf("%d",&n);
	printf("Nhap so nguyen x: ");
	scanf("%d",&x);
	
	int ary[n];	
	for(int i=0;i<n;i++){
		printf("Nhap so nguyen thu %d: ",i+1);
		scanf("%d",&ary[i]);
	}
	//Kiem tra xem x co thuoc mang hay khong
	for(int i=0;i<=n;i++){
		if(x==ary[i]){
			printf("X thuoc trong mang");
			a++;
		}
	}
		if(a==0){
			printf("X khong thuoc trong mang");
		}
}

