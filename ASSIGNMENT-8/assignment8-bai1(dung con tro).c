#include <stdio.h>
#include <stdlib.h>


int main() {
	int *p,i,j,n;
		//khai bao n
	do{
		printf("nhap n:\n");
		scanf("%d",&n);
	}while(n<0);
	
	p = (int*)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i);
		scanf("%d",(p+i));
	}
	int longest=0;
	for(i=0;i<n;i++){
		if(*(p+i)>0){
			int count = 1;
			for(j=i+1;j<n;j++){
				if(*(p+j)>0){
					count++;
				}else{
					break;
				}
			}
			if(longest<count){
				longest=count;
			}
		}
	}
	printf("so luong cac so duong lien tiep nhieu nhat la: %d",longest);
}
