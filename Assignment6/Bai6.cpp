#include <stdio.h>

int main(){
	int n,dem=0,max=0;
	printf("Nhap mang so nguyen n: ");
	scanf("%d",&n);
	
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap so nguyen thu %d: ",i+1);
		scanf("%d",&ary[i]);
	}
	
	for(int i=0;i<n;i++){
		if(ary[i]>0){
			dem++;
			if(dem>max){
				max=dem;
			}
		}else{
			dem=0;
		}
	}
	printf("So luong cac so nguyen duong lien tiep nhieu nhat= %d",max);
}
