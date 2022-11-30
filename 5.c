#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int liczba,c3,c2,c1,c0,k;
	do{
		printf("podaj liczbe z zakresu");
		k = scanf("%d",&liczba);
		if (liczba <0 || liczba>9999){
			printf("podano liczbe nie nalezaca do przedzialu <0;9999>");
			k = 0;
		}
		fflush(stdin);
	} while(k == 0);
		c3=liczba/1000;
		liczba = liczba - c3*1000;
		c2 = liczba/100;
		liczba = liczba - c2*100;
		c1 = liczba/10;
		liczba = liczba -c1*10;
		c0 = liczba;
		printf("\n liczba wynosi %d,%d,%d,%d",c3,c2,c1,c0);
		
		switch(c3){
			case 1: printf("jeden");
			break;
			case 2: printf("dwa ");
			break;
			case 3: printf("trzy ");
			break;
			case 4: printf("cztery ");
			break;
			case 5: printf("piec ");
			break;
			case 6: printf("szesc ");
			break;
			case 7: printf("siedem ");
			break;
			case 8: printf("osiem ");
			break;
			case 9: printf("dziewiec ");
			break;
			
		}
		if (c3==1){
			printf("tysiac");
		}
		if (c3==2||c2==3||c1==4) printf("\n tysiace");
		
		switch(c2){
			case 1: printf("sto ");
			break;
			case 2: printf("dwiescie ");
			break;
			case 3: printf("trzysta ");
			break;
			case 4: printf("czterysta ");
			break;
			case 5: printf("piecset ");
			break;
			case 6: printf("szescset ");
			break;
			case 7: printf("siedemset ");
			break;
			case 8: printf("osiemset ");
			break;
			case 9: printf("dziewiecset ");
			break;
			}
			switch(c1){
			case 1:
				switch(c0){
					case 0: printf("dziesiec");
					break;
					case 1:printf("jedynascie");
					break;
					case 2: printf("dwanascie");
					break;
					case 3:printf("trzynascie");
					break;
					case 4: printf("czternascie");
					break;
					case 5:printf("pietnascie");
					break;
					case 6: printf("szesnascie");
					break;
					case 7:printf("siedemnascie");
					break;
					case 8: printf("osiemnascie");
					break;
					case 9:printf("dziewietnascie");
					break;
					
				}
					case 2:printf("dzwadziescia");
					break;
					case 3:printf("trzydziesci");
					break;
					case 4:printf("czterdziesci");
					break;
					case 5:printf("piecdziesiac");
					break;
					case 6:printf("szescdziesiat");
					break;
					case 7:printf("siedemdziesiat");
					break;
					case 8:printf("osiemdziesiat");
					break;
					case 9:printf("dziewiedziesiat");
					break;
					
			}
			switch(c0){
				case 1: printf("jeden");
				break;
				case 2: printf("dwa");
				break;
				case 3: printf("trzy");
				break;
				case 4: printf("cztery");
				break;
				case 5: printf("piec");
				break;
				case 6: printf("szesc");
				break;
				case 7: printf("siedem");
				break;
				case 8: printf("osiem");
				break;
				case 9: printf("dziewiec");
				break;
			}
	
	return 0;
}
