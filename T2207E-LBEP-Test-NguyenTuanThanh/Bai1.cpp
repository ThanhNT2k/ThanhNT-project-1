#include <stdio.h>
#include <string.h>

int main(){
	int a;
	printf("Nhap chieu dai chuoi 1: "); 								   	//Nhap chieu dai chuoi 1
	do{																		//Kiem tra chieu dai chuoi phai lon hon 0
		scanf("%d",&a);
		if(a<=0){
			printf("Chieu dai phai lon hon 0"); 
		}
	}while(a<=0);
	char str1[a];															//Nhap chuoi 1
	printf("Nhap chuoi str1: ");
	scanf("%s",str1);
	
	int b;
	printf("Nhap chieu dai chuoi 2: "); 									//Nhap chieu dai chuoi 2
	do{																		//Kiem tra chieu dai chuoi phai lon hon 0
		scanf("%d",&b);
		if(b<=0){
			printf("Chieu dai phai lon hon 0"); 
		}
	}while(b<=0);
	char str2[b];															//Nhap chuoi 2
	printf("Nhap chuoi str2: ");
	scanf("%s",str2);
	
	if(strlen(str1)>strlen(str2)){											//Neu chuoi 1 lon hon chuoi 2 thi dao chieu
		char stemp[a];
		strcpy(stemp,str2);
		strcpy(str2,str1);
		strcpy(str1;stemp);
	}
	
	bool check = false;
	int i=0;
	while(str2[i]!=0){
		if(str2[i]==str1[0]){
			int j=0;
			while(str1[j]!=0 && str2[i]!=0 && str1[j]==str2[i]){
				i++;
				j++;
			}
			if(str1[j]==0){
				check = true;
				break;
			}
		}else{
			i++;
		}
	}
	if(check){
		printf("YES");
	}else{
		printf("NO");
	}
	return 0;
}
