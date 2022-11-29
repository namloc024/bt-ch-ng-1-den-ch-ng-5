/*
//bai 2:
#include<stdio.h>

int main(){
	int n;
	int dem = 0;
	printf("\n nhap n = ");
	scanf("%d", &n);
	if(n<2){
		printf("\n %d khong phai la so nguyen to",  n);
		return 0;
		}else{
	for(int i=1;i<=n;i++){
		if(n % i == 0){
			dem+=1;
			}
			
		}
	if(dem == 2){
		printf("\n %d la so nguyen to",  n);
}else{
	printf("\n %d khong phai so nguyen to", n);
	}
	}
	}
	

// bai 3:
#include<stdio.h>	

int main(){
int n;
printf("\n nhap n = ");
scanf("%d", &n);
int i=0;
while(i*i<=n){
	if(i*i==n){
		printf("%d la so chinh phuong \n", n);
		return 0;
		}
		++i;
		}
		printf("%d khong phai la so chinh phuong \n",  n);
		}

// bai 4:
#include<stdio.h>
bool check(int n){
	int sum =0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0)
		sum+=i;
		}
		if(sum == n)
		return true;
		return false;
		}
		int main(){
			int n;
			printf("nhap n: ");
			scanf("%d", &n);
			if(check(n)){
			printf("%d la so hoan hao .", n);
			}else{
				printf("%d khong la so hoan hao .", n);
				return 0;
			}
	}
	
	//bai 5:
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
 
 
 int dx=0;
 while (n_tg!=0)
 {
  dx=dx*10+n_tg%10;
  n_tg=n_tg/10;
 }
 if (dx==n) printf("%d la so doi xung \n",n);
 else printf("%d KHONG la so doi xung \n",n);
 }
 
 // bai 6:
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

// bai 7:
#include <stdio.h>
#include <conio.h>
void nhap(int &k, int &n)
    {
    printf("nhap vao k va n :");
    scanf(" %d%d", &k,&n);
    }
int c(int k, int n)
    {
    int a[100][100];
    if (k==0||k==n) return 1;
    else for (int i=0;i<=k;i++)
        for (int j=i;j<=n;j++)
            if (i==0||i==j) a[i][j]=1;
            else a[i][j]=a[i][j-1]+a[i-1][j-1];
    return a[k][n];
    }
void xuatc(int k, int n)
    {
    printf("to ho chap %d cua %d  =", c(k,n));
    }
int main()
    {

    int k,n;
    nhap(k,n);
    xuatc(k,n);
    getch();
    }
    
// bai 8:
#include<stdio.h>
int main(){
   int num,reverse_number;
   //User nhap so can dao nguoc
   printf("\nNhap mot so bat ki:");
   scanf("%d", &num);
int reverse_function(int num);
   //Goi ham de quy
   reverse_number = reverse_function(num);
   printf("\nSau khi dao nguoc :%d", reverse_number);
   return 0;
}

int reverse_function(int num){
   int sum = 0, rem;
   if(num){
      rem = num % 10;
      sum = (sum*10) + rem;
      reverse_function(num/10);
   }
   else
      return sum; // di?u ki?n d?ng
   return sum;
}
*/
// bai 9:


