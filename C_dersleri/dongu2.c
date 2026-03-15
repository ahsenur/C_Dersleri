#include <stdio.h>
#include <stdlib.h>


//!1.soru
// Verilen bir sayının tam bölenlerini bulan algoritma
// int main(){
//       int sayi;
//       printf("bir sayi giriniz:");
//       scanf("%d",&sayi);
//       printf("girdiğiniz sayinin tam bölenleri:\n");
//       for(int i=1;i<=sayi;i++)
//       {
//             if(sayi%i==0)
//             {
//                   printf("%d\n",i);
//             }
//       }
// }

//!2.soru
// Klavyeden girilen a ve b sayılarına göre a^b hesaplayınız(pow gibi hazır fonksiyonlar kullanmadan)
// int main(){
// int a,b,sonuc=1;
// printf("a değerini giriniz:");
// scanf("%d",&a);
// printf("b değerini giriniz:");
// scanf("%d",&b);
// for(int i=1;i<=b;i++)
// {
//      sonuc*=a;
// }
// printf("%d üzeri %d : %d",a,b,sonuc);
// }

//!3.soru
// Bölme işlemini bölme ve çarpma operatörü kullanmadan hesaplayan programı yazınız.
// int main(){
//     int bolunen,bolen,fark,bolum=0;
//     printf("bolunen sayiyi giriniz:");
//     scanf("%d",&bolunen);
//     fark=bolunen;
//     printf("bolen sayiyi giriniz:");
//     scanf("%d",&bolen);
//     while(fark>=bolen){
//         fark-=bolen;
//         bolum++;
//     }
//     printf("%d sayiisinin %d sayisi ile bolumu:%d",bolunen,bolen,bolum);
// }

//!4.soru
// Girilen bir sayının basamak değerlerini yazdırınız
//?bu soruya dön
// int main(){
// int sayi,basamak;
// printf("bir sayi giriniz:");
// scanf("%d",&sayi);
// while(sayi>0)
// {
//   basamak=sayi%10;
//    printf("%d\n",basamak);
//    sayi/=10;
// }
// }

//!5.soru
// Girilen sayıyı tersten yazdıran(tamsayı olarak) program(245 => 542).
// int main(){
// int sayi,tersten=0;
// printf("bir sayi giriniz:");
// scanf("%d",&sayi);
// while(sayi>0)
// {
// tersten=tersten*10+(sayi%10); 
// //?burada sayiyi tam sayi cinsinden tutmayi gösteriyor. diğer türlü sayi string olarak ekrana yazdirilir  
// sayi/=10;
// }
// printf("girdiğiniz sayinin tamsayi cinsinden tersten hali:%d",tersten);
// }

//!6.soru
// Palindrom sayı kontrolü(Ör:242 palindromdur, tersten yazılışı kendisine eşittir)
// int main(){
//  int sayi,tersten=0,orijinaL;
//  printf("bir sayi giriniz:");
//  scanf("%d",&sayi);
//  orijinaL=sayi;//?burada orijinaal diye tanımlamamızın sebebi döngüde sayi değişkeni her defasında küçülüyor. 
//?bu yüzden ayri bir değişken tutmaliyiz,ilk başta girilen sayinin küçülmeyen halini tutan
//  while(sayi>0){
//  tersten=tersten*10+(sayi%10);
//  sayi/=10;
//  }
//  int ters=tersten;
//  if(orijinaL==ters)
//  printf("girdiğiniz sayi palindromdur");
//  else
//  printf("girdiğiniz sayi palindrom değildir");
// }

//!7.soru
// Girilen sayının faktöriyelini hesaplayan program?
// int main(){
//   int faktöriyel=1,sayi;
//   printf("bir sayi giriniz:");
//   scanf("%d",&sayi);
//   for(int i=1;i<=sayi;i++)
//   {
// faktöriyel*=i;
//   }
//   printf("%d!=%d",sayi,faktöriyel);
// }

//!8.soru
// Girilen n değerine göre Fibonacci serisinin ( 0 1 1 2 3 5 8 … ) ilk n terimini hesaplayınız?
// int main(){
//   int N,c,a=0,b=1;
//   printf("N değerini giriniz:");
//   scanf("%d",&N);
//   printf(" %d %d ",a,b);
//   for(int i=3;i<=N;i++)
//   {
//     c=a+b;
//     a=b;
//     b=c;
//     printf("%d ",c);
//   }
// }

//!9.soru
// Girilen n adet sayı içerisinden pozitif, negatif ve sıfır sayısının kaçar adet tekrarlandığını bulunuz.
// int main(){
//   int N,i,pozitif=0,negatif=0,sifir=0,sayi;
//   printf("N adet sayi giriniz:");
//   scanf("%d",&N);
//   for(i=0;i<N;i++)
//   {
//     scanf("%d",&sayi);
//   if(sayi>0)
//   pozitif++;
//   else if(sayi<0)
//   negatif++;
//   else
//   sifir++;
//   }
//   printf("girmiş olduğunuz N adet sayinin içinde %d kadar negatif var\n",negatif);
//   printf("girmiş olduğunuz N adet sayinin içinde %d kadar pozitif var\n",pozitif);
//   printf("girmiş olduğunuz N adet sayinin içinde %d kadar sifir var\n",sifir);
// }

//!10.soru
// Girilen bir sayının Asal Sayı olup olmadığını bulunuz.
// int main(){
//   int sayi,asal=1;
//   printf("bir sayi giriniz:");
//   scanf("%d",&sayi);
// for(int i=2;i<=sayi/2;i++)
// {
//   if(sayi%i==0){
//   asal=0;
//   break;
//}
// }
// if(asal)
// printf("girdiğiniz sayi asaldir");
// else
// printf("girdiğiniz sayi asal değildir");
// }