#include <iostream>

// nhap mot so nguyen duong n. Tinh tong cac chu so cua n.

int main() {
	int n,a=0,s=0;
	
	do{
		printf("nhap n:\n");
		scanf("%d",&n);
	}while(n<0);
	
	for(;n!=0;){
			a= n%10 ;
			s=s+a;
			n/=10;
		}
	printf("tong cac chu so la %d",s);
	return 0;
}


