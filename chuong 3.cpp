/*
//bai 1
#include <stdio.h>
#include <math.h>

main()
{
 int n,n_tg;
 printf("Nhap n (n>0): ");
 scanf("%d",&n);
 while (n<=0) 
 {
  printf("Nhap lai n (n>0): ");
  scanf("%d",&n);
 }
 n_tg=n;
 
 //  a.doi xung
 
 int dx=0;
 while (n_tg!=0)
 {
  dx=dx*10+n_tg%10;
  n_tg=n_tg/10;
 }
 if (dx==n) printf("%d la so doi xung \n",n);
 else printf("%d KHONG la so doi xung \n",n);
 
 // b. chinh phuong

 n_tg=sqrt(n);
 if (n_tg*n_tg==n) printf("%d la so chinh phuong \n",n);
 else printf("%d KHONG la so chinh phuong \n",n);
 
 //c. nguyen to
 
 bool ktnt=true;
 if (n==1) ktnt = false;
 for (int i=2;i<=sqrt(n);i++)
  if (n % i == 0) 
   {
    ktnt=false;
    break;
   }
 if (ktnt == false) printf("%d KHONG la so nguyen to\n",n);
 else printf("%d la so nguyen to\n",n);  
 
 //d. chu so lon nhat va nho nhat
 
 int ln=0,nn=9;
 n_tg=n;
 while (n_tg!=0)
  {
   if (ln < n_tg%10) ln = n_tg % 10;
   if (nn > n_tg%10) nn = n_tg % 10;
   n_tg=n_tg/10;
  } 
 printf("So lon nhat: %d\n",ln);
 printf("So nho nhat: %d\n",nn);
 
 //e. cac chu so tang dan hay giam dan
 
 n_tg=n;
 bool kttd=true,ktgd=true;
 int td=10,gd=-1;
 while (n_tg!=0)
  {
   if (td > n_tg % 10) td = n_tg%10;
    else kttd = false;
   if (gd < n_tg % 10) gd = n_tg%10;
    else ktgd = false;
   n_tg=n_tg/10;
  }
 if (kttd==true) printf("Cac chu so tang dan \n");
 else printf("Cac chu so KHONG tang dan\n");
 if (ktgd==true) printf("Cac chu so giam dan");
 else printf("Cac chu so KHONG giam dan");
}

//bai 2:
#include<stdio.h>

int main(){
	int n;
	long s=0;
	long s1=0;
	long s2=0;
	long s3=0;
	long s4=0;
	long p=1;
	printf("\nnhap vao so n: ");
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		s=s+i;
		s1=s+i*i;
		s2=1.0/i;
		p=p*i;
		s3=s3+p;
		
	}
	printf("\n tong 1+2+...+%d la: %d",n , s);
	printf("\n tong 1^2+2^2+...+%d^2 la: %d",n , s1);
	printf("\n tong 1+1/2+...+1/&d la: %d",n , s2);
	printf("\n tong 1*2*...*%d la: %d",n , p);
	printf("\n tong 1!+2!+...+%d! la: %d",n , s3);
	}
	
//bai 3
#include<stdio.h>
int chiahet(int m, int a, int b);
int main()
{
    int a, b, n, s=0;
    printf("nhap 3 so nguyen a b n voi a,b<n\n");
    scanf("%d%d%d", &a, &b, &n);
    if(a<n && b<n)
    {

       for (int i=1; i<n; i++)
        {
            if(chiahet(n, a, b) == 1)
            s+=i;
         }
    }
    printf("tong cac so nguyen < n chia het cho a nhung khong chia het cho b la %d", s);
}
int chiahet(int m,int a, int b)
{

    if (m%a==0 && m%b!=0)
        return 1;
    return 0;
}

// bai 4
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int n,i,j,souoc=0,s=0;
	do
	{
		printf("Nhap n:");scanf("%d",&n);
	}
	while(n<=0||n>=5000);
	for(i=2;i<n;i++)
	{
		for(j=1;j<=i;j++)
		{
		if(i%j==0)
		souoc++;
		}
		if(souoc==2)
		s=s+i;
	}
	printf("Tong cua cac SNT nho hon %d la: %d",n,s);
	getch();
}

// bai 5:

#include<stdio.h>
#include<conio.h>

int main(){
	int n, songichdao = 0;
	printf("nhap vao n : ");
	scanf("%d", &n);
	do{
		songichdao = songichdao * 10 + n % 10;
	}while( n/=10);
	printf("so ngich dao la : %d", songichdao);
	getch();
	return 0;
	}
	
// bai 6:
#include<stdio.h>
int main (){
int chuc,dv;
printf("cac so tu 10 den 99 thoa diu kien :");
for(int i=10;i<100;i++)
{
dv=i%10;
chuc=i/10;
if(dv*chuc == 2*(dv+chuc))
	printf("%4d", i);}
	}
	

//bai 7:
#include<stdio.h>
int main(){
	int a,b,kq,step;
	printf("nhap a:");
	scanf("%d", &a);
	printf("nhap b: ");
	scanf("%d", &b);
	while(a<0 || b<0){
		printf("nhap lai a: ");
		scanf("%d", &a);
		printf("nhap lai b: ");
		scanf("%d", &b);
	}
if(a>b){
	step=a;
	}else{
		step=b;
	}
	for(int i=step;i<=a*b;i+=step){
		if(i%a==0 && i%b==0)
		{
			kq=i;
			break;
			}
			}
			printf("BCNN(%d, %d) = %d", a,b,kq);
			}
*/
// bai 8:
		#include<stdio.h>
int fibonacci(int n) {
    int f0 = 1;
	int f1 = 1;
    int fn = fn-1 + fn-2;
    int i;
 
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        for (i = 2; i < n; i++) {
           f0 = f1 = fn;
            fn = f0+ f1;
        }
    }
    return fn;
}
 
/**
 * Ham main
 */
int main() {
 int i;
    printf("10 so dau tien cua day so Fibonacci: \n");
    for (i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i));
    }
}
