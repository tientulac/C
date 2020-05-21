#include <stdio.h>
#include <stdlib.h>


int main() {
	int i,j,A[4][3],B[4][3],C[4][3];
	
// Khai bao ma tran thu nhat
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("nhap phan tu: A[%d][%d]= ",i,j);
			scanf("%4d",&A[i][j]);
		}
	}
	printf("ma tran thu nhat co dang:\n");
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("%4d",A[i][j]);
		}
		printf("\n");
	}

// 	Khai bao ma tran thu hai	
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("nhap phan tu: B[%d][%d]= ",i,j);
			scanf("%4d",&B[i][j]);
		}
	}
	printf("ma tran thu hai co dang:\n");
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("%4d",B[i][j]);
		}
		printf("\n");
	}

// 	Tinh tong 2 ma tran	
	for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }    
    
    printf("\n Tong cua 2 ma tran la:\n");
    
    for(i=0;i<4;i++){    
        for(j=0;j<3;j++){
            printf("%4d",C[i][j]);
        }
        printf("\n");
    }
	
// 	Tinh hieu 2 ma tran
	for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            C[i][j]=A[i][j]-B[i][j];
        }
    }    
    
    printf("\n Hieu cua 2 ma tran la:\n");
    
    for(i=0;i<4;i++){    
        for(j=0;j<3;j++){
            printf("%4d",C[i][j]);
        }
        printf("\n");
    }
	
}
