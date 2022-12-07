#include <stdio.h>

int main(){
	unsigned int a,b,c;
	int d,e,f,g,h;
	int k;

		do
	{
		printf("podaj liczbe z zakresu");
		k = scanf("%u",&a);
		if (k==0) printf("niepoprawny zakres");
		fflush(stdin);
	}while(k == 0);
		do
	{
		printf("podaj liczbe z zakresu");
		k = scanf("%u",&b);
		if (k==0) printf("niepoprawny zakres");
		fflush(stdin);
	}while(k == 0);
	d = a&&b;
	e = a||b;
	f=!a;
	g=!b;
	h=!a&&b||a&&!b;
	if(d==1) printf("prawda"); else printf("falsz");
	if(e==1) printf("prawda"); else printf("falsz");
	if(f==1) printf("prawda"); else printf("falsz");
	if(g==1) printf("prawda"); else printf("falsz");
	if(h==1) printf("prawda"); else printf("falsz");
	printf("\n :%d",d);
	printf("\n :%d",e);
	printf("\n :%d",f);
	printf("\n :%d",g);
	printf("\n :%d",h);
	
	
	
	
	
	
}
