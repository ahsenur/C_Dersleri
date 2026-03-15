#include <stdio.h>
#include <stdlib.h>

//!1.soru
// int sayilar[]= { 1, 6, 5, 2, 1, 4, 2 }; dizisi için kullanıcı tarafından girilen sayıya denk gelen dizi
//  içerisindeki sayıların yerlerine -1 yerleştiren ve bu işlemi tüm dizideki elemanlar -1 olana kadar 
//  devam ettiren ve böylece dizide kaç farklı sayı olduğunu bulan program kodunu yazınız.
//   (Her yerleştirme sonrası dizinin güncel hali yazdırılacaktır. Dizi yazdırma işlemi için ayrı 
//     fonksiyon kullanılacaktır.)
// Örnek:  2 girildi. Dizi: [1, 6, 5, -1, 1, 4, -1]
//             4 girildi. Dizi: [1, 6, 5, -1, 1, -1, -1]
//           		5 girildi. Dizi: [1, 6, -1, -1, 1, -1, -1]
// …. 
// Dizinin son hali: [-1, -1, -1, -1, 1, -1, -1]
// Sonuç: dizide 5 farklı sayı bulunmaktadır.
// void yazdir(int dizi[],int eleman_sayisi);
// int tumu_eksi_mi(int dizi[],int eleman_sayisi);
// int main(){
//     int sayilar[]={1,6,5,2,1,4,2};
//     printf("\ndizinizin hali:\n");
//     yazdir(sayilar,7);
// int farkli_sayilar=0;
//     while(!tumu_eksi_mi(sayilar,7)){
//         int sayi;
//         printf("bir sayi giriniz:\n");
//         scanf("%d",&sayi);
//         int bulundu=0;
//        for (int i=0;i<7;i++) {
//            if (sayi==sayilar[i]) {
//                sayilar[i]=-1;
//                bulundu=1;
//            }
//        }
//         if (bulundu) {
//             printf("Dizinin guncel hali:\n");
//             yazdir(sayilar, 7);
//             printf("\n\n");
//             farkli_sayilar++;
//         } else {
//             printf("Aradiginiz sayi dizide bulunamadi!\n");
//         }
//     }
// }
// void yazdir(int dizi[],int eleman_sayisi){
//     for(int i=0;i<eleman_sayisi;i++)
//     {
//         printf("%d\t",dizi[i]);
//     }
// }
// int tumu_eksi_mi(int dizi[],int eleman_sayisi) {
//     for (int i=0;i<eleman_sayisi;i++) {
//         if (dizi[i]!=-1)
//             return 0;
//     }
//     return 1;
// }
//*2.çözüm
// void yazdir(int dizi[], int eleman_sayisi);
// int main() {
//     int sayilar[] = {1, 6, 5, 2, 1, 4, 2};
//     int eleman_sayisi = 7;
//     int farkli_sayilar = 0;
//     printf("Dizinin ilk hali:\n");
//     yazdir(sayilar, eleman_sayisi);
//     printf("\n\n");  
//     int kalan_elemanlar = eleman_sayisi;    
// Kalan elemanlar olduğu sürece devam et
//     while (kalan_elemanlar > 0) {
//         int sayi;
//         printf("Bir sayi giriniz: ");
//         scanf("%d", &sayi);        
//         int bulundu = 0;
//         for (int i = 0; i < eleman_sayisi; i++) {
//             if (sayilar[i] == sayi) {
//                 sayilar[i] = -1;
//                 bulundu = 1;
//                 kalan_elemanlar--;  // -1 yapılan her eleman için azalt
//             }
//         }        
//         if (bulundu) {
//             printf("Dizinin guncel hali:\n");
//             yazdir(sayilar, eleman_sayisi);
//             printf("\n\n");
//             farkli_sayilar++;
//         } else {
//             printf("Aradiginiz sayi dizide bulunamadi!\n");
//         }
//     }    
//     printf("\nDizinin son hali:\n");
//     yazdir(sayilar, eleman_sayisi);
//     printf("\n\nSonuc: Dizide %d farkli sayi bulunmaktadir.\n", farkli_sayilar);    
//     return 0;
// }
// void yazdir(int dizi[], int eleman_sayisi) {
//     printf("[");
//     for (int i = 0; i < eleman_sayisi; i++) {
//         printf("%d", dizi[i]);
//         if (i < eleman_sayisi - 1) {
//             printf(", ");
//         }
//     }
//     printf("]");
// }

// //!2.soru
// int main() {
//     char kelime[50];
//     printf("kelime giriniz:");
//     gets(kelime);
//     printf("girdiginiz keime:");
//     puts(kelime);
//     char aranan[50];
//     printf("aranan kelimeyi giriniz:");
//     gets(aranan);
//     puts(aranan);
//     int i = 0;
//     int sayac = 0;
//     int uz1 = 0, uz2 = 0;
//     while (kelime[i] != '\0') {
//         uz1++;
//         i++;
//     }
//     printf("kelimenizin uzunlugu:%d", uz1);
//     i = 0;
//     while (aranan[i] != '\0') {
//         uz2++;
//         i++;
//     }
//     printf("aradiginiz kelimenin uzunlugu:%d", uz2);
//     for (int j = 0; j <= uz1 - uz2; j++) {
//         int eslesme = 1;
//         for (int k = 0; k < uz2; k++) {
//             if (kelime[k + j] != aranan[k]) {
//                 eslesme = 0;
//                 break;
//             }
//         }
//         if (eslesme == 1) {
//             sayac++;
//         }
//     }
//     printf("aradiginiz kelime %d adet bulundu", sayac);
// }

// //!3.soru
// int main() {
//  char kelime[50];
//  printf("kelime giriniz:");
//  gets(kelime);
//  printf("girdiginiz kelime:");
//  puts(kelime);
//  char karakter;
//  printf("istenilen karakteri giriniz:");
//  scanf(" %c", &karakter);
//  getchar();
//  int i = 0;
//  char aranan[50];
//  printf("aranan kelimeyi giriniz:");
//  gets(aranan);
//  puts(aranan);
//  char yeni_kelime[200];
//  int j = 0;
//  for (int i = 0; kelime[i] != '\0'; i++) {
//   yeni_kelime[j] = kelime[i];
//   j++;
//   if (kelime[i] == karakter) {
//    for (int k = 0; k < aranan[k] != '\0'; k++) {
//     yeni_kelime[j] = aranan[k];
//     j++;
//    }
//   }
//  }
//  yeni_kelime[j] = '\0';
//  puts(yeni_kelime);
// }




//!4.soru
//* burada yazdirma kismi yok,o poninterla yapılacak
// int main() {
//  char kelime[50];
//  printf("kelime giriniz:");
//  gets(kelime);
//  printf("girdiginiz keime:");
//  puts(kelime);
//  int i=0;
//  int sayi=0;
//  while (kelime[i]!='\0') {
// if (kelime[i]>='0' && kelime[i]<='9') {
//  sayi=sayi*10+kelime[i]-'0';
// }
//   i++;
//  }
//  printf("%d",sayi);
// }




//!5.soru
// int main() {
//  char kelime[50];
//  printf("kelime giriniz:");
//  gets(kelime);
//  printf("girdiginiz keime:");
//  puts(kelime);
// int baslangic,bitis;
//  printf("baslangic indeksini giriniz:");
//  scanf("%d",&baslangic);
//  getchar();
//  printf("bitis indeksini giriniz:");
//  scanf("%d",&bitis);
//  getchar();
// for (int i=baslangic;i<bitis;i++) {
//  printf("%c ",kelime[i]);
// }
// }




