#include<stdio.h>
#include<stdlib.h>

int main() {

    int sayi = 40;
    int* s = &sayi;

    //Sayiyi Ekrana Yazdýrma

    printf("Sayi=%d\n", sayi);
    //Adresi Ekrana Yazdirma
    printf("Adres=%x", s);

    char karakter = 'a';
    char* k = &karakter;

    printf("\n\n***********\n\n");

    //Karakteri Ekrana Yazdirma
    printf("Karakter=%c\n", karakter);
    //Adresi Ekrana Yazdirma
    printf("Adres=%x\n\n", k);


    return 0;
}