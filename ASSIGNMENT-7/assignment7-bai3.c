#include <stdio.h>
#include <stdlib.h>


int main() {
	int i,j,arr[4][3];
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("nhap phan tu: arr[%d][%d]= ",i,j);
			scanf("%4d",&arr[i][j]);
		}
	}
	
	printf("ma tran co dang:\n");
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("ma tran chuyen vi cua ma tran tren co dang:\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%4d",arr[j][i]);
		}
		printf("\n");
	}
}
