/*Tapşırıq 1: Şəxsi məlumatlar
Aşağıdakı məlumatları ekrana çıxaran proqram yazın:

•	Adınız
•	Soyadınız
•	Yaşınız
•	Universitetiniz
•	İxtisasınız
Gözlənilən çıxış:
Ad: Əli
Soyad: Məmmədov
Yaş: 20
Universitet: Bakı Dövlət Universiteti
İxtisas: Kompüter Elmləri*/


#include <stdio.h>

int main() {
    char ad[50];
    char soyad[50];
    int yas;
    char universitet[100];
    char ixtisas[100];

    // Istifad?çid?n m?lumatlari sorusuruq
    printf("Adinizi daxil edin: ");
    scanf("%49s", ad);

    printf("Soyadinizi daxil edin: ");
    scanf("%49s", soyad);

    printf("Yasinizi daxil edin: ");
    scanf("%d", &yas);

    // Bosluqlu m?tn üçün fgets istifad? edirik
    getchar(); // scanf-d?n sonra buffer t?mizl?m?k üçün
    printf("Universitetinizi daxil edin: ");
    fgets(universitet, sizeof(universitet), stdin);

    printf("Ixtisasinizi daxil edin: ");
    fgets(ixtisas, sizeof(ixtisas), stdin);

    // Çixis
    printf("\n--- Sizin M?lumatlar ---\n");
    printf("Ad: %s", ad);
    printf("Soyad: %s", soyad);
    printf("Yas: %d\n", yas);
    printf("Universitet: %s", universitet);
    printf("Ixtisas: %s", ixtisas);

    return 0;
}
