#include <stdio.h>
int main(){
	float  gioLam,tongLuong,luong;
	printf("so gio lam viec trong thang la:");
	scanf("%f", &gioLam);
	printf("luong theo gio la: ");
	scanf("%f", &luong);
	if (gioLam <= 160) {
	tongLuong= gioLam*luong;
	}else{
	tongLuong=((gioLam*luong*0.1)+gioLam*luong);
	}
	printf("luong thang nay cua ban la %.3f""",tongLuong);
	return 0; 
}
