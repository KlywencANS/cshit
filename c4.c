#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double x,y,z,v;
	int k, ilosc;
	int iteracja = 0;
	double mian1,mian2,mian3,mian4;
	scanf("%d",&ilosc);
	do{
	
	do{
		printf("\nPodaj zmienna x:");
		k = scanf("%lf",&x);
		if (k==0) printf("blad formatu");
		fflush(stdin);
		
	} while (k==0);
		do{
		printf("\nPodaj zmienna y:");
		k = scanf("%lf",&y);
		if (k==0) printf("blad formatu");
		fflush(stdin);
	
	} while (k==0);
		do{
		printf("\nPodaj zmienna z:");
		k = scanf("%lf",&z);
		if (k==0) printf("blad formatu");
		fflush(stdin);
	} while (k==0);
	
	mian1 = y - fabs(pow(x,3));
	mian2 = x + y/mian1;
	mian3 = z - 5;
	mian4 = y/mian3 + x/mian2;
	printf("\n wynik 1 %lf",mian1);
	if(mian1==0){
		printf("dzielenie przez 0");
		getchar();
		return 1;
	}
		if(mian2==0){
		printf("dzielenie przez 0");
		getchar();
		return 1;
	}
		if(mian3==0){
		printf("dzielenie przez 0");
		getchar();
		return 1;
	}
		if(mian4==0){
		printf("dzielenie przez 0");
		getchar();
		return 1;
	}
	printf("\n wynik 2 %lf",mian2);
	printf("\n wynik 3 %lf",mian3);
	printf("\n wynik 4 %lf",mian4);
	
	v = 1/mian4;
	printf("\n wynik tego dzialania %lf",v);
	iteracja ++;
}while (iteracja < ilosc);
	
	
	
	
	
	
	
	
	return 0;
}
