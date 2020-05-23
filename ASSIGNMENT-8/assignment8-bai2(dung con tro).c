#include <stdio.h>
#include <stdlib.h>


int main() {
	int *p,i,j,n;
	
	do{
		printf("nhap n: ");
		scanf("%d",&n);
	}while(n<0);
	
	p = (int*)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i);
		scanf("%d",(p+i));
	}
	
	int Max=0;
	
	for(i=0;i<n;i++){
		if(*(p+i)>0){
			int sum=*(p+i);
			for(j=i+1;j<n;j++){
				if(*(p+j)>0){
					sum+=*(p+j);
				}else{
					break;
					}
				}
				if(Max<sum){
				Max=sum;
			}
		}
	}
	printf("chuoi cac so nguyen duong co tong lon nhat la: %d",Max);
}
