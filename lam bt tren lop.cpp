#include <iostream>
#include <math.h>

int main() {
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	
	int n2=0;
	
	// n!= 0
	for(;n!=0;n/=10){
	// nhanh dung
	n2=n2*10+n%10;
}
	// nhanh sai - display n2
	printf("ngich dao: %d",n2);
 }
