#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//!1.soru
// Parametre olarak gönderilen bir diziyi yazdıran fonksiyon.(eleman sayısı da gönderilecektir.
// void diziYazdir(int dizi[],int elemanSayi)
// void diziYazdir(int dizi[],int elemanSayisi){
//       for(int i=0;i<elemanSayisi;i++)
//       {
//             printf("%d ",dizi[i]);
//       }
// }
// int main(){
//       int N;
//       printf("dizizinin eleman sayisini giriniz:");
//       scanf("%d",&N);
//       int dizi[N];
//       printf("dizinin elemanlarini giriniz:");
//       for(int i=0;i<N;i++)
//       {
//             scanf("%d",&dizi[i]);
//       }
//       diziYazdir(dizi,N);
// }

//!2.soru
// Bir diziyi başka bir diziye tersten kopyaladıktan sonra dizileri sırayla diziYazdir fonksiyonu ile yazdırınız.
// void tersten(int dizi[],int kopyala[],int elemanSayisi){
//       for(int i=0;i<elemanSayisi;i++)
//       {
//           kopyala[i]=dizi[elemanSayisi-i-1];
//       }
// }
// void diziYazdir(int dizi[],int elemansayisi){
//       for(int i=0;i<elemansayisi;i++)
//       {
//             printf("%d ",dizi[i]);
//       }
// }
// int main(){
//       int N;
//       printf("dizinin eleman sayisini giriniz:");
//       scanf("%d",&N);
//       int dizi[N],ters[N];
//       printf("dizinin elemanlarini griniz:");
//       for(int i=0;i<N;i++)
//       {
//             scanf("%d",&dizi[i]);
//       }
//       printf("oluşturulan dizinin ilk hali:\n");
//       diziYazdir(dizi,N);
//       tersten(dizi,ters,N);
//       printf("\noluşturulan dizinin tersten yazilmiş hali:\n");
//       diziYazdir(ters,N);
// }

//!3.soru
// Bir karakter dizisinin uzunluğunu bulup döndüren fonksiyonu yazınız.
// int uzunluk(char dizi[]){
//       int i=0,uzunluk=0;
//       while(dizi[i]!='\0')
//       {
//             uzunluk++;
//             i++;
//       }
//       return uzunluk;
// }
// int main(){
//       char kelime[50];
//       printf("kelimeyi giriniz:");
//       gets(kelime);
//       printf("girdiğiniz kelime:");
//       puts(kelime);
//       printf("girdiğiniz karakter dizisinin uzunluğu :%d",uzunluk(kelime));
// }

//!4.soru
// Girilen 2 kelimenin uzunluklarının eşit olup olmadığını bir önceki sorudaki uzunluk bulma fonksiyonunu 
//kullanarak yazdırınız.
// int uzunlukBulma(char dizi[]){
//       int i=0,uzunluk=0;
//       while(dizi[i]!='\0'){
//             uzunluk++;
//             i++;
//       }
//       return uzunluk;
// }
// int main(){
//       char k1[20],k2[20];
//       printf("1.kelimeyi giriniz:");
//       fgets(k1,20,stdin);
//       printf("2.kelimeyi giriniz:");
//       fgets(k2,20,stdin);
//       //? k1[strcspn(k1, "\n")] = '\0';
//       //? k2[strcspn(k2, "\n")] = '\0';
//       printf("girdiğiniz 1.kelime: %s\n", k1);
//       printf("girdiğiniz 2.kelime: %s\n", k2);
//       int ke1=uzunlukBulma(k1);
//       int ke2=uzunlukBulma(k2);
//       if(ke1==ke2)
//       {
//             printf("girdiğiniz kelimelerin uzunluklari birbirine eşittir");
//       }
//       else
//       printf("girdiğiniz kelimelerin uzunluklari birbirine eşit değildir");
// }

//!5.soru
// Bir tam sayı dizisinde istenen sayıyı arayıp bulunduğu konumu döndüren fonksiyonu yazınız.
// int istenen(int dizi[],int elemanSayisi){
//       int istenenEleman;
//       printf("istenen elemani giriniz:");
//       scanf("%d",&istenenEleman);
//       for(int i=0;i<elemanSayisi;i++)
//       {
//             if(dizi[i]==istenenEleman)
//             {
//             printf("aradiğiniz elemanin konumu:%d",i+1);
//             return i+1;
//             }
//       }
//       printf("aradiğiniz eleman dizide bulunmamaiştir");
//       return 0;
// }
// int main(){
//       int N;
//       printf("dizinin eleman sayisini giriniz:");
//       scanf("%d",&N);
//       int dizi[N];
//       printf("diizinin elemanlarini giriniz:\n");
//       for(int i=0;i<N;i++)
//       {
//             scanf("%d",&dizi[i]);
//       }
//       istenen(dizi,N);
// }

//!6.soru
// Verilen bir metinde istenen harften kaç adet olduğunu döndüren fonksiyon.
// int adet(char dizi[], char aranan);
// int main() {
//     char kelime[100], aranan;
//     printf("kelimeyi giriniz:");
//     gets(kelime);
//     printf("girdiginiz kelime:");
//     puts(kelime);
//     printf("aradiginiz harfi giriniz");
//     scanf("%c", &aranan);
//     int adedi = adet(kelime, aranan);
//     printf("aradiginiz harf kelimede %d adet bulunmustur", adedi);
// }
// int adet(char dizi[], char aranan) {
//     int i = 0;
//     int adet = 0;
//     while (dizi[i] != '\0') {
//         if (dizi[i] == aranan) {
//             adet++;
//         }
//         i++;
//     }
//     return adet;
// }

//!7.soru
// Parametre olarak gönderilen bir tamsayı dizisindeki en büyük elemanı döndüren fonksiyon.
// int enBüyük(int dizi[],int elemanSayisi){
//       int enBüyük;
//       enBüyük=dizi[0];
//       for(int i=0;i<elemanSayisi;i++)
//       {
//             if(dizi[i]>enBüyük)
//             {
//                   enBüyük=dizi[i];
//             }
//       }
//       return enBüyük;
// }
// int main(){
//       int N;
//       printf("dizinin eleman sayisini giriniz:");
//       scanf("%d",&N);
//       int dizi[N];
//       printf("dizinin elemanlarini giriniz:");
//       for(int i=0;i<N;i++)
//       {
//             scanf("%d",&dizi[i]);
//       }
//       enBüyük(dizi,N);
//       printf("girdiğiniz dizinin en büyük elemani:%d",enBüyük(dizi,N));
// }
