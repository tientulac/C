#include <stdio.h>

// nhap mang n so nguyen. Tim so nguyen duong nho nhat
int main() {
	int n,i;
	int arr[n];
	do{
		printf("nhap n:\n");
		scanf("%d",&n);
	}while(n<0);
	
	for(i=0;i<n;i++){
		printf("nhap phan tu arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	int min=arr[0];

	for(i=0;i<n;i++){
		if(min < 0){
			min=arr[i];
		} 
		if((min > arr[i])&&(arr[i] >= 0)){
			min = arr[i];
		}
	}
	printf("So nguyen duong nho nhat trong mang la: %d",min);
	return 0;
}





