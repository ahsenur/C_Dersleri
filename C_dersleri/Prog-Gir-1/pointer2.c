#include <stdio.h>
#include <stdlib.h>

//!1.soru
// Kullanıcıdan N adet sayı aldıktan sonra bu sayıları toplam fonksiyonuna göndererek toplamlarını bulunuz ve
//  sonucu maine döndürüp yazdırınız.(Dizi kullanılmayacaktır)
// int toplam(int *N, int *toplam, int boyut);
// void yazdir(int *ptr, int boyut);
// int main() {
//     int N;
//     printf("N degerini giriniz:");
//     scanf("%d", &N);
//     int *ptr = (int *) malloc(sizeof(int) * N);
//     printf("N tane elemani giriniz:\n");
//     for (int i = 0; i < N; i++) {
//         scanf("%d", ptr + i);
//     }
//     printf("\nolusturulan dizi:\n");
//     yazdir(ptr, N);
//     int topl;
//     toplam(ptr, &topl, N);
//     printf("\nolusturdugunuz dizinin toplami:%d", topl);
// }
// int toplam(int *N, int *toplam, int boyut) {
//     int sonuc = 0;
//     for (int i = 0; i < boyut; i++) {
//         sonuc += N[i];
//     }
//     *toplm = sonuc;
// }
// void yazdir(int *ptr, int boyut) {
//     for (int i = 0; i < boyut; i++) {
//         printf("%d ", *(ptr + i));
//     }
// }

//!2.soru
//Girilen 5 adet sayıyı bir diziye aktardıktan sonra bu diziyi pointer kullanarak tersten yazdırınız.
// void yazdir(int *ptr, int boyut);
// int main() {
//     int dizi[5];
//     printf("5 adet sayi giriniz:\n");
//     for (int i = 0; i < 5; i++) {
//         scanf("%d", &dizi[i]);
//     }
//     int *ptr = (int *) malloc(sizeof(int) * 5);
//     for (int i = 4; i >= 0; i--) {
//         *(ptr + i) = dizi[i];
//     }
//     printf("\nolusturulan pointer:\n");
//     yazdir(ptr, 5);
// }
// void yazdir(int *ptr, int boyut) {
//     for (int i = boyut - 1; i >= 0; i--) {
//         printf("%d ", *(ptr + i));
//     }
// }

//!3.soru
//Girilen bir kelimenin uzunluğunu pointer kullanarak bulan fonksiyonu yazınız.
// int main() {
//     char *kelime=(char*)malloc(sizeof(char)*100);
//     printf("kelime giriniz:");
//     gets(kelime);
//     int i=0;
//     while (kelime[i]!='\0') {
//         i++;
//     }
//     printf("girilen kelimenin uzunlugu:%d",i);
// }

//!4.soru
//Girilen bir kelimedeki sesli ve sessiz harf sayılarını pointer kullanarak bulunuz.
//(türkçe karakter kullanılmayacaktır)
// int main() {
//     char *kelime=(char*)malloc(sizeof(char)*100);
//     printf("bir kelime giriniz:");
//     gets(kelime);
//     printf("girdiginiz kelime:");
//     puts(kelime);
//     int i=0;
//     int sessiz=0,sesli=0;
//     while (*(kelime+i)!='\0') {
//         if (kelime[i]=='a' || kelime[i]=='e' || kelime[i]=='i' || kelime[i]=='o' | kelime[i]=='u') {
//             sesli++;
//         }
//         else if ((kelime[i]!='a' || kelime[i]!='e' || kelime[i]!='i' || kelime[i]!='o' || kelime[i]!='u') && kelime[i]>='a' && kelime[i]<='z') {
//             sessiz++;
//         }
//         i++;
//     }
//     printf("\ngirdiginiz kelimede %d adet sesli harf bulunmaktadir",sesli);
//     printf("girdiginiz kelimede %d adet ssessiz harf bulunmaktadir",sessiz);
// }
//?kelimeyse böyle de yazilabilir
// int main() {
//     char *kelime=(char*)malloc(sizeof(char)*100);
//     printf("bir kelime giriniz:");
//     gets(kelime);
//     printf("girdiginiz kelime:");
//     puts(kelime);
//     int i=0;
//     int sessiz=0,sesli=0;
//     while (*(kelime+i)!='\0') {
//         if (kelime[i]=='a' || kelime[i]=='e' || kelime[i]=='i' || kelime[i]=='o' | kelime[i]=='u') {
//             sesli++;
//         }
//         i++;
//     }
//     printf("\ngirdiginiz kelimede %d adet sesli harf bulunmaktadir",sesli);
//     printf("girdiginiz kelimede %d adet ssessiz harf bulunmaktadir",i-sesli);
// }

//!5.soru
//Girilen bir kelimeyi pointer kullanarak tersten yazdırınız.
// int main() {
//     char *kelime = (char *) malloc(sizeof(char) * 100);
//     printf("bir kelime giriniz:");
//     gets(kelime);
//     printf("girdiginiz kelime:");
//     puts(kelime);
//     int i = 0;
//     while (kelime[i] != '\0') {
//         i++;
//     }
//     kelime[i] = '\0';
//     int uzunluk = i;
//     for (int j = 0; j <= uzunluk / 2; j++) {
//         int temp = kelime[j];
//         kelime[j] = kelime[uzunluk - j - 1];
//         kelime[uzunluk - j - 1] = temp;
//     }
//     for (int j = 0; j < uzunluk; j++) {
//         printf("%c", kelime[j]);
//     }
// }

//!6.soru
//Girilen 5 sayıyı bir diziye aktardıktan sonra bu diziyi fonksiyona 
//gönderip dizideki en büyük ve en küçük sayı ile dizi toplamını bulup sonuçları main içinde yazdırınız.
//?1.cozum
// int toplam(int dizi[],int eleman_sayisi,int *enb,int *enk,int *toplam);
// int main(){
// int dizi[]={1,2,3,4,87};
// printf("olusturdugunuz dizi:\n");
// for(int i=0;i<5;i++)
// {
//     printf("%d\t",dizi[i]);
// }
// int enk=dizi[0];
// int enb=dizi[0];
// int toplammm=0;
// int toplami=toplam(dizi,5,&enb,&enk,&toplammm);
// printf("\n");
// printf("olusturdugunuz dizide en buyuk ve en kucuk elemanin toplami:%d\n",toplammm);
// }
// int toplam(int dizi[],int eleman_sayisi,int *enb,int *enk,int *toplam){
//     for(int i=0;i<eleman_sayisi;i++)
//     {
//             if(dizi[i]>*enb){
//                 *enb=dizi[i];
//             }
//             if(dizi[i]<*enk){
//                 *enk=dizi[i];
//             }
//     }
//     int sonuc=*enb+*enk;
//     *toplam=sonuc;
// }
//?2.cozum
// int toplam(int *dizi,int eleman_sayisi,int *enb,int *enk,int *toplam);
// int main(){
// int a;
// printf("dizinin eelman sayisini giriniz:");
// scanf("%d",&a);
// int *dizi=(int*)malloc(sizeof(int)*a);
// printf("dizinin eelmanlarini griiniz:");
// for(int i=0;i<a;i++)
// {
//     scanf("%d",(dizi+i));
// }
// printf("olusturdugunuz dizi::\n");
// }
// int toplam(int *dizi,int eleman_sayisi,int *enb,int *enk,int *toplam){
//     for(int i=0;i<eleman_sayisi;i++)
//     {
//             if(*(dizi+i)>*enb){
//                 *enb=*(dizi+i);
//             }
//             if(*(dizi+i)<*enk){
//                 *enk=*(dizi+i);
//             }
//     }
//     int sonuc=*enk + *enb;
//     *toplam=sonuc;
//     return *toplam;
// }

//!7.soru
//Pointer kullanarak A-Z arası harfleri belleğe yerleştirdikten sonra ekrana yazdırınız.
// int main() {
// char *pointer=(char*)malloc(sizeof(char)*50);
//  int j=0;
// for (char i='A';i<='Z';i++) {
//  *(pointer+j)=i;
//  j++;
// }
//  int uzunluk=j;
//  printf("A-Z arasi harfler:\n");
// for (int i=0;i<uzunluk;i++) {
//  printf("%c ",*(pointer+i));
// }
//  *(pointer+j)='\0';
//  free(pointer);
// }

//!8.soru
//Girilen kelimenin palindrom olup olmadığını pointer kullanarak bulunuz.
// int main() {
//  char *kelime = (char *) malloc(sizeof(char) * 100);
//  printf("bir kelime giriniz:");
//  gets(kelime);
//  printf("girdiginiz kelime:\n");
//  puts(kelime);
//  int uzunluk = 0;
//  while (*(kelime + uzunluk) != '\0') {
//   uzunluk++;
//  }
//  int palindrom = 1;
//  printf("girdiginiz kelimenin uzunlugu:%d\n", uzunluk);
//  for (int i = 0; i < uzunluk / 2; i++) {
//   if (*(kelime + i) != *(kelime + uzunluk - i - 1)) {
//    palindrom = 0;
//    break;
//   }
//  }
//  if (palindrom)
//   printf("giridiginiz kelime palindromdur");
//  else
//   printf("girdiigniz kelime palindrom degildir");
//  free(kelime);
// }


