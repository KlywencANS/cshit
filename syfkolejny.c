#include <stdio.h>

int main(){
	int x,y,z,k;
	int a;
	for(int i=0;i<8;i++)
	{
		system(cls);
		do
	      {
		    printf("podaj liczbe z zakresu");
			k = scanf("%d",&x);
			if (k==0) printf("niepoprawny zakres");
			if (x >= 2 || x < 0) 
				{
					printf("liczba musi byc zerem albo jedynką");
					k = 0;
				}
			fflush(stdin);
	    }while(k == 0);
	do
	{
		printf("podaj liczbe z zakresu");
		k = scanf("%d",&y);
		if (k==0) printf("niepoprawny zakres");
		if (y >= 2 || y < 0) 
		{
			printf("liczba musi byc zerem albo jedynką");
			k = 0;
		}
		fflush(stdin);
	}
	while(k == 0);
	do
	{
		printf("podaj liczbe z zakresu");
		k = scanf("%d",&z);
		if (k==0) printf("niepoprawny zakres");
		if (z >= 2 || z < 0) 
		{
			printf("liczba musi byc zerem albo jedynką");
			k = 0;
		}
		fflush(stdin);
	}while(k == 0);
	
	a = x&&y||z;
	
	printf("\nwartosc funkcji = %d",a); 
	getchar();
	system(cls);
}//koniec for/
	return 0;
	
}
