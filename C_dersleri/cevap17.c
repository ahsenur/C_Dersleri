#include <stdio.h>
#include <stdlib.h>
// Not: uygulamalarda global değişken kullanılmayacaktır, gerekli yerde pointer kullanılmalıdır.


// Girilen sayının faktöriyelini bulan fonksiyon yazınız. Fonksiyonda return kullanılmayacak ve faktöriyel sonucu main de yazdırılacaktır.
// Parametre olarak verilen 3 sayıdan en büyük ve en küçüğünü bulan fonksiyonu yazınız. En büyük ve en küçük sayıları main içinde yazdırınız.
// Parametre olarak verilen 2 sayının toplamını ve farkını bulan bir fonksiyon yazılacaktır. Sayılar main metodunda kullanıcıdan alınarak fonksiyona gönderilecektir, toplam ve fark sonuçları da main metodunda yazılacaktır.


//!1.soru
// Girilen 2 sayıyı sadece pointer değişkenler kullanarak toplayınız.(malloc ile)
// int main(){
//   int s1,s2;
//   printf("1.sayiyi giriniz:");
//   scanf("%d",&s1);
//   printf("2.sayiyi giriniz:");
//   scanf("%d",&s2);
//   int *a=&s1;
//   int *b=&s2;
//   printf("2 sayinin toplami:%d",(*a)+(*b));
// }


//!2.soru
// Girilen A ve B sayılarını yer değiştiren fonksiyonu yazınız.(Sayı alma ve sonuçları yazdırma işlemleri 
//“main” içinde yapılacaktır.)
// int main(){
// int A,B;
// printf("A sayisini giriniz::");
// scanf("%d",&A);
// printf("B sayisini giriniz:");
// scanf("%d",&B);
// int *a=&A;
// int *b=&B;
// int gecici=*a;
// *a=*b;
// *b=gecici;
// printf("\nyeni A:%d",*a);
// printf("\nyeni B:%d",*b);
// }



//!3.soru
// Verilen 2 sayıdan büyük olan sayı küçük sayıya bölünerek bölüm ve kalanı bulan fonksiyonu yazınız.
// (Sayıları alma ve bölüm/kalan sonuçları yazdırma işlemleri “main” içinde yapılacaktır.)
int bol(int s1,int s2);
int main(){
int s1,s2;
printf("1.sayiyi giriniz:");
scanf("%d",&s1);
printf("2.sayiyi giriniz:");
scanf("%d",&s2);
int *a=s1;
int *b=s2;
if(s1>s2)
{
    
}
}
int bol(int s1,int s2){
    
}