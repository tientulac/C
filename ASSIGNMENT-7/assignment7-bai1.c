#include <stdio.h>
#include <stdlib.h>


int main() {
	int i,j,arr[4][4],s=0,count=0;
	float tbc;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("nhap phan tu: arr[%d][%d]= ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("ma tran vua nhap co dang:\n");
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0;i<4;i++){
		s+=arr[i][i];
		count++;
	}
	tbc = (float)s/count;
	printf("trung binh cong cua duong cheo la: %f",tbc);
}

