#include <stdio.h>
#include <math.h>
//Nhap vao 3 so a,b,c.Kiem tra xem co phai 3 canh cua tam giac hay khong.Tinh chu vi va dien tich.
int main()
{
   int a,b,c;
   float S,P,C;

   printf("nhap vao so a:\n");
   scanf("%d",&a);
   printf("nhap vao so b:\n");
   scanf("%d",&b);
   printf("nhap vao so c:\n");
   scanf("%d",&c);
   P=(a+b+c)/2;
   C=(a+b+c);
   S=sqrt(P*(P-a)*(P-b)*(P-c));
   
   if (a+b>0){
   			printf("day la do dai 3 canh tam giac");
   			printf("\n chu vi cua tam gia la: %f",C);
   			printf("\n dien tich cua tam giac la :%f",S);
   			}else{
   				printf("day khong la do dai 3 canh tam giac");
				}   								    						 								 
}
