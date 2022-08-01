#include <stdio.h>

int main(){
	int n,min;
	printf("Nhap mang so nguyen n: ");
	scanf("%d",&n);
	
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap so nguyen thu %d: ",i+1);
		scanf("%d",&ary[i]);
	}
	
	min=ary[0];
	for(int i=0;i<n;i++){
		if(ary[i]<min && ary[i]%2==0)
			min=ary[i];
	}
	printf("So nguyen duong be nhat= %d",min);
}
