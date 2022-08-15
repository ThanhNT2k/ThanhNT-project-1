#include <stdio.h>

//Tim so nguyen to
bool findPrime(int a){
	for(int i=2;i<=a/2;i++){
		if(a%i==0){
			return false;
		}
		return true;
	}
}

int main(){
	int n;
	do{																	//Nhap mang so nguyen to
		printf("Nhap mang so nguyen n: ");
		scanf("%d",&n);
	}while(n<=0);

	int ary[n];															//Nhap cac so trong mang
	for(int i=0;i<n;i++){
		printf("Nhap so nguyen thu %d: ",i+1);
		scanf("%d",&ary[i]);
	}
	
	for(int i=1;i<=n;i++){												//In cac so nguyen to trong mang
		if(findPrime(i)){
			printf("Mang co so nguyen to la: %d\n",i);
		}
		else
			printf("Mang khong co so nguyen to");
	}
}
