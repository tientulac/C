#include <stdio.h>
#include <string.h>

// nhap mang n chuoi tu ban phim. sau do nhap chuoi s va kiem tra s co nam trong mang hay khong


int main() {
	int n;

	printf("Nhap n: ");
	scanf("%d",&n);

	char str[n][1000];
	for(int i=0 ; i<n ; i++ ){
		printf("nhap chuoi thu %d: ",i);
		scanf("%s",str[i]);
	}
	
	char s[1000];
	printf("Nhap chuoi s: ");
	fflush(stdin);
	gets(s);
	
	for(int i=0 ; i<n ; i++ ){
		if(strstr(str[i],s)){
			printf("s nam trong mang");
		}else{
			printf("s khong nam trong mang");
		}
		break;
	}

return 0;
}


