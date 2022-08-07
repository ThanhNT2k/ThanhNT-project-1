#include <stdio.h>
#include <string.h>

int main(){
	int n;
	do{
		printf("Nhap mang so nguyen n: ");
		scanf("%d",&n);
	}while(n<=0);
	
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap so nguyen thu %d",i+1);
		scanf("%d",&ary[i]);
	}
	
}
