#include <stdio.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	int c = 1;
	
	while(c<n && c%2==1){
		printf("Cac so le la: %d \n",c);
		c+=2;
	}
}
