#include <stdio.h>


int main(){
	int n=0;
	int arr[n],i;
	
	do{
		printf("nhap n: \n");
		scanf("%d",&n);
	}while(n<0);
	
	for(i=0;i<n;i++){
		printf("nhap phan tu arr[%d]= ",i);
		scanf("%d",&arr[i]);
		}
	
	for(i=n;i>=0;i--){
		if(arr[i] %2 !=0){
			printf("so le cuoi cung cua mang la: %d",arr[i]);
			break;
		}
	}
	return 0;
}

