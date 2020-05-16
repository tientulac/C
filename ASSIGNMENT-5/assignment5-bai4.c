#include <stdio.h>
#include <math.h>

//Tim UCLN cua a,b

int main() {
	int a,b;
	
	do{
		printf("nhap a:\n");
		scanf("%d",&a);
		printf("nhap b:\n");
		scanf("%d",&b);
	}while(a==0 && b==0 );
	
	if(a==b){
		printf("uoc chung lon nhat la:%d",a);
	}
	for(;a!=b;){
		if(a>b){
			a=a-b;
		}else{
		b=b-a;
		}
	}printf("ucln cua a va b la: %d",a);
	return a;
}
	
