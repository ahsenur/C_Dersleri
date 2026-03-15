#include<stdio.h>
#include<stdlib.h>

//!1.soru
// Bir alışveriş sitesinde 100 TL ve üzerine kargo bedava iken 100 TL altındaki alışverişlerde ise 20 TL kargo ücreti alınmaktadır. Buna göre kullanıcıdan alışveriş tutarını alıp, kargo ücreti dahil ödemesi gereken toplam tutarını ekrana yazdırınız.
// int main(){
// int fiyat;
// int kargoÜcreti=20;
// printf("aldiğiniz ürünün fiyatini giriniz:");
// scanf("%d",&fiyat);
// if(fiyat >= 100)
// {
//       fiyat=fiyat;
//       printf("kargonuz bedava! aldiğiniz ürünün fiyati:%d",fiyat);
// }
// else{
// fiyat=fiyat+kargoÜcreti;
// printf("kargo dahil aldiğiniz ürünün fiyati:%d",fiyat);
// }
// }



//!2.soru
// Kullanıcıdan alınan boy(metre) ve kilo(kg) bilgisine göre kilo durumunu değerlendirip ekrana yazdırınız.Vücut kitle endeksi formülü VKİ = kg/(boy*boy) 
// int main(){
// float boy,kilo,vki;
// printf("boyunuzu giriniz:");
// scanf("%f",&boy);
// printf("kilonuzu giriniz:");
// scanf("%f",&kilo);
// vki= kilo/(boy*boy);
// if(vki<18.5)
// printf("zayifsiniz");

// else if(vki>18.5 && vki<24.9)
// printf("kilonuz normal");

// else if(vki>25 && vki<29.9)
// printf("hafif kilolusunuz");

// else if(vki>30 && vki<34.9)
// printf("fazla kilolusunuz");

// else if(vki>=35)
// printf("obezsiniz");

//doğru sonuç vermesini istiyorsan boy ve kiloyu float şeklinde girmelisin

// }



//!3.soru
// Kullanıcıdan bir karakter girişi alan ve bu karakterin bir harf, rakam veya özel bir karakter olduğunu belirleyen bir program yazın. (ASCII tablosunu kullanarak)
// int main(){
//       char x;
//       printf("bir karakter giriniz:");
//       scanf("%c",&x);
//       if(x>='A' && x<='Z' || x>='a' && x<='z')
//       printf("girdiğiniz karakter bir harftir!");
//       else if(x>='0' && x<='9')
//       printf("girdiğiniz karakter bir sayidir!");
//       else
//       printf("girdiğiniz karakter özel bir karakterdir!");
// }




//!4.soru
// Kullanıcıdan alınan sayının tek veya çift sayı olduğunu, ayrıca tek ise 3’e tam bölünüp bölünmediğini, çift ise 6’ya tam bölünüp bölünmediğini yazdıran programı yazınız.
// (örneğin; 33 girildiğinde “Tek sayi ve 3’e bolunebilir”, 10 girildiğinde “Cift sayi ve 6’ya bolunemez”)
// int main(){
//       int sayi;
//       printf("bir sayi giriniz:");
//       scanf("%d",&sayi);
//       if(sayi%2==0)
//       {
//             if(sayi%6==0)
//             {
//                   printf("girdiğiniz sayi çifttir ve 6'ya tam bölünür");
//             }
//             else
//             printf("girdiğiniz sayi çift sayidir ama 6'ya tam bölünmez:(");
//       }
//       else{
//             if(sayi%3==0)
//             {
//                   printf("girdiğiniz sayi tektir ve 3'e tam bölünür");
//             }
//             else{
//                   printf("girdiğiniz sayi tektir ama 3'e tam bölünmez");
//             }
//       }

// }

