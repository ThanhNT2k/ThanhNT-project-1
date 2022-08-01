#include <stdio.h>

int main(){
	int tbc=0,a=0;
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int ary[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap so nguyen thu %d: ",i+1);
		scanf("%d",&ary[i]);
	}
	
	for(int i=0;i<n;i++){
		if(ary[i]%2!=0){
			tbc+=ary[i];
			a++;
		}
	}
	printf("Trung binh cong cac so le= %d",tbc/a);
}
