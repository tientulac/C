#include <stdio.h>
// Nhap vao 3 so.Tim so be nhat.
int main()
{   int a,b,c;
    printf("Nhap vao so a:\n");
    scanf("%d",&a);
    printf("Nhap vao so b:\n");
    scanf("%d",&b);
    printf("Nhap vao so c:\n");
    scanf("%d",&c);
    if (a<b){
        if (a<c){
            printf("%d la so be nhat",a);
                }else{
            printf("%d la so be nhat",c);
                     }
            }else{
                if (b<c){
                    printf("%d la so be nhat",b);
                        }else{
                        printf("%d la so be nhat",c);
                             }
                 }
}
