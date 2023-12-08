#include <stdio.h>

int main() {
    float not_1 ;
    float not_2 ;
    float sonuc ;

    printf("Vize notunuzu giriniz:"); scanf("%f", &not_1);
    printf("Final notunuzu giriniz:"); scanf("%f", &not_2);

    sonuc = (not_1 * 40 / 100) + (not_2 * 60 / 100);

    if (sonuc >= 80) {
        printf("Tebrikler, yuksek basari ile sinifi gectiniz.");
    }
    else if (sonuc < 80 && sonuc >= 50){
        printf("dusuk basari ile sinifi gectiniz.");
    }
    else{
        printf("sinifi geçemediniz.");
    }
    
}