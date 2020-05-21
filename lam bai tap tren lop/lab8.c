#include <stdio.h>
#include <stdlib.h>

// Dung con tro de tao mang voi n so nguyen roi sap xep tu be den lon
// Sau do tang them n so nguyen nua roi sap xep tu be den lon

int main() {
	int *p,i,n,temp,j;
	
	//khai bao n
	do{
		printf("nhap n:\n");
		scanf("%d",&n);
	}while(n<0);
	
	p = (int*)calloc(n,sizeof(int));
	
	//n so nguyen
	for(i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i);
		scanf("%d",(p+i));
	}
	
	// sap xep n so nguyen
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(*(p+i)>*(p+j)){
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",*(p+i));
	}
	
	// tang them n so nguyen
	p = (int*)realloc(p,n*sizeof(int));
	for(i=n;i<2*n;i++){
		printf("nhap phan tu thu %d: ",i);
		scanf("%d",(p+i));
	}
	// sap xep n so nguyen tiep theo
	for(i=n;i<2*n;i++){
		for(j=i+1;j<2*n;j++){
			if(*(p+i)>*(p+j)){
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
	for(i=n;i<2*n;i++){
		printf("%d\n",*(p+i));
	}

}
