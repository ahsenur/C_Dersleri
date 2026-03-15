#include <stdio.h>
#include <stdlib.h>
//!1.soru
// Parametre olarak gönderilen iki sayı arasında kalan sayıların toplamını döndüren fonksiyonu yazınız.
// int toplam(int s1,int s2){
//       int toplam=0;
//       if(s1>s2)
//       {
//        for(int i=s2+1;i<s1;i++)
//        {
//             toplam+=i;
//        }     
//       }
//       else
//       {
//        for(int i=s1+1;i<s2;i++)
//        {
//             toplam+=i;
//        }     
//       }
//       return toplam;   
// }
// int main(){
//       int a,b;
//       printf("1. ve 2.saylari giriniz:");
//       scanf("%d%d",&a,&b);
//       toplam(a,b);
//       printf("iki sayi arasinda kalan sayilarin toplami:%d",toplam(a,b));
// }

//!2.soru
// Verilen sayının mutlak değerini döndüren fonksiyonu yazınız
// int deger(int sayi){
//       if(sayi<0)
//       sayi=-sayi;
//       else
//       sayi=sayi;
//       return sayi;
// }
// int main(){
//       int sayi;
//       printf("sayi giriniz:");
//       scanf("%d",&sayi);
//       deger(sayi);
//       printf("giridğiniz sayinin mutlak değeri:%d",deger(sayi));
// }

//!3.soru
// Yarıçap değerini parametre olarak alıp dairenin alanını ve çevresini hesaplayan 
//AlanHesapla ve CevreHesapla fonksiyonlarını tek programda yazıp çağırınız.
// float alanHesapla(float yaricap,float pi){
//       float alan;
//       alan=yaricap * yaricap * pi;
//       return alan;
// }
// float cevreHesapla(float yaricap,float pi){
//       float cevre;
//       cevre=2*pi*yaricap;
//       return cevre;
// }
// int main(){
//       float yaricap;
//       const float pi=3.14;
//       printf("yaricap değerini giriniz:");
//       scanf("%f",&yaricap);
//       float alan=alanHesapla(yaricap,pi);
//       float cevre=cevreHesapla(yaricap,pi);
//       printf("dairenin alani:%.2f\n",alan);
//       printf("dairenin çervesi:%.2f\n",cevre);
// }

//!4.soru
// Fiyat ve kdv oranını parametre olarak alıp toplam fiyatı ekrana yazdıran fonksiyonu yazınız.
// float toplamFiyat(float fiyat,float kdvOrani){
//       float toplam= fiyat + (fiyat * kdvOrani);
//       return toplam;
// }
// int main(){
//       float fiyat,kdvOrani;
//       printf("maaşinizi giriniz:");
//       scanf("%f",&fiyat);
//       printf("kdv oraninizi giriniz:");
//       scanf("%f",&kdvOrani);
//       toplamFiyat(fiyat,kdvOrani);
//       printf("toplam fiyat:%f",toplamFiyat(fiyat,kdvOrani));
// }

//!5.soru
// Parametre olarak verilen taban ve üs değerlerine göre Üs Alma işlemi
// gerçekleştiren ve sonucu döndüren fonksiyonu yazınız.
// int üsAlma(int taban,int üs){
//       int üssü=1;
//       for(int i=0;i<üs;i++)
//       {
//             üssü*=taban;
//       }
//       return üssü;
// }
// int main(){
//       int taban,üs;
//       printf("taban değerini giriniz:");
//       scanf("%d",&taban);
//       printf("üs değerini giriniz:");
//       scanf("%d",&üs);
//       üsAlma(taban,üs);
//       printf("girdiğiniz sayinin üss:%d",üsAlma(taban,üs));
// }

//!6.soru
// Kendisine parametre olarak verilen bir tam sayının Asal olup olmadığını kontrol edip Asal ise 1, 
//değilse 0 değerini döndüren fonksiyon
// int asalMi(int sayi){
//       int asal=1;
//       for(int i=2;i<sayi;i++)
//       {
//             if(sayi%i==0)
//             {
//                   asal=0;
//                   break;
//             }
//       }
//       if(asal)
//       printf("sayiniz asaldir");
//       else
//       printf("sayiniz asal değildir");
//       return asal;
// }
// int main(){
//       int sayi;
//       printf("bir syai giriniz:");
//       scanf("%d",&sayi);
//      int asal= asalMi(sayi);
//      printf("\n%d",asal);    
// }

//!7.soru
// 1-N arası asal sayıları listeleyen programı önceki sorudaki Asal fonksiyonu kullanarak yazınız.
// void asalMi(int N){
// int sayi;
// for(int i=2;i<N;i++)
// {
//       int asal=1;
//       for(int j=2;j<=i/2;j++)
//       {
//             if(i%j==0)
//             {
//                   asal=0;
//                   break;
//             }
//       }
//       if(asal)
//       printf("%d ",i);
// }
// }
// int main(){
//       int N;
//       printf("N değerini giriniz:");
//       scanf("%d",&N);
//       asalMi(N);
// }
//*diger cozum
//int asal_mi(int s);
// void asal_sayisi(int N);
// int main() {
//     int N;
//     printf("N degerini giriniz:");
//     scanf("%d", &N);
//     asal_sayisi(N);
// }
// int asal_mi(int s) {
//     int sonuc = 1;
//     for (int i = 2; i <= s / 2; i++) {
//         if (s % i == 0) {
//             sonuc = 0;
//         } else
//             sonuc = 1;
//     }
//     return sonuc;
// }
// void asal_sayisi(int N) {
//     if (N < 2)
//         return 0;
//     for (int i = 1; i <= N; i++) {
//         int sonuc = asal_mi(i);
//         if (sonuc == 1) {
//             printf("%d  ", i);
//         }
//     }
// }

//!8.soru
// Bir tam sayının kaç basamaklı olduğunu döndüren fonksiyonu yazınız.
// int basamak(int sayi){
// int sayac=0;
// while(sayi>0)
// {
//       sayi=sayi/10;
//       sayac++;
// }
// return sayac;
// }
// int main(){
//       int sayi;
//       printf("bir sayi giriniz:");
//       scanf("%d",&sayi);
//       int basamaks=basamak(sayi);
//       printf("girdiğiniz sayi %d basamakalidir",basamaks);
// }

//!9.soru
// Verilen sayının faktöriyelini döndüren fonksiyonu yazınız.
// int faktöriyel(int sayi){
// int faktöriyel=1;
// for(int i=1;i<=sayi;i++)
// {
//       faktöriyel*=i;
// }
// return faktöriyel;
// }
// int main(){
//       int sayi;
//       printf("bir sayi giriniz:");
//       scanf("%d",&sayi);
//       printf("%d!=%d",sayi,faktöriyel(sayi));
// }

//!10.soru
// Girilen N değerine göre 1-N arasındaki tüm sayıların faktöriyelini bulan programı yazınız
//(faktöriyel fonksiyonunu kullanarak)
//void faktöriyel(int N){
//       for(int i=1;i<=N;i++)
//       {
//             int faktöriyel=1;
//             for(int j=1;j<=i;j++)
//             {
//                   faktöriyel *= j;   
//             }
//             printf("%d!=%d\n",i,faktöriyel);
//       }
// }
// int main(){
//       int N;
//       printf("N değerini giirniz:");
//       scanf("%d",&N);
//       faktöriyel(N);
// }
//*asil cozum
// int fakt(int sayi);
// void yazdir(int N);
// int main() {
//     int N;
//     printf("bir sayi giriniz:");
//     scanf("%d", &N);
//     yazdir(N);
// }
// int fakt(int sayi) {
//     int fakt = 1;
//     for (int i = 1; i <= sayi; i++) {
//         fakt *= i;
//     }
//     return fakt;
// }
// void yazdir(int N) {
//     for (int i = 1; i <= N; i++) {
//         printf("%d!:%d\n", i, fakt(i));
//     }
// }

//!11.soru
// Girilen sayının Güçlü Sayı olup olmadığını tanımladığınız faktöriyel fonksiyonunu kullanarak bulunuz.
//(Güçlü Sayı: basamak değerlerinin faktöriyellerinin toplamına eşit olan sayı. 145=1!+4!+5!)
// int faktöriyel(int sayi){
//       int fakt=1;
//       for(int i=1;i<=sayi;i++)
//       {
//             fakt*=i;
//       }
//       return fakt;
// }
// void güçlüMü(int sayi){
// int basamak=0,toplam=0,gecici=sayi;
// while(gecici>0)
// {
//   basamak=gecici%10;
//   toplam+=faktöriyel(basamak);
//   gecici/=10;
// }
// if(toplam==sayi)
// {
//       printf("%d  sayi güçlü sayidir",sayi);
// }
// else
// printf("%d  sayi güçlü sayi değildir",sayi);
// }
// int main(){
//       int sayi;
//       printf("bir sayi giriniz:");
//       scanf("%d",&sayi);
//       güçlüMü(sayi);
// }



