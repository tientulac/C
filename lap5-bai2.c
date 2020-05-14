#include <stdio.h>

int main() {
	double S;
	int i,n;
	i=1;
	printf("nhap n:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		float a=1.0/i;
		S+=a;
	}
	float T=S+1;
	printf("gia tri cua tong la: %f",T);
}
