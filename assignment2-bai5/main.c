#include <stdio.h>

//nhap vao 2 so nguyen a,b. Neu a>=b thi in ra a/b nguoc lai in ra a*b

int main()
{   float a,b;

    printf("nhap vao so nguyen a:");
    scanf("%d",&a);
    printf("\n nhap vao so nguyen b:");
    scanf("%d",&b);

    if (a>=b){
            prinft("in ra ket qua a/b:\n %f",a/b);
            }else{
                prinft("in ra ket qua a*b:\n %f",a*b);
                }             
}
