#include <iostream>
#include <math.h>

int main() {
	int a,i;
	printf("nhap vao so can tinh: ");
	scanf("%d",&a);
	int n1=a,n2=0;
	for (i=0;i<4;i++){
		n2=n2*10+n1%10;
		n1=n1/10;
	}
	printf("nghich dao cua so nay la: %d",n2);
	
	
}

