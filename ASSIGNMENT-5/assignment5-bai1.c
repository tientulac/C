#include <stdio.h>
#include <stdlib.h>

// nhap vao 2 so a,b(a<b). Tinh tong cac so tu a--->b
int main() {
	int a,b,n;
	float s;
	
	do{
		printf("nhap vao so a:\n");
		scanf("%d",&a);
		printf("nhap vao so b:\n");
		scanf("%d",&b);
	}while(a>=b);
	//tu a den b co n so hang
	n=b-a+1;
	s=((a+b)*n)/2;
	printf("tong cac so tu a--->b la:%f",s);
}
