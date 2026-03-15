#include <stdio.h>
#include <stdlib.h>

//!1.soru
//Girilen 2 sayıyı sadece pointer değişkenler kullanarak toplayınız.(malloc ile)
// int main() {
//     int *s1 = (int*)malloc(sizeof(int));
//     int *s2=(int*)malloc(sizeof(int));
//     int *toplam=(int*)malloc(sizeof(int));
//     printf("1.sayiyi giriniz:");
//     scanf("%d",s1);
//     printf("2.sayiyi giriniz:");
//     scanf("%d",s2);
//     *toplam=*s1+*s2;
//     printf("iki sayinin toplami:%d",*toplam);;
// }

//!2.soru
// Girilen A ve B sayılarını yer değiştiren fonksiyonu yazınız.
//(Sayı alma ve sonuçları yazdırma işlemleri “main” içinde
// yapılacaktır.)
// int degistir(int *a,int *b);
// int main() {
// int a,b;
//     printf("a degerini giriniz:");
//     scanf("%d",&a);
//     printf("b nin degerini giriniz:");
//     scanf("%d",&b);
//     degistir(&a,&b);
//     printf("\na nin yeni degeri:%d",a);
//     printf("\nb nin yeni degeri:%d",b);
// }
// int degistir(int *a,int *b) {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }

//!3.soru
// Verilen 2 sayıdan büyük olan sayı küçük sayıya bölünerek bölüm ve kalanı bulan fonksiyonu yazınız.
//  (Sayıları alma ve bölüm/kalan sonuçları yazdırma işlemleri “main” içinde yapılacaktır.)
// void bolmeYap(int a, int b, int *kalan, int *bolum);
// int main() {
//     int a, b;
//     int bolum, kalan;
//     printf("1.sayiyi giriniz:");
//     scanf("%d", &a);
//     printf("2.sayiyi giriniz:");
//     scanf("%d", &b);
//     bolmeYap(a, b, &kalan, &bolum);
//     printf("bolum:%d\n", bolum);
//     printf("kalan:%d\n", kalan);
// }
// void bolmeYap(int a, int b, int *kalan, int *bolum) {
//     if (b == 0) {
//         printf("bolme yapilamaz");
//     }
//     if (a > b) {
//         *bolum = a / b;
//         *kalan = a % b;
//     } else {
//         *bolum = b / a;
//         *kalan = b % a;
//     }
// }

//!4.soru
// Girilen sayının faktöriyelini bulan fonksiyon yazınız.
// Fonksiyonda return kullanılmayacak ve faktöriyel sonucu main de yazdırılacaktır.
// void fakt(int a,int *sonuc);
// int main() {
//     int a;
//     printf("faktoriyelini almak istediginiz sayiyiyi giriniz:");
//     scanf("%d",&a);
//     int sonuc;
//     fakt(a,&sonuc);
//     printf("%d!=>%d",a,sonuc);
// }
// void fakt(int a,int *sonuc){
//     int result=1;
//     for (int i=1;i<=a;i++) {
//        result*=i;
//     }
//     *sonuc=result;
// }

//!4.soru
// Parametre olarak verilen 3 sayıdan en büyük ve en küçüğünü bulan fonksiyonu yazınız.
// En büyük ve en küçük sayıları main içinde yazdırınız.
// int bul(int a,int b,int c,int *enb,int *enk);
// int main() {
//     int a,b,c,enb,enk;
//     printf("a, b ve c sayilarini griiniz:");
//     scanf("%d%d%d",&a,&b,&c);
//     bul(a,b,c,&enb,&enk);
//     printf("girdiginiz 3 adet sayida en buyuk sayi:%d\n",enb);
//     printf("girdiginiz 3 adet sayida en kucuk sayi:%d\n",enk);
// }
// int bul(int a,int b,int c,int *enb,int *enk) {
//     if (a>b && a>c)
//         *enb=a;
//     else if (b>a && b>c)
//         *enb=b;
//     else
//         *enb=c;
//      if (a<b && a<c)
//         *enk=a;
//     else if (b<a && b<c)
//         *enk=b;
//     else
//         *enk=c;
// }

//!5.soru
// Parametre olarak verilen 2 sayının toplamını ve farkını bulan bir fonksiyon yazılacaktır.
// Sayılar main metodunda kullanıcıdan alınarak fonksiyona gönderilecektir, toplam ve fark sonuçları 
//da main metodunda
// yazılacaktır.
// void bul(int a,int b,int *toplam,int *fark);
// int main() {
//     int a,b;
//     printf("a ve b sayilarini giriniz:");
//     scanf("%d%d",&a,&b);
//     int toplam,fark;
//     bul(a,b,&toplam,&fark);
//     printf("girdiginiz  sayinin toplami:%d\n",toplam);
//     printf("girdiginiz 2 sayinin farki:%d\n",fark);
// }
// void bul(int a,int b,int *toplam,int *fark) {
//     *toplam=a+b;
//     *fark=a-b;
// }

//?pointer mantığını anlamak için güzel bir soru
// int main() {
//     char s[] = "elma";
//     char *p = s;
//     while(*p) {
//         (*p)++; // Harfi değiştir
//         printf("%c\n", *p);
//         p++;    // İlerle
//     }
//     printf("%s\n", s);
// }






