#include <stdio.h>
#include <stdlib.h>

// Nhap mot so nguyen duong n. Dem so chu so cua n

int main() {
	int n,i=1,dem=1;
	
	do{
		printf("nhap n:\n");
		scanf("%d",&n);
	}while(n<=0);
	
	while(n>=10){
        n/=10; 
        dem++;
    }
	printf("so chu so cua n la: %d",dem);
	return 0;
}
