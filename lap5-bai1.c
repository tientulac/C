#include <stdio.h>

int main() {
	int i,n;
	int c=1;
	printf("nhap n: \n");
	scanf("%d",&n);
	if(n>0){
	
	for(i=1;i<=n;i++){
		 c*=i;
	}
	printf("gia tri cua n! la: %d",c);
	}else{
			printf("Khong ton tai");
	}
}
