#include <iostream>
#include <math.h>
//gui vao so tien ban dau la 4000$ voi lai suat 8%/nam(lai kep).Tinh so tien ca goc lan lai sau 4 nam

int main() {
	int a;
	float b;
	
	printf("nhap so tien can gui\n");
	scanf("%d",&a);
	b=a*(pow((1+0.08),4));
	printf("so tien ca goc lan lai sau 4 nam la: %f $",b);
	
}
