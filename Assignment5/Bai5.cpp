#include <stdio.h>

int main(){
	int n,max,i;
	max=0;
	
	do{
		printf("Nhap n nguyen duong: ");
		scanf("%d",&n);
	}while(n<=0);
	
	do{
		i=n%10;
		if(i>max){
			max=i;
		}
	}while(n/=10);
	
	printf("Chu so lon nhat la: %d",max);
}
