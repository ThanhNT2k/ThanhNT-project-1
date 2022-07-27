#include <stdio.h>

int main(){
	
	//Nhap ngay
	int d;
	printf("Nhap ngay: ");
	scanf("%d",&d);
	
	//Nhap thang
	int m;
	printf("Nhap thang: ");
	scanf("%d",&m);
			
	//Tinh ngay bao nhieu trong nam
	switch(m){
		case 1:
			printf("Day la ngay %d trong nam \n",d);
			printf("La thu %d trong tuan",d%7+1);
			break;
		case 2:
			printf("Day la ngay %d trong nam \n",d+31);
			printf("La thu %d trong tuan",d%7+1);
			break;
		case 3:
			printf("Day la ngay %d trong nam \n",d+31+28);
			printf("La thu %d trong tuan",d%7+1);
			break;
		case 4:
			printf("Day la ngay %d trong nam \n",d+31+28+31);
			printf("La thu %d trong tuan",d%7+1);
			break;
		case 5:
			printf("Day la ngay %d trong nam \n",d+31+28+31+30);
			printf("La thu %d trong tuan",d%7+1);
			break;
		case 6:
			printf("Day la ngay %d trong nam \n",d+31+28+31+30+31);
			printf("La thu %d trong tuan",d%7+1);
			break;
		case 7:
			printf("Day la ngay %d trong nam \n",d+31+28+31+30+31+30);
			printf("La thu %d trong tuan",d%7+1);
			break;
		case 8:
			printf("Day la ngay %d trong nam \n",d+31+28+31+30+31+30+31);
			printf("La thu %d trong tuan",d%7+1);
			break;
		case 9:
			printf("Day la ngay %d trong nam \n",d+31+28+31+30+31+30+31+31);
			printf("La thu %d trong tuan",d%7+1);
			break;
		case 10:
			printf("Day la ngay %d trong nam \n",d+31+28+31+30+31+30+31+31+30);
			printf("La thu %d trong tuan",d%7+1);
			break;
		case 11:
			printf("Day la ngay %d trong nam \n",d+31+28+31+30+31+30+31+31+30+31);
			printf("La thu %d trong tuan",d%7+1);
			break;
		case 12:
			printf("Day la ngay %d trong nam \n",d+31+28+31+30+31+30+31+31+30+31+30);
			printf("La thu %d trong tuan",d%7+1);
			break;
		default:
			printf("So thang phai tu 1-12 thang");
	}
}
