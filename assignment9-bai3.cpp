#include<stdio.h>
#include<string.h>
// nhap vao 1 mang n chuoi. sap xep lai theo thu tu alphabet

int main() {

	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	
	char str[n][1000];
	
	for(int i=0;i<n;i++){
	printf("\nNhap chuoi thu %d : \n",i);
    fflush(stdin);
    gets(str[i]);
	}

	char temp[1000];
	
   	for (int i=0; i<n-1; i++) {
      for (int j=0; j<n-i-1; j++) {
      	int cmp=strcmp(str[j], str[j+1]);
         if (cmp > 0) {
            strcpy(temp,str[j]);
            strcpy(str[j], str[j+1]);
            strcpy(str[j+1], temp);
         }
      }
    }
   
	printf("\nSap xep thu tu cua cac chuoi:");
    for (int i = 0; i < n; i++)
      printf("\n%s", str[i]);

   return(0);
}
