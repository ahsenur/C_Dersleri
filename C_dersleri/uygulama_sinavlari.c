#include  <stdio.h>
#include <string.h>
#include <stdlib.h>

//!1.uygulama sinavi
// int main() {
//     int sayi;
//     printf("bir sayi giriiniz:");
//     scanf("%d", &sayi);
//     int kare = sayi * sayi;
//     int esit_mi = 0;
//     int carpim = 1;
//     for (int i = 1; i <= sayi; i++) {
//         if (sayi % i == 0) {
//             carpim *= i;
//         }
//     }
//     printf("girdiginiz sayinin karesi:%d\n", kare);
//     if (carpim == kare) {
//         printf("\nESİT\n");
//         printf("sayinin tam bolenleri:\n");
//         for (int i = 1; i <= sayi; i++) {
//             if (sayi % i == 0) {
//                 printf("%d ", i);
//             }
//         }
//     } else
//         printf("ESİT DEGİL");
// }


//!2.uygulama sinavi



//!3.uygulama sinavi
int enBuyukIndexBul(int dizi[], int eleman_sayiis, int enk);
int enKucukIndexBul(int dizi[], int eleman_sayisi, int enb);
void yazdir(int dizi[], int eleman_sayisi);
int main() {
    int dizi[] = {1,2,3,4,5,6};
    printf("Dizi:\n");
    yazdir(dizi, 6);
    printf("\n");
    int enb = dizi[0];
    int enk = dizi[0];
    int buyuk_index = enBuyukIndexBul(dizi, 6, enb);
    // printf("%d\n\n", buyuk_index);
    int kucuk_index = enKucukIndexBul(dizi, 6, enk);
    // printf("%d\n\n", kucuk_index);
 int temp=dizi[kucuk_index];
    dizi[kucuk_index]=dizi[buyuk_index];
    dizi[buyuk_index]=temp;

    printf("yeni dizi:\n");
    yazdir(dizi, 6);
}
void yazdir(int dizi[], int eleman_sayisi) {
    for (int i = 0; i < eleman_sayisi; i++) {
        printf("%d ", dizi[i]);
    }
}
int enBuyukIndexBul(int dizi[], int eleman_sayisi, int enb) {
    int i = 0;
    int index = 0;
    for (i = 0; i < eleman_sayisi; i++) {
        if (dizi[i] > enb) {
            enb = dizi[i];
            index = i;
        }
    }
    return index;
}
int enKucukIndexBul(int dizi[], int eleman_sayisi, int enk) {
    int i = 0;
    int index = 0;
    for (i = 0; i < eleman_sayisi; i++) {
        if (dizi[i] < enk) {
            enk = dizi[i];
            index = i;
        }
    }
    return index;
}


