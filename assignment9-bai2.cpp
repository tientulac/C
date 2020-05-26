#include <iostream>
#include <string.h>
// nhap 2 chuoi s1 s2. kiem tra xem s1 co chua s2 hay khong
int main() {
	
	char str1[1000];
	printf("Nhap str1: ");
	fflush(stdin);
	gets(str1);
	
	char str2[1000];
	printf("Nhap str2: ");
	fflush(stdin);
	gets(str2);
	
	if(strstr(str1,str2)){
			printf("str2 nam trong str1");
		}else{
			printf("str2 khong nam trong str1");
		}
}
