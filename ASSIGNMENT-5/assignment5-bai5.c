#include <stdio.h>
#include <stdlib.h>


int main() {
	int n,num3=1,num1=0,num2=1,i;
	printf("nhap n:\n");
	scanf("%d",&n);
	
	if (n==0){
		printf("so fibonanci thu 1 la: 0");
	}else if(n>0){
		for(i=1;i<=n;i++){
			num1=num2;
			num2=num3;
			num3=num1+num2;
		}
		printf("so fibonanci gan nhat voi %d la: %d",n,n-1,num3);
	}
}
