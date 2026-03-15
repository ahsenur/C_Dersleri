#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//!1.soru
// int main() {
    //1'den 100'e kadar olan sayların kplerini toplayan algoritmayi yaziniz
//     int toplam=0,sayi=1;
//     int kup=1;
//     for (int i=0;i<5;i++) {
//        kup=sayi*sayi*sayi;
//         sayi++;
//         toplam+=kup;
//     }
//     printf("1'den 100'e kadar sayilarin kuplerinin toplami:%d",toplam);
// }


//!2.soru
// int main() {
//dogum tarihi girilen kisinin yasini hesaplayan program
// int dy,da,dg;
//     int yas;
//     printf("dogum tarihinizi yıl ,ay,gun seklinde giriniz:");
//     scanf("%d%d%d",&dy,&da,&dg);
//     int by,ba,bg;
//     printf("bugunun tarihini yıl ay gun seklinde giriniz:");
//     scanf("%d%d%d",&by,&ba,&bg);
//    yas=by-dy;
//     printf("yasiniz:%d",yas);
// }


//!3.soru
// int main() {
//girilen sayinin istenen sayiya göre mod işlemi
//     int sayi,mod=0,istenen;
//     printf("bir sayi giriniz:");
//     scanf("%d",&sayi);
//     printf("md almak istediginiz sayiyi giriniz:");
//     scanf("%d",&istenen);
//     mod=sayi%istenen;
//     printf("girdiginiz sayinin istenile sayiya gore modu:%d",mod);
// }


//!4.soru
//girilen 3 basamakli sayinin basamaklarinin küplerinin toplaminin kendisine eşit olup olmadigini
//bulan programı yaziniz
// int main() {
// int sayi,sayac=0,basamak=0,toplam=0,tut;
//     printf("3 basamakli bir sayi giriniz:");
//     scanf("%d",&tut);
//     sayi=tut;
//     while (sayi>0) {
//         sayi/=10;
//         sayac++;
//     }
//     if (sayac!=3) {
//         printf("lutfen 3 basamakli bir sayi giriiniz");
//         return 0;
//     }
//     sayi=tut;
//     while (sayi>0) {
//         basamak=sayi%10;
//         toplam=toplam + (basamak*basamak*basamak);
//         sayi/=10;
//     }
//     if (toplam==tut)
//     printf("girdiginiz sayinin basamaklarinin kupleri toplami sayiya esittir");
//     else
//         printf("girdiginiz sayinin basamaklarinin kupleri toplami sayiya esit degildir");
// }


//!5.soru
//klavyeden girilen 20 tane sayinin cift olanlarinin 
//toplaminin tek olanlarinin toplamina oranini bulan program
// int main(){
//     printf("20 tane sayi giriniz:");
//     int tekToplam=0,ciftToplam=0,sayi;
//     float oran;
//     for(int i=0;i<20;i++)
//     {
//         scanf("%d",&sayi);
//         if(sayi%2==0)
//         ciftToplam+=sayi;
//         else
//         tekToplam+=sayi;
//     }
//     oran=ciftToplam/tekToplam;
//     printf("girdiginiz 20 adet sayida ciftlerin toplaminin teklerin toplamina orani:%.2f",oran);
// }



//!6.soru
//10 ile 1000 arasindaki tam kare sailari ekrana yazdıran programı yazdırınız
// int main(){
//     int sayi;
//     printf("10 ile 1000 arasindaki tam kare sayilar:");
//     for(int i=1;i<1000;i++)
//     {
//         sayi=i*i;
//         if(sayi>10 && sayi<1000)
//         {
//             printf("%d\n",sayi);
//         }
//     }
// }



//!7.soru
//klavyeden girilen 25 adet sayinin negatif olanlarinin toplamini,cift sayilarin carpimini,
//7'ye esit olanlarin adetini bulup ekrana yazdiran programı ekrana yazdiriniz
// int main(){
//     int negatifToplam=0,adet=0;
//     long ciftCarpim=1;
//     int sayi;
//     printf("25 adet sayi giriniz:");
//     for(int i=0;i<25;i++)
//     {
//         scanf("%d",&sayi);
//         if(sayi%2==0)
//         ciftCarpim*=sayi;
//         if(sayi<0)
//         negatifToplam+=sayi;
//         if(sayi==7)
//        adet++;
//     }
//     printf("girdiginiz 25 adet sayida cift sayilarin carpimi:%lf\n",ciftCarpim);
//     printf("girdiginiz 25 adet sayida negatif olanlarin toplami:%d\n",negatifToplam);
//     printf("girdiginiz 25 adet sayida 7 ye esit olanlarin adedi:%d\n",adet);
// }



//!8.soru
//carpim tablosunun yazan programi yaziniz
// int main(){
// int carpim=1;
// for(int i=0;i<=10;i++)
// {
//     for(int j=0;j<=10;j++)
//     {
//         carpim=i*j;
//         printf("%d x %d= %d\n",i,j,carpim);
//     }
// }
// }


//!9.soru
//x ve y pozitif sayilar olmak uzere eger x sayisinin carpanlari toplami y sayisina ve ayni zamanda 
//y sayisinin carpanlari toplami x sayisina esitse bu sayilar dost sayilardir.buna gore girilen iki 
//sayinin dost sayi olup olmadigini bulan algoritma
// int main(){
//     int x,y,toplamx=0,toplamy=0;
//     printf("x ve y sayisini giriniz:");
//     scanf("%d%d",&x,&y);
//     if(x<0 || y<0)
//     printf("lutfen pozitif sayilar giriniz!");
//     for(int i=1;i<x;i++)
//     {
//         if(x%i==0)
//         toplamx+=i;
//     }
//     for(int j=1;j<y;j++)
//     {
//         if(y%j==0)
//         toplamy+=j;
//     }
//     if(toplamx==y && toplamy==x)
//     printf("girdiginiz sayilar dost sayilardir");
//     else
//     printf("girdiginiz sayilar dost sayilar degildir");
// }




//!10.soru
//1'den 63'e kadar olan sayilar arasinda istenilen sayiyi maksimum 6 seferde bulan programi yaziniz
// int main(){
//     int istenen,dusuk,yuksek;
//     int dizi[63];
//     printf("1'den 63' e kadar olan sayilar:");
//     for(int i=1;i<=63;i++)
//     {
//         printf("%d\n",i);
//     }
//     printf("istenen sayiyi giriniz:");
//     scanf("%d",&istenen);
//     if(istenen<1 || istenen>63)
//     printf("lütfen 1 - 63 arasinda bir sayi giriniz!");
//  while(dusuk<=yuksek)
//  {
//     int orta=(dusuk+yuksek)/2;
//  }
    
// }



//!11.soru
// Algoritma Örnekleri 23 :  Katsayı değerleri girilen birinci dereceden denklemin kökünü 
// hesaplayan algoritma ve akış şeması
// int main(){
//     int k1;
//     printf("birinci katsayi degerini griniiz:");
//     scanf("%d",&k1);
//     int k2;
//     printf("ikinci katsayi degerini griniiz:");
//     scanf("%d",&k2);
//     float kok;
//     kok=(float)(-k2)/(k1);//?bu kisim önemli  cunku  ilk basta int degerlin bolumunu floata cevirmemiz gerekiyor
//     printf("olusturdugunuz birinci derden denklemin koku:%.2f",kok);
// }


//!12.soru
//  A≠0 olmak üzere katsayıları girilen ikinci dereceden (ax² + bx + 
// c = 0) denklemin köklerini hesaplayan algoritmanın akış şeması 
// int main(){
//     int a,b,c;
//     printf("a,b ve c degerlerini giriniz:");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a==0){
//     printf("lütfen 0'dan farkli bir deger giriniz!");
//     return 1;
//     }
//     int delta;
//     float kok1,kok2;
//     delta=(b*b)-(4*a*c);
//     if(delta>0)
//     {
//         printf("2 tane gerçek kokunuz vardir\n");
//         kok1=(float)((-b)+((delta)^(1/2)))/(2*a);
//         kok2=(float)((-b)-((delta)^(1/2)))/(2*a);
//         printf("1.kokunuz:%.2f\n",kok1);
//         printf("2.kokunuz:%.2f\n",kok2);
//     }
//     else if (delta==0)
//     {
//         printf("2 tnae cakisik gerçel kokunuz bulunmaktadir");
//         kok1=(float)(-b)/(2*a);
//     }
//     else
//     printf("gercel kokunuz bulunmamaktadir");
// }





//!13.soru
// leetcode.two numbers sorusu
// int main() {
//     int dizi[] = {10, 20, 30, 40, 50, 60, 70, 80};
//     int hedef_toplam;
//     printf("hedef toplam degerini giriniz:");
//     scanf("%d", &hedef_toplam);
//     int dizi_boyutu;
//     int cozum_bulundu = 0;
//     dizi_boyutu = sizeof(dizi) / sizeof(dizi[0]);
//     for (int i = 0; i < dizi_boyutu; i++) {
//         for (int j = i + 1; j < dizi_boyutu; j++) {
//             if (dizi[j] + dizi[i] == hedef_toplam) {
//                 printf("%d %d\n", i, j);
//                 cozum_bulundu = 1;
//             }
//         }
//     }
//     if (cozum_bulundu == 0) {
//         printf("hedef toplama ulasilamadi");
//     }
// }


//!14.soru
