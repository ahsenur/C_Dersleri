#include <stdio.h>
#include <stdlib.h>
//!1.soru
// 0-10 arası sayıları bir diziye aktarıp diziyi yazdırınız.
// int main(){
//       int dizi[10];
//   for(int i=0;i<10;i++)
//   {
//       dizi[i]=i;
//   }
//   printf("dizi:\n");
//   for(int j=0;j<10;j++)
//   {
//       printf("%d  ",dizi[j]);
//   }
// }

//!2.soru
// 1-100 arası çift sayıları bir diziye aktarıp dizi elemanlarını yazdırınız.
// int main()
// {
//       int dizi[50];
//       int index=0;
//       for(int i=0;i<100;i++)
//       {
//             if(i%2==0){
//             dizi[index]=i;
//             index++;
//       }
//       }
//       printf("dizinin elemanlari:\n");
//       for(int j=0;j<index;j++)
//       {
//             printf("%d\n",dizi[j]);
//       }
// }

//!3.soru
// Girilen iki sayının ebobunu bulan algoritma
// int main(){
//       int s1,s2,s3;
//       printf("1. ve 2. sayilari giriniz:");
//       scanf("%d%d",&s1,&s2);
//    while(s1!=s2)
//    {
//       if(s1>s2)
//       s1=s1-s2;
//       else if(s2>s1)
//       s2=s2-s1;
//    }
//    printf("obeb:%d",s1);//burada s1 veya s2 yi yazdırabiliriz çünkü döngü sonunda ikiside eşit olur
// }

//!4.soru
//Girilen 5 sayıyı bir diziye aktardıktan sonra ayrı bir döngüde dizi elemanlarını yazdırıp toplamlarını hesaplayınız.
// int main(){
//       int dizi[5];
//       printf("dizinin elemanlarini giriniz:\n");
//       for(int i=0;i<5;i++)
//       {
//             scanf("%d",&dizi[i]);
//       }
//       printf("\ngirilen dizinin elemanlari:\n");
//       for(int j=0;j<5;j++)
//       {
//             printf("%d\n",dizi[j]);
//       }
// }

//!5.soru
// Kullanıcıdan alınan N adet sayıyı diziye aktardıktan sonra dizideki en büyük ve en küçük elemanı bulunuz.
// int main(){
// int N,enb,enk;
// printf("N değerini giriniz:");
// scanf("%d",&N);
// int dizi[N];
// printf("dizinin elemanlarini giriniz:\n");
// for(int i=0;i<N;i++)
// {
//       scanf("%d",&dizi[i]);
// }
// enb=dizi[0];
// enk=dizi[0];
// for(int j=0;j<N;j++)
// {
//    if(dizi[j]>enb)
//    {
//       enb=dizi[j];
//    }
//    if(dizi[j]<enk)
//    {
//       enk=dizi[j];
//    }
// }
//       printf("oluşturulan dizide en büyük eleman:%d\n",enb);
//       printf("oluşturulan dizide en küçük eleman:%d\n",enk);
// }

//!6.soru
// Bir tamsayı dizisini tersten yazdırınız.
// int main(){
//     int N;
//     printf("dizinin boyutunu giriniz:");
//     scanf("%d",&N);
//     int dizi[N],ters[N];
//     printf("dizinin elemanlarini giriniz:\n");
//     for(int i=0;i<N;i++)
//     {
//       scanf("%d",&dizi[i]);
//     }
//     printf("oluşturulan dizi:\n");
//     for(int j=0;j<N;j++)
//     {
//       printf("%d\n",dizi[j]);
//     }
//     for(int k=0;k<N;k++)
//     {
//       ters[k]=dizi[N-1-k];
//     }
//     printf("tersten yazdirlmiş dizinin elemanlari:\n");
//     for(int m=0;m<N;m++)
//     {
//       printf("%d\n",ters[m]);
//     }
// }
//?
// int main(){
//       int dizi[5]={10,20,30,40,50};
//       printf("tersten yazdirilmiş dizinin elemanlari:\n");
//       for(int i=4;i>=0;i--)
//       {
//             printf("%d\n",dizi[i]);//bu dizi tamamen ters çevrilmez,tersten yazdırır ama dizi elemanları değişmez.
//       }
// }

//!7.soru
//?geçici değişkenle sorunun çözümü,asil cozum
// int main(){
//       int sayilar[5]={5,7,3,2,8};
//       printf("dizinin orijinal hali:");
//       for(int i=0;i<5;i++)
//       {
//             printf("%d ",sayilar[i]);
//       }
//       for(int j=0;j<5/2;j++)
//       {
//             int gecici=sayilar[j];
//             sayilar[j]=sayilar[4-j];
//             sayilar[4-j]=gecici;
//       }
//       printf("tersten yazdirilan dizi:");
//       for(int i=0;i<5;i++)
//       {
//             printf("%d ",sayilar[i]);
//       }
// }

//!8.soru
// Bir dizinin elemanlarını başka bir diziye kopyalayıp yeni diziyi yazdırınız.
// int main(){
//       int N;
//       printf("dizinin boyutunu giriniz:");
//       scanf("%d",&N);
//       int dizi[N],kopya[N];
//       printf("dizinin elemanlarini giriniz:\n");
//       for(int i=0;i<N;i++)
//       {
//             scanf("%d\n",&dizi[i]);
//       }
//       printf("oluşturulan dizi:\n");
//       for(int j=0;j<N;j++)
//       {
//             printf("%d\n",dizi[j]);
//       }
//       for(int k=0;k<N;k++)
//       {
//             kopya[k]=dizi[k];
//       }
//       printf("olutşrulan kopya dizi:\n");
//       for(int m=0;m<N;m++)
//       {
//             printf("%d\n",kopya[m]);
//       }
// }

//!9.soru
// Fibonacci serisini dizi kullanarak oluşturunuz.
// int main(){
//       int N;
//       printf("dizinin boyutunu giriniz:");
//       scanf("%d",&N);
//       int fib[N];
//       fib[0]=0;
//       fib[1]=1;
//       fib[2]=1;
//       printf("fibonacci dizisinin terimleri:\n");
//       for(int i=3;i<N;i++)
//       {
//             fib[i]=fib[i-1]+fib[i-2];
//       }
//       printf("oluşturulan fibonacci dizsinin terimleri:\n");
//       for(int j=0;j<N;j++)
//       {
//             printf("%d ",fib[j]);
//       }
// }

//!10.soru
// 10 kişilik bir sınıfta öğrencilerin bir dersten aldığı notlar klavyeden girilecektir. Notlar girildikten 
//sonra, sınıfın ortalamasını, sınıftaki en yüksek ve en düşük notu bulan programı yazınız.
// int main(){
//       int notlar[10],eny,end,toplam=0;
//       float ort;
//       printf("\nöğrencilerin notlarini giriniz:\n");
//       for(int i=0;i<10;i++)
//       {
//             scanf("%d",&notlar[i]);
//       }
//       eny=notlar[0];
//       end=notlar[0];
//       for(int j=0;j<10;j++)
//       {
//             if(notlar[j]>eny)
//             eny=notlar[j];
//             if(notlar[j]<end)
//             end=notlar[j];
//             toplam+=notlar[j];
//       }
//       ort=toplam/10;
//       printf("en yüksek not:%d\n",eny);
//       printf("en düşük not:%d\n",end);
//       printf("tüm sinifin ortalamsi:%.2f",ort);
// }
