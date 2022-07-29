#include <stdio.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	int c = 1;
	
	int max = 0;
	
	while(c<n){
		if(c%2==0 && c%3==0){
			max = c;

		}
		c++;
	}
		printf("Cac so chia het cho 2 va 3 la: %d \n",max);
}
