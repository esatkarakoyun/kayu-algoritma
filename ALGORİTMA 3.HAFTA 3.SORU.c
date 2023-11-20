#include<stdio.h>

int main() {

// Kullanıcıdan 3 tam sayı girmesini isteyiniz ve girilen tam sayılardan büyük olanı ekranda yazdırınız.

    int sayi1,sayi2,sayi3;
    printf("3 adet tam sayı giriniz...");
    scanf("%d %d %d",&sayi1,&sayi2,&sayi3);

    int enBuyuk;

    if (sayi1>=sayi2 && sayi1>=sayi3)
    {
        enBuyuk=sayi1;
    } 
    else if (sayi2>=sayi1 && sayi2>=sayi3)
    {
        enBuyuk=sayi2;
    }
    else
    {
        enBuyuk=sayi3;
    }
    
    printf("En buyuk sayi: %d\n", enBuyuk);

    return 0;
}