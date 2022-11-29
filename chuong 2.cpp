/*
// bai 6 :
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	int a,b;
	printf("Nhap nam sinh cua ban : ");
	scanf("%d", &a);
	b=2022-a;
	printf("Ban %d tuoi", b);
	getch();
	}
	
// bai 7:
#include <conio.h>
#include <math.h>
#include <stdio.h>
int main ()
{
float a,b,tong,hieu,tich,thuong;
printf("Nhap 2 so can tinh tong, hieu, tich, thuong: ");
scanf("%f",&a);scanf("%f",&b);
tong=a+b;
tich=a*b;
a>b?hieu=a-b:hieu=b-a;
a>b?thuong=a/b:thuong=b/a;
printf("Tong hieu tich thuong cua 2 so tren lan luot la:\n \n %0.3f\n %0.3f\n %0.3f\n %0.3f\n \n have fun Very Happy",tong,hieu,tich,thuong);
getch();
}


 // bai 8:
 #include <conio.h>
#include <math.h>
#include <stdio.h>
int main ()
{
char tensp;
float dongia,soluong,sotien,tienthue,sothue;
printf("Nhap don gia: ");
scanf("%f",&dongia);
printf("Nhap so luong: ");
scanf("%f",&soluong);
sotien=dongia*soluong;
sothue=(sotien/100)*10;
tienthue=sothue + sotien;
printf("So tien: %0.2f \n Thue Gia tri gia tang: %0.2f ",sotien,tienthue);
getch();
}

// bai 9:
#include <conio.h>
#include <math.h>
#include <stdio.h>
int main ()
{
float dt,hst,dl,hsl,dh,hsh,dtb;
printf("Nhap diem Toan va he so: ");
scanf("%f%f",&dt,&hst);
printf("Nhap diem Ly va he so: ");
scanf("%f%f",&dl,&hsl);
printf("Nhap diem Hoa va he so: ");
scanf("%f%f",&dh,&hsh);
dtb=(dt*hst+dl*hsl+dh*hsh)/(hst+hsl+hsh);
printf("Diem Trung Binh la: %0.2f",dtb);
getch();
}

// bai 10:
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float r,cv,dt;
	printf("nhap ban kinh r : \n ");
	scanf("%f", &r);
	cv=r*M_PI*2;
	dt=M_PI*r*r;
	printf("chu vi hinh tron la : %0.2f \n",cv);
	printf("dien tich hinh tron la : %0.2f",dt);
	return 0;
	}
	
// bai 11:
#include <conio.h>
#include <math.h>
#include <stdio.h>
int main ()
{
int bsx,a,b,c,d,e;
printf("Nhap 4 so cuoi bien xe cua ban: ");
scanf("%d",&bsx);
d=bsx%10;
bsx=bsx/10;c=bsx%10;
bsx=bsx/10;b=bsx%10;
bsx=bsx/10;a=bsx%10;
e=(a+b+c+d)%10;
printf("Bien so xe cua ban %d nuoc",e);
getch();
}

*/



