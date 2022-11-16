// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int aktWyn, aktmiesiac, miesiacPodWyn,wynPodw, kwotaWyr;
    int k;
do{
    printf("podaj pensje obecna");
    k = scanf("%d",&aktWyn);
    if (k == 0) printf("\n blad formatu");
    if (k == 1 || aktWyn<0) printf("pensja nie moze byc ujemna");
    while( getchar()!='\n');
}while (k==1 && aktWyn<0);
do{
    printf("podaj pensje obecna");
    k = scanf("%d",&aktWyn);
    if (k == 0) printf("\n blad formatu");
    if (k == 1 || aktWyn<0) printf("pensja nie moze byc ujemna");
    while( getchar()!='\n');
}while (k==1 && aktWyn<0);
do{
    printf("podaj pensje obecna");
    k = scanf("%d",&aktWyn);
    if (k == 0) printf("\n blad formatu");
    if (k == 1 || aktWyn<0) printf("pensja nie moze byc ujemna");
    while( getchar()!='\n');
}while (k==1 && aktWyn<0);

    return 0;
}
