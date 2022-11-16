        #include <stdio.h>
        #include <stdlib.h>
         
        int main()
        {
        	int pojSala1=100,pojSala2=60,pojSala3=50;
        	int liczbaOsobSala1, liczbaOsobSala2, liczbaOsobSala3;
        	int k;
        	
        	do {
        		printf("podaj liczbe osob w sali");
        		k = scanf("%d",&liczbaOsobSala1);
        		if(k==0) printf("\nblad formatu");
				if(k==1 && liczbaOsobSala1<0)printf("liczba osob nie moze byc liczba ujemna");
                    while( getchar()!='\n');
				}
			while (k==0 || liczbaOsobSala1<0);
			do {
        		printf("podaj liczbe osob w sali");
        		k = scanf("%d",&liczbaOsobSala2);
        		if(k==0){
        			printf("\nblad formatu");
				}
while( getchar()!='\n');
				if(k==1 && liczbaOsobSala2<0){
					printf("liczba osob nie moze byc liczba ujemna");
				}
			}
			while (k==0 || liczbaOsobSala2<0);
			do {
        		printf("podaj liczbe osob w sali");
        		k = scanf("%d",&liczbaOsobSala3);
        		if(k==0){
        			printf("\nblad formatu");
				}
				if(k==1 && liczbaOsobSala3<0){
					printf("liczba osob nie moze byc liczba ujemna");
				}
while( getchar()!='\n');
			} while (k==0 || liczbaOsobSala3<0);
			printf("\n %d",liczbaOsobSala1);
			printf("\n %d",liczbaOsobSala2);
			printf("\n %d",liczbaOsobSala3);
			
			if(liczbaOsobSala1 > pojSala1){
				printf("\n do sali nie zmiesci sie zadana liczba osob");
			} else {
			    int zmiesci1 = pojSala1 - liczbaOsobSala1; 
			    printf("\n na sali nr1 zmiesci sie jeszcze %d",zmiesci1);
			}
						if(liczbaOsobSala2 > pojSala2){
				printf("\n do sali nie zmiesci sie zadana liczba osob");
			} else {
			    int zmiesci2 = pojSala2 - liczbaOsobSala2; 
			    printf("\n na sali nr1 zmiesci sie jeszcze %d",zmiesci2);
			}
						if(liczbaOsobSala3 > pojSala3){
				printf("\n do sali nie zmiesci sie zadana liczba osob");
			} else {
			    int zmiesci3 = pojSala3 - liczbaOsobSala3; 
			    printf("\n na sali nr1 zmiesci sie jeszcze %d",zmiesci3);
			}
        	return 0;
		}
        	
        	
