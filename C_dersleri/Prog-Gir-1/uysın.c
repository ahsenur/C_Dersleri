#include <stdio.h>
#include <stdlib.h>
//!1.uygulama sınavının kodu
// int main(){
// int rakam,sayi=0;
// while(1)
// {
//       printf("sayi giriniz:");
//       scanf("%d",&rakam);
//       if(rakam==-1)
//       break;
//       if(rakam<9 && rakam >0){
//        sayi=sayi*10+rakam;
//       continue;
//       }
//       else{
//      printf("hatali sayi girdiniz ! lütfen 0-9 arasinda bir sayi giriniz:\n");
//       }
// }
// printf("oluşturduğunuz sayi:%d",sayi);
// }


//!2.uygulama sınavının kodu
//kullanıcıdan alınan 5 tane tam sayıyı bir diziye yerleştiriniz. dizinin son elemanından başlayarak her bir eleman için elemanın değeri kadar ekrana yıldız(*) karakteri yazdırınız.
//örnek çıktı şöyle olmalıdır:
//1.sayiyi giriniz:2
//2.sayiyi giriniz:5
//3.sayiyi giriniz:7
//4.sayiyi giriniz:1
//5.sayiyi giriniz:4
//4=>****
//1=>*
//7=>*******
//5=>*****
//2=>**

// int main(){
//       int dizi[5];
//       printf("dizinin elemanlarini giriniz:");
//       for(int i=0;i<5;i++)
//       {
//             scanf("%d",&dizi[i]);
//       }
//       for(int j=0;j<5;j++)
//       {
//             printf("%d=>",dizi[j]);
//             for(int i=dizi[j];i>0;i--)
//             {
//                   printf("*");
//             }
//             printf("\n");
           
//       }
    
// }




//!3.uygulama sınavının kodu
//?dön bu soruya
// 1,2,3,4,5,6,7,8,9,10 sayılarını içeren bir dizi oluşturunuz. Bu dizideki elemanları kullanıcıdan alınacak bir N değeri kadar sağa kaydıran bir prgram yazınız.
// Kaydırma işlemi sırasında dizinin son elemanları kaybolmamalıdır. Bunun yerine ,dizinin son elemanları başa alınarak döngüsel bir kaydırma yapılmalıdır.
// Programda 2 fonksiyon tanımlanmalıdır:
// 1.sagaKaydir:Diziyi verilen N kadar sağa kaydırır
// 2.diziYazdir:Diziyi ekrana yazdırır
// örnek:
// dizi:1,2,3,4,5,6,7,8,9,10
// Kaydırma miktarı:3
// Dizi,sağa 3 eleamn kaydırıldıktan sonra :8,9,10,1,2,3,4,5,6,7
// Not: Dizinin ilk hali ve kaydırma işlemi sonrasındaki yeni değerlerini yazdırmak için diziYazdirfonksiyonu kullanılmalıdır
// void diziYazdir(int dizi[],int boyut){
//       for(int i=0;i<boyut;i++)
//       {
//             printf("%d ",dizi[i]);
//       }
// }
// void sagaKaydir(int dizi[],int boyut,int N){//?özellikle buraya bak
  
//       for(int k=0;k<N;k++)
//       {
//            int son=dizi[boyut-1];
//            for(int j=boyut-1;j>0;j--)
//            {
//             dizi[j]=dizi[j-1];
//            }
//            dizi[0]=son;
//       }
// }
// int main(){
//       int dizi[]={1,2,3,4,5,6,7,8,9,10};
//       printf("kaydirma işlemi olmaadan önce dizinin hali:\n");
//       diziYazdir(dizi,10);
//       int N;
//       printf("kaydirma miktarini giriniz:");
//       scanf("%d",&N);
//       sagaKaydir(dizi,10,N);
//       printf("kaydirma sonrasi oluşan dizi:\n");
//       diziYazdir(dizi,10);
// }




//!4.uygulama sınavının kodu
// Kullanıcıdan 2 ayrı kelime aldıktan sonra alınan bu kelimeleri kelimeBirlestir isimli bir fonksiyona gönderiniz.
//Bu fonksiyon kendisine gönderilen 2 kelimeyi araya _(alt tire) karakteri ekleyerek birleştirip yeni bir 
//kelime oluşturacaktır. Son olarak girilen kelimeleri ve elde edilen yeni kelimeyi main için ekrana yazdırınız. 
// malloc kullanım örneği: char *p=(char*)malloc(N * sizeof(char*));
// Not: Programda [] şeklinde dizi değişkenleri ve global değişkenler kullanılmayacaktır. 
// String işleme için hazır fonksiyonlar(strcpy , strlen, strcat, vb.) kullanılmayacktır.
// Örnek:
// 1.kelime:yazilim
// 2.kelime:mühendisi
// Girilen kelimeler:
// yazilim
// mühendisi
// Sonuc:
// yazilim_mühendisi

// Örnek kod yapısı:
// #include <stdio.h>
// #include <stdlib.h>
// ... kelimeBirlestir(...){

// }
// int main(){
//             kullanıcıdan 2 kelime al
//             kelimeBirlestir fonksiyonuna gönder
//             girilen 2 kelimeyi ve birleştirilmiş yeni kelimeyi yazdır
// }
// char *kelimeBirlestir(char *p,char *k,int N){
//     int i=0,j=0;
//     char *birlestir=(char*)malloc(sizeof(char)* (2*N+2));
//     while (p[i]!='\0') {
//         birlestir[i]=p[i];
//         i++;
//     }
//     birlestir[i]='_';
//     while (k[j]!='\0') {
//         birlestir[i+j+1]=k[j];
//         j++;
//     }
//     birlestir[i+j+1]='\0';
//     return birlestir;
// }
// int main(){
// int N;
//     printf("kelimelerin boyutunu giriniz:");
//     scanf("%d",&N);
//     char *kelime1=(char*)malloc(sizeof(char)*N);
//     char *kelime2=(char*)malloc(sizeof(char)*N);
//     printf("1.kelimeyi giriniz:");
//     scanf("%s",kelime1);
//     printf("2.kelimeyi giriniz:");
//     scanf("%s",kelime2);
//     char *sonuc=kelimeBirlestir(kelime1,kelime2,N);
//   puts(sonuc);
// }
//?bu uygulama sinavinda return eden kod


// char *birlesik(char *kelime1, char *kelime2);

// int main() {
//     char *kelime1 = (char *) malloc(sizeof(char) * 100);
//     char *kelime2 = (char *) malloc(sizeof(char) * 100);
//     int i = 0;
//     printf("1.kelimei griiniz:");
//     gets(kelime1);
//     printf("2.kelimeyi giriniz:");
//     gets(kelime2);
//     printf("girdiginiz 1.kelime:\n");
//     puts(kelime1);
//     printf("\ngirdiginiz 2.kelime:\n");
//     puts(kelime2);
//     char *sonuc;
//     sonuc = birlesik(kelime1, kelime2);
//     printf("\niki kelimenin birlestiirlmis hali:\n");
//     puts(sonuc);
//     free(kelime1);
//     free(kelime2);
//     free(sonuc);
// }

// char *birlesik(char *kelime1, char *kelime2) {
//     int i = 0;
//     char *birlestirilmis;
//     birlestirilmis = (char *) malloc(sizeof(char) * 100);
//     while (*(kelime1 + i) != '\0') {
//         *(birlestirilmis + i) = *(kelime1 + i);
//         i++;
//     }
//     *(birlestirilmis + i) = '_';
//     i++;
//     int j = 0;
//     while (*(kelime2 + j) != '\0') {
//         *(birlestirilmis + i) = *(kelime2 + j);
//         i++;
//         j++;
//     }

//     *(birlestirilmis + i) = '\0';
//     return birlestirilmis;
// }

