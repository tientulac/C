#include <stdio.h>
#include <math.h>
// Nhap vao 3 so a,b,c.Giai phuong trinh bac 2 ax^2+bx+c=0.
int main()
{
    int denta;
    float x1,x2,x,a,b,c;
   

    printf("Nhap vao so a:\n");
    scanf("%d",&a);
    printf("Nhap vao so b:\n");
    scanf("%d",&b);
    printf("Nhap vao so c:\n");
    scanf("%d",&c);
    denta=b*b-4*a*c;
    if (a==0){
        printf("phuong trinh co nghiem la:\n %f",x=-c/b);
        	}
    if (a!=0){
        if (denta<0){
            		printf("phuong trinh vo nghiem");
                	}else if (denta>0){
                    					printf("nghiem thu nhat cua phuong trinh la: %f",x1=(-b-sqrt(denta))/(2*a));
                    					printf("\n nghiem thu hai cua phuong trinh la: %f",x2=(-b+sqrt(denta))/(2*a));
                                      }else{
                    						printf("phuong trinh co nghiem kep: %f",x1=x2=-b/(2*a));
                                           }
            }

}
