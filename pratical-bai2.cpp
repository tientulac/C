#include<stdio.h>
#include<string.h>


int main(){
	char str[1000];
	int f,a=0,i=0,u=0,e=0,o=0;
	printf("nhap chuoi: ");
	gets(str);
	for(f=0;f<strlen(str);f++){
		if(str[f] == 'a'){
			a++;
		}if(str[f] == 'i'){
			i++;
		}if(str[f] == 'o'){
			o++;
		}if(str[f] == 'u'){
			u++;
		}if(str[f] == 'e'){
			e++;
		}
	}
	printf("so lan xuat hien:\n a=%d\ti=%d\to=%d\tu=%d\te=%d\trest=%d\n",a,i,o,u,e,strlen(str)-(a+i+o+u+e));
	float a1,i1,e1,u1,o1;
	a1= ((float)a*100.0)/strlen(str);
	i1= ((float)i*100.0)/strlen(str);
	o1= ((float)o*100.0)/strlen(str);
	u1= ((float)u*100.0)/strlen(str);
	e1= ((float)e*100.0)/strlen(str);
	printf("phan tram xuat hien:\n a=%0.2f%% \ti=%0.2f%% \to=%0.2f%% \tu=%0.2f%% \te=%0.2f%% \n",a1,i1,o1,u1,e1);
return 0;
}
