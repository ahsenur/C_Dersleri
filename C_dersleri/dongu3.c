
#include <stdio.h>
#include <stdlib.h>
//!1.soru
// Girilen sayının Mükemmel Sayı(tam bölenleri toplamı kendisine eşit olan) olup olmadığını bulunuz.
//(örnek: 6, 28, 496, …)
// int main(){
//       int sayi,toplam=0;
//       printf("bir sayi giriniz:");
//       scanf("%d",&sayi);
//       for(int i=1;i<sayi;i++)
//       {
//             if(sayi%i==0)
//                toplam+=i;
//       }
//       if(toplam==sayi)
//       {
//             printf("girdiğiniz sayi mükemmel sayidir");
//       }
//       else
//       printf("girdiğiniz sayi mükemmel sayi değildir");
// }

//!2.soru
// Girilen sayının Pronic (ardışık iki sayının çarpımına eşit) olup olmadığını bulunuz. (pronic sayılar:
// 2 (1x2), 6(2x3), 12(3x4), 20(4x5), …, 132(11x12), 156(12x13), ..)
// int main(){
//       int sayi,pronic=0;
//       printf("bir sayi giriniz:");
//       scanf("%d",&sayi);
//       for(int i=1;i<=sayi;i++)
//       {
//             if(sayi == i * (i+1)){
//             pronic=1;
//             break;}
//       }
//      if(pronic)
//      printf("girdiğiniz sayi pronictir");
//      else
//      printf("girdiğiniz sayi pronic değildir");
// }

//!3.soru
// Girilen sayının Harshad (sayının kendisi rakamları toplamına tam bölünen) 
//olup olmadığını bulunuz.(harshad sayılar:1-9, 10, 12, 18, 20, .., 150, 153, …)
// int main(){
//       int sayi,basamak,toplam=0,orijinal;
//       printf("bir sayi giriniz:");
//       scanf("%d",&sayi);
//       orijinal=sayi;
//      while(sayi>0)
//      {
//        basamak=sayi%10;
//        toplam+=basamak;
//        sayi/=10;
//      }
//      if(orijinal%toplam==0)
//      printf("girdiğiniz sayi harshad sayidir");
//      else
//      printf("girdiğiniz sayi harshad sayi değildir");
// }

//!4.soru
// Girilen sayının Jumbled (komşu rakamlar arasındaki fark maksimum 1) olup olmadığını bulunuz
//(jumbled sayılar:12, 45, 656, 3432,... )
// int main(){
//       int sayi,kontrol=0,b1,b2,orijinal;
//       printf("bir sayi giriniz:");
//       scanf("%d",&sayi);
//       orijinal=sayi;
//       while(sayi>0)
//       {
//             b1=sayi%10;
//             sayi/=10;
//             b2=sayi%10;
//             if(b1-b2>1 || b1-b2<-1){
//                   kontrol;
//                   break;
//             }
//       }
//       if(kontrol)
//       printf("girdiğiniz sayi jumbled sayi değildir");
//       else
//       printf("girdiğiniz sayi jumbled sayidir");
// }

//!5.soru
//?dön
//İkilik tabanda verilen bir sayıyı onluk tabana çeviren algoritmayı yazınız.
// int main(){
// int ikilik,onluk=0,taban=1,basamak;
// printf("ikilik tabanda bir sayi giriniz:");
// scanf("%d",&ikilik);
// while(ikilik>0)
// {
//       basamak=ikilik%10;
//       onluk=onluk+basamak*taban;
//       ikilik=ikilik/10;
//       taban=taban*2;
// }
// printf("onluk tabandaki sayi:%d",onluk);
// }

//!6.soru
// //?dön
// Onluk tabanda verilen bir sayıyı ikilik tabana çeviren algoritmayı yazınız.
// int main(){
//       int onluk,ikilik[32],i=0;//int olduğu için 32 bit
//       printf("onluk tabaninda bir sayi giriniz:");
//       scanf("%d",&onluk);
// while(onluk>0)
// {
//   ikilik[i]=onluk%2;
//   onluk=onluk/2;
//   i++;
// }
// while(i>0)
// {
//       i--;
//       printf("%d",ikilik[i]);
// }
// }

//!7.soru
// Girilen N değerine göre 1-N arasındaki tüm sayıların faktöriyelini bulan programı yazınız.
//(Ekran çıktısı: 1!=1, 2!=2, 3!=6…)
// int main(){
//       int N;
//       printf("N değerini giriniz:");
//       scanf("%d",&N);   
//       for(int i=1;i<=N;i++)
//       {
//             int faktöriyel=1;
//             for(int j=1;j<=i;j++)
//             {
//                   faktöriyel*=j;
//             }
//             printf("%d! = %d\n",i,faktöriyel);
//       }
// }

//!8.soru
// Girilen N değerine göre 1-N arasındaki tüm Asal sayıları yazdırınız.
// int main(){
//       int N;
//       printf("N değerini giriniz:");
//       scanf("%d",&N);
//       for(int i=2;i<N;i++)
//       {
//       int asal=1;
//           for(int j=2;j<=i/2;j++)
//           {
//             if(i%j==0) 
//             {
//             asal=0;
//             break;
//             }
//           }  
//           if(asal)
//             printf("%d\n",i);
//       }
// }

// //!9.soru
// Girilen N değerine göre ilk N adet Asal sayıyı yazdırınız.(N=5 için => 2,3,5,7,11)
// int main(){
//       int N,sayac=0,sayi=2;
//       printf("N değerini giriniz:");
//       scanf("%d",&N);
//       while (sayac < N)
//       {
//             int asal=0;
//             for(int i=2;i<=sayi/2;i++)
//             {
//                   if(sayi%i==0){ 
//                   asal=1;
//                   break;
//             }    
//             }
//             if(asal==0){
//                   printf("%d\n",sayi);
//                    sayac++;
//             }
//             sayi++;
//       }
// }
//?sorunun for döngüsü ile yazimi
// int main(){
// int N;
//     printf("N degerini giriniz:");
//     scanf("%d",&N);
//     int sayac=0,sayi=2;
//     for (int i=sayi;sayac<N;i++) {
//         int asal_control=0;
//         for (int j=2;j<=sayi/2;j++) {
//             if (sayi%j==0) {
//                 asal_control=1;
//                 break;
//             }
//         }
//         if (asal_control==0) {
//             printf("%d\n",sayi);
//             sayac++;
//         }
//        sayi++;
//     }
// }
//?sorunun fonksiyonla cozumu
// int asal(int n);
// int main() {
//     int N;
//     printf("kac adet asal bulmak istiyorsunuz?");
//     scanf("%d", &N);
//     int sayac = 0;
//     int sayi = 2;
//     while (sayac < N) {
//         if (asal(sayi)) {
//             printf("%d\n", sayi);
//             sayac++;
//         }
//         sayi++;
//     }
// }
// int asal(int n) {
//     if (n % 2 == 0 && n!=2) {
//         return 0;
//     }
//     if (n < 1)
//         return 0;
//     if (n == 2)
//         return 1;
//     for (int i = 2; i < n / 2; i++) {
//         if (n % i == 0) {
//             return 0;
//         }
//     }
//     return 1;
// }


//!10.soru
// Girilen N değerine göre 1-N arasındaki tüm Mükemmel sayıları
//(tam bölenleri toplamı kendisine eşit olan) yazdırınız.
// int main(){
//       int N,sayi=1,sayac=1;
//       printf("N değerini giriniz:");
//       scanf("%d",&N);
//       for(int sayi=1;sayi<N;sayi++)
//       {
//             int toplam=0;
//             for(int i=1;i<sayi;i++)
//             {
//                   if(sayi%i==0)
//                   toplam+=i;
//             }    
//                   if(toplam==sayi)
//                   printf("%d\n",sayi);
//       }
// }
