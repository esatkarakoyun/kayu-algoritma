#include<stdio.h>

int main() {

// 1.SORU // KLAVYEDEN GİRİLEN TERİM SAYISINA (N) GÖRE FİBONACCİ SERİSİ'NİN İLK TERİMİNİ BULUP EKRANA YAZAN PROGRAM NEDİR?


     int toplam1,toplam2,toplam3,n,h;
     toplam1=1;
     toplam2=1;
 
    printf("lütfen 'n' değerini giriniz:");
        scanf("%d",&n);
 
    for (h=1; h<=n; h++){
     printf("terim sayisi=%d--terim=%d\n",h,toplam1);
     toplam3=toplam1+toplam2;
     toplam1=toplam2;
     toplam2=toplam3;
    }

    return 0;
}

