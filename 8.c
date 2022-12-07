#include <stdio.h>

int main(){
	unsigned int a,b;
	int k;
	int c,d,e,f,g,h;
	
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
	
	c = a>b;
	d = a>=b;
	e = a>b;
	f = a<=b;
	g = a==b;
	h = a!=b;
	if (c == 1) printf("prawda"); else printf("falsz");
	if (d == 1) printf("prawda"); else printf("falsz");
	if (e == 1) printf("prawda"); else printf("falsz");
	if (f == 1) printf("prawda"); else printf("falsz");
	if (g == 1) printf("prawda"); else printf("falsz");
	if (h == 1) printf("prawda"); else printf("falsz");
	printf("\n :%d",c);
	printf("\n :%d",d);
	printf("\n :%d",e);
	printf("\n :%d",f);
	printf("\n :%d",g);
	printf("\n :%d",h);
		
}
