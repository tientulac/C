#include <stdio.h>
#include <stdlib.h>
// Nhap 3 so neu khong phai la 3 canh cua 1 tam giac thi nhap lai
// neu la 3 canh cua 1 tam giac thi DUNG!
int main(){
    int a,b,c,i;
    printf("nhap vao so a:\n");
    scanf("%d",&a);
    printf("nhap vao so b:\n");
    scanf("%d",&b);
    printf("nhap vao so c:\n");
    scanf("%d",&c);
	
    	for(i=1;i!=0;i++){
            if(a<=0 || b<=0 || c<=0 || a+b<=c || c+b<=a || a+c<=b){
					printf("nhap lai so a:\n");
	        		scanf("%d",&a);
	        		printf("nhap lai so b:\n");
	        		scanf("%d",&b);
	        		printf("nhap lai so c:\n");
	        		scanf("%d",&c);                                          							                                                  
	            }else if(a>0 && b>0 && c>0 && a+b>c && b+c>a && a+c>b){
	            	printf("day la 3 canh tam giac");
	            	break;
				}
			}
	return 0;
}

