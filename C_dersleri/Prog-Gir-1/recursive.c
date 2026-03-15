#include <stdio.h>
#include <stdlib.h>

//!1.soru
// 1-N arası sayıları özyinelemeli olarak yazdıran fonksiyonu yazınız.
// int arasi(int a){
//     if(a==0)
//     return 1;
//     arasi(a-1);
//     printf ("%d\n",a);
// }
// int main(){
//     int N;
//     printf("N degerini giiriniz:");
//     scanf("%d",&N);
//     arasi(N);
// }

//!2.soru
//?1.yöntem
// N-1 arası sayıları tersten özyinelemeli olarak yazdıran fonksiyonu yazınız.
// int yazdir(int N){
//     if (N>1)
//     {
//         return yazdir(N-1) ;
//     }
//     else
//     return 1;
// }
// int sayiyazidr(int N){
//     if(N==0)
//     return 1;
//     printf("%d\n",N);
//     sayiyazidr(N-1);
// }
// int main(){
//     int N;
//     printf("N degerini giriini:");
//     scanf("%d",&N);
//     yazdir(N);
//     sayiyazidr(N);
// }
//?2.yöntem
// int yazdir(int N){
//     if(N==0)
//     return 1;
//     printf("%d",N);
//     yazdir(N-1);
// }
// int main(){
//     int N;
//     printf("N degeri giriniz:");
//     scanf("%d",&N);
//     yazdir(N);
// }

//!3.soru
// Girilen kelimedeki karakterleri özyinelemeli fonksiyon ile yazdırınız.
// void yazdir(char kelime[],int i){
// if(kelime[i]=='\0')
//  return ;
// printf("%c\n", kelime[i]);
// yazdir(kelime,i+1);
// }
// int main(){
//     int N;
//     printf("kelimenin karakter uzunlugunu giriniz:");
//     scanf("%d",&N);
//     while (getchar() != '\n' && getchar() != EOF);
//     char kelime[N];
//     printf("bir kelime giriniz:");
//     fgets(kelime,N,stdin);
//     printf("girdiginiz kelime:");
//     puts(kelime);
//     printf("girdiginiz kelimenin karakterleri:\n");
//     yazdir(kelime,0);
// }

//!4.soru
// Girilen sayının faktöriyelini özyinelemeli fonksiyon ile bulunuz.
// int fakt(int a){
//     if(a==1)
//     return 1;
//     return a* fakt(a-1);
// }
// int main(){
//     int a;
//     printf("faktoriyelinin alinmasinim istediginiz sayiiyi giriniz:");
//     scanf("%d",&a);
//     int faktoriyel=fakt(a);
//     printf("%d!=%d",a,faktoriyel);
// }

//!5.soru
// Fibonacci serisinin n.elemanını özyinelemeli olarak bulunuz.
// int fib(int a){
//     if(a==0)
//     return 0;
//     if(a==1)
//     return 1;
//     return fib(a-1)+fib(a-2);
// }
// int main(){
//     int N;
//     printf("N degerini giriniz:");
//     scanf("%d",&N);
//     printf("%d",fib(N));
//     //bu kisim ilk n elemani yazdirmak için 
//     // for(int i=0;i<N;i++)
//     // {
//     //     printf("%d  ",fib(i));
//     // }
// }

//!6.soru
// 1-N arası sayıların toplamını özyinelemeli olarak bulunuz.
// int toplam(int N){
//     if(N==0)
//     return 0;
//     return N+toplam(N-1);
// }
// int main(){
//     int N;
//     printf("N degerini giriniz:");
//     scanf("%d",&N);
//     int t=toplam(N);
//     printf("1-N arasi sayilarin toplami:%d",t);
// }

//!7.soru
// Girilen 2 sayının en büyük ortak bölenini(EBOB) özyinelemeli olarak bulunuz.
// int ebob(int a,int b){
//     if(a<0)
//     a=-a;
//     if(b<0)
//     b=-b;
//     if(b==0)
//     return a;
//         return ebob(b, a %b);
// }
//*asil cozum
// int ebob(int s1, int s2);
// int main() {
//     int s1, s2;
//     printf("1.sayiyi giriniz:");
//     scanf("%d", &s1);
//     printf("2.sayiyi giriniz:");
//     scanf("%d", &s2);
//     printf("%d", ebob(s1, s2));
// }
// int ebob(int s1, int s2) {
//     if (s1 == s2)
//         return s1;
//     if (s1 > s2)
//         return ebob(s1 - s2, s2);
//     else
//         return ebob(s1, s2 - s1);
// }
// int main(){
//     int a,b;
//     printf("2 sayi giriniz:");
//     scanf("%d%d",&a,&b);
//     int sonuc=ebob(a,b);
//     printf("%d",sonuc);
// }

//!8.soru
// Girilen sayının tam bölenlerini ekrana yazdıran özyinelemeli fonksiyonu yazınız.
// int tamBolen(int sayi,int i){
//     if(i==0)
//     return 1;
//     if(sayi%i==0){
//     printf("%d ",i);
//     }
//     tamBolen(sayi,i-1);//bu satiri printften once yazarsak düz siralanmis halini verir,bu sekilde yazarsak 
//tersten siralanmis halini verir
// }
// int main(){
//     int sayi;
//     printf("bir sayi giirinizi:");
//     scanf("%d",&sayi);
//     tamBolen(sayi,sayi);
//     return 0;
// }

//!9.soru
// 10 elemanlı bir dizideki en büyük sayıyı özyinelemeli olarak bulunuz.
//?bu soruya dön
// int enBuyuk(int dizi[],int i,int enb){
//     if (i>10)
//         return enb;
//     if(dizi[i]>enb)
//     {
//         enb=dizi[i];
//     }
//     return enBuyuk(dizi,i+1,enb);
// }
// int main(){
//     int dizi[10];
//     printf("dizinin elemanlarini girniz:\n");
//     for(int i=0;i<10;i++)
//     {
//         scanf("%d",&dizi[i]);
//     }
//     getchar();
//     int enb=enBuyuk(dizi,0,dizi[0]);
//     printf("dizinin en buyuk elemani:%d",enb);
// }

//!10.soru
// 10 elemanlı bir dizideki en büyük ve en küçük sayının toplamını özyinelemeli olarak bulunuz.
//????????? anlamadım
// int toplam(int dizi[],int i,int enb,int enk);
// int main() {
//     int dizi[]={1,2,3,4,5,6,7,8,9,10};
//     printf("olusturulan dizi:\n");
//     for (int i=0;i<10;i++) {
//         printf("%d ",dizi[i]);
//     }
//     printf("\n");
//     printf("olusturulan dizide en buyuk ve en kucuk elemanin toplami:%d",toplam(dizi,0,dizi[0],dizi[0]));
// }
// int toplam(int dizi[],int i,int enb,int enk) {
//     int toplami;
//     if (i>=10)
//         return enb+enk;
//     if (dizi[i]>enb) {
//         enb=dizi[i];
//     }
//     else if (dizi[i]<enk) {
//         enk=dizi[i];
//     }
// enb=toplam(dizi,i+1,enb,enk);
// }

//!11.soru
// Verilen sayının kaç basamaklı olduğunu özyinelemeli olarak bulunuz.
//??????????? anlamadım
// int basamak(int sayi);
// int main() {
//     int sayi;
//     printf("bir sayi giriniz:");
//     scanf("%d", &sayi);
//     printf("basamak sayi giriniz:%d", basamak(sayi));
// }
// int basamak(int sayi) {
//     if (sayi < 0)
//         sayi = -sayi;
//     if (sayi < 10) {
//         return 1;
//     }
//     return 1 + basamak(sayi / 10);
// }
