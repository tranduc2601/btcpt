#include <stdio.h>

int main(){
	int chuyenDoi,tienTe; 
	printf("================CHUONG TRINH CHUYEN DOI TIEN TE================\n");
	printf("1.  USD to VND\n"); 
	printf("2.  EUR to VND\n");
	printf("3.  GBP to VND\n");
	printf("4.  JPY to VND\n");
	printf("5.  VND to USD\n");
	printf("6.  VND to EUR\n");
	printf("7.  VND to GBP\n");
	printf("8.  VND to JPY\n");
	printf("nhap don vi ban muon chuyen doi  (1-8)?");
	scanf("%d", &chuyenDoi);
	printf("nhap so tien muon chuyen doi"); 
	scanf("%d",&tienTe);
	switch(chuyenDoi){
		case 1:
			printf("%d USD = %d VND",tienTe,tienTe*23500);
			break;
		case 2:
			printf("%d EUR = %d VND",tienTe,tienTe*25000);
			break;
		case 3:
			printf("%d GBP = %d VND",tienTe,tienTe*28000);
			break;
		case 4:
			printf("%d JPY = %d VND",tienTe,tienTe*180);
			break;
		case 5:
			printf("%d VND = %d USD",tienTe,tienTe/23500);
			break;
		case 6:
			printf("%d VND = %d EUR",tienTe,tienTe/25000);
			break;
		case 7:
			printf("%d VND = %d GBP",tienTe,tienTe/28000);
			break;
		case 8:
			printf("%d VND = %d JPY",tienTe,tienTe/180);
			break;	
		default:
			printf("don vi nhap khong hop le");
			
	
	}
	return 0; 
} 
