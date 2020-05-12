#include <iostream>

// Nhap vao so nguyen duong khong qua 4 chu so. tim so nghich dao

int main() {
	int a;
	printf("nhap vao so nguyen duong a:\n");
	scanf("%d",&a);
	if(0<a && a<10){
		printf("khong ton tai nghich dao");
	}else if (10<= a && a<=99){
							int x=a/10,y=a-10*x;
							printf("so nghich dao can tim la: %d%d",y,x);
	}else if (100<= a && a<=999){
							int m=a%100,n=a%10;
							int p=(m-n)/10;
							int t=(a-m)/100;
							printf("so nghich dao can tim la: %d%d%d",n,p,t);
	}else if (1000<=a && a<=9999){
							int b=a%1000,c=a%100,d=a%10;
							int e=(b-c)/100,
								f=(c-d)/10,
								h=(a-b)/1000;
							printf("so nghich dao can tim la: %d%d%d%d",d,f,e,h);
	}else if (a>9999){
		printf("chi nhan cac so nguyen duong khong qua 4 chu so");
	}
}


