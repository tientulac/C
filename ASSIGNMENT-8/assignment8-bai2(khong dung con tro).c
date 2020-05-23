#include <stdio.h>
#include <stdlib.h>

// nhap mang n so nguyen.Tim xem chuoi so duong co tong nhieu nhat la bao nhieu

int main() {
	int i,j,n;
	
	do{
		printf("nhap n: ");
		scanf("%d",&n);
	}while(n<0);
	
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("nhap phan tu arr[%d]:  ",i);
		scanf("%d",&arr[i]);
	}
	
	int Max=0;
	
	for(i=0;i<n;i++){
		if(arr[i] > 0){
			int sum=arr[i];
			for(j=i+1;j<n;j++){
				if(arr[j] > 0){
					sum+=arr[j];
				}else{
					break;
					}		
				}
			if(Max < sum){
				Max = sum;
			}
		}
	}
	printf("chuoi so duong co tong nhieu nhat la: %d",Max);
}
