#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,i;
    printf("nhap vao so tu nhien a:\n");
    scanf("%d",&a);
    for(i=1;i<a;i++){
            if (i%3==0){
                printf("\n%d",i);
                }
    }
}
