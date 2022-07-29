#include <stdio.h>

int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	
	int c = 1;
	
	while(c<=n){
		if(n%c==0){
			printf("Cac uoc so cua %d la: %d \n",n,c);
		}
		c++;
	}
}
