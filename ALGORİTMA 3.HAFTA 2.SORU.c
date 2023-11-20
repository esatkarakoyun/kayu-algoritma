#include<stdio.h>

int main() {

//Kullanıcının seçimine göre haftanın gününü ekrana yazdıran programı switch ifadesini kullanarak yapınız.

    int secim;
    printf("1-7 arasında bir sayı giriniz... 1=Pazartesi 2=Salı 3=Çarşamba 4=Perşembe 5=Cuma 6=Cumartesi 7=Pazar \n");
    scanf("%d",&secim);

    switch (secim) {
        case 1:
            printf("Pazartesi\n");
            break;
        case 2:
            printf("Salı\n");
            break;
        case 3:
            printf("Carsamba\n");
            break;
        case 4:
            printf("Persembe\n");
            break;
        case 5:
            printf("Cuma\n");
            break;
        case 6:
            printf("Cumartesi\n");
            break;
        case 7:
            printf("Pazar\n");
            break;
        default:
            printf("Yanlış secim yaptınız. Girdiğiniz sayı 1-7 arasında olmalı!\n");
            break;
 }
    return 0;
}