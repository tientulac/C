#include <stdio.h>
#include <string.h>



void concat(char s1[100], char s2[100]){
	printf("nhap vao chuoi thu nhat: ");
	fflush(stdin);
	gets(s1);
	printf("nhap vao chuoi thu hai: ");
	fflush(stdin);
	gets(s2);
	strcat(s1," ");
	strcat(s1,s2);
    printf("chuoi duoc noi la: %s",s1);
}

int main(){
	char s1[100],s2[100];
	concat(s1,s2);
}
