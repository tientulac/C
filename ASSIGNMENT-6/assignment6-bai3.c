#include <stdio.h>

// nhap 1 mang gom n phan tu voi dieu kien khong duoc nhap trung so
int main() {
	int n,i,arr[n],j;
	
	do{
		printf("nhap n:\n");
		scanf("%d",&n);
	}while(n<0);
	
	for(i=0;i<n;i++){
		printf("nhap phan tu arr[%d]= ",i);
		scanf("%d",&arr[i]);
			for(j=0;j<i;j++){
				while(arr[j]==arr[i]){
				printf("nhap lai phan tu arr[%d]= ",i);
				scanf("%d",&arr[i]);
			}
		}
	}
}
