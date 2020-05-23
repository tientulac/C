#include <stdio.h>
#include <stdlib.h>

// nhap mang n so nguyen. Tim so luong cac so duong lien tiep nhieu nhat

int main() {
	int i,j,n;
	
		printf("nhap n: ");
		scanf("%d",&n);	
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("nhap phan tu arr[%d]:  ",i);
		scanf("%d",&arr[i]);
	}
	
	int longest=0;
	
	for(i=0;i<n;i++){
		if(arr[i]>0){
			int count=1;
			for(j=i+1;j<n;j++){
				if(arr[j]>0){
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
