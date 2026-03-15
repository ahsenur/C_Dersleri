#include <stdio.h>
#include <stdlib.h>


//!1.soru
// İsminizi 5 defa yazdıran programın algoritması?
// int main(){
//       for(int i=0;i<5;i++)
//       {
//             printf("Ahsenur\n");
//       }
// }



//!2.soru
// Kullanıcıdan alınan ismi istendiği kadar ekrana yazdıran algoritma?
// int main(){
// int N;
// printf("isminizi kaç defa yazdirmak istiyorsunuz?");
// scanf("%d",&N);
// for(int i=0;i<N;i++)
// {
//       printf("Ahsenur\n");
// }
// }



//!3.soru
// 1’den 10’a kadar olan sayıları yazdırınız.
// int main(){
//       for (int i=1;i<=10;i++)
//       {
//             printf("%d\n",i);
//       }
// }


//!4.soru
// Verilen 2 sayı arasında kalan sayıları yazdırınız.
// int main(){
//       int s1,s2;
//       printf("1.sayiyi giriniz:");
//       scanf("%d",&s1);
//       printf("2.sayiyi giriniz:");
//       scanf("%d",&s2);
//       if(s1<s2){
//             for(int i=s1;i<=s2;i++)
//             {
//                   printf("%d\n",i);
//             }
//       }
//       else
//       {
//             for(int j=s2;j<=s1;j++)
//             {
//                   printf("%d\n",j);
//             }
//       }
// }



//!5.soru
// 1’den 10’a kadar olan sayıların toplamını bulunuz.
// int main(){
// int toplam=0;
// for(int i=1;i<=10;i++)
// {
//       toplam+=i;
// }
//    printf("1-10 arasi sayilarin toplami:%d",toplam);
// }



//!6.soru
// Girilen N değerine göre 0-N arası çift sayıların toplamını bulunuz.
// int main(){
//       int N,toplam=0;
//       printf("N değerini giriniz:");
//       scanf("%d",&N);
//       for(int i=0;i<=N;i++)
//       {
//             if(i%2==0)
//             {
//                   toplam+=i;
//             }
//       }
//       printf("0-N arasi çift sayilarin toplami:%d",toplam);
// }



//!7.soru
// Girilen N adet sayının ortalamasını bulan program?
// int main(){
//       int N,toplam=0,sayi;
//       float ortalama;
//       printf("N değerini giriniz:");
//       scanf("%d",&N);
//       printf("sayilari giriniz:\n");
//    for(int i=1;i<=N;i++)
//    {
//       scanf("%d",&sayi);
//       toplam += sayi;
//    }
//    ortalama=toplam/N;
//    printf("girdiğiniz N adet sayinin ortalamasi:%.2f",ortalama);
// }


//!8.soru
// Dört işlem: Kullanıcıdan 2 sayı alarak işlem seçtiren ve kullanıcı çıkış yapana kadar bu işlemi 
//devam ettiren algoritma(1.Toplama,2.Çıkarma, 3.Çarpma, 4.Bölme, 0.Çıkış)
// int main(){
//       int s1,s2,toplama,cikarma,carpma,secim,N;
//       float bolme;
//       printf("1.sayiyi giriniz:\n");
//       scanf("%d",&s1);
//       printf("2.sayiyi giriniz:\n");
//       scanf("%d",&s2);
//       printf("çikiş yapmak istediğiniz değeri seçiniz:\n");
//       scanf("%d",&N);
//       for(int i=0;i<N;i++)
//       {
//             printf("seçim giriniz:\n");
//             scanf("%d",&secim);
//             if(secim!= N){
//       switch(secim)
//       {
//          case 1:
//          toplama=s1+s2;
//            printf("toplama:%d\n",toplama);
//          break;
//          case 2:
//          cikarma=s1-s2;
//          printf("çikarma :%d\n",cikarma);
//          break;
//          case 3:
//          carpma=s1*s2;
//           printf("çarpma:%d\n",carpma);
//          break;
//          case 4:
//          bolme=s1/s2;
//       printf("bölme:%f\n",bolme);
//          break;
//          default:
//          printf("lütfen 1- 4 arasinda geçerli bir seçim giriniz!");
//       }
//       }
//       else{
//       printf("çikiş yapildi...");
//       break;
//       }
//       }
// }


//!9.soru
// Sayı tahmin oyunu: Programda tanımlanan bir sayıyı kullanıcıdan tahmin etmesini isteyen ve 
//tahmine göre sayının daha küçük veya büyük olduğunu yazıp tekrar tahmin isteyen program.
// int main(){
//       int gercek=4;
//       int tahmin;
//      while(1)
//       {
//             printf("bir sayi tahmin ediniz:");
//             scanf("%d",&tahmin);
//             if(tahmin<gercek)
//             {
//                   printf("tahmin ettiğiniz sayi gerçek sayidan küçüktür! tekrar tahmin ediniz");
//             }
//             else if(tahmin>gercek)
//             {
//                   printf("tahmin ettiğiniz sayi gerçek sayidan büyüktür!tekrar tahmin ediniz");
//             }
//             else{
//             printf("tebrikler!tahmininiz doğru!");
//             break;  
//               }
//       }
// }
