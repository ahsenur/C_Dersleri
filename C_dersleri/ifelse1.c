
#include <stdio.h>
#include <stdlib.h>

//?kodun direkt kendiliğinden yazılmasını istiyorsan ayarları aç, inline suggest
//?yaz. oradan Editor › Inline Suggest: Enabled 'ı aktif hale getir
//!1.soru
  //Klavyeden girilen 3 sayı içerisinden en küçük sayıyı bulan algoritma?
// int main(){
//       int s1,s2,s3,enk;
//       printf("1.sayiyi giriniz:");
//       scanf("%d",&s1);
//       printf("2.sayiyi giriniz:");              
//       scanf("%d",&s2);
//       printf("3.sayiyi giriniz:");
//       scanf("%d",&s3);
//       enk=s1;
//       if(s3<enk)
//       enk=s3;
//       if(s2<enk)
//       enk=s2;           
//       printf("en küçük sayı:%d",enk);
// }









//!2.soru
//Girilen sayının 6'nın katı olup olmadığını bulan algoritma?
// int main(){
//       int sayi;
//       printf("bir sayı giriniz:");
//       scanf("%d",&sayi);
//       if(sayi%6==0)
//       {
//             printf("girdiğiniz sayi altinin katidir.");
//       }
//       else
//       printf("giirdiğiniz sayi altinin kati değildir:");
// }



//!3.soru
//Vize ve final notuna göre geçme durumunu hesaplayan algoritma(Not=Vize*0,4+Final*0,6) Geçme Notu:55
// int main(){
// int vize,final;
// printf("vize notunu giriniz:");
// scanf("%d",&vize);
// printf("final giriniz:");
// scanf("%d",&final);
// int not;
// not=vize*0.4+final*0.6;
// if(not>55)
// {
//       printf("geçtiniz!");
// }
// else
// printf("Geçmediniz!");}



//!4.soru
//Personelin sabit maaşı ve çocuk sayısı girildiğinde yeni maaş miktarını hesaplayınız.
//(Çocuk sayısı 1 ise %5, iki ise %10,üç veya daha fazla ise %15 zam yapılacaktır.)
// int main(){
//       int sabitMaas,çocuksayisi;
//       float yenimaas;
//       printf("personelin sabit maaşini giriniz:");
//       scanf("%d",&sabitMaas);
//       printf("personelin çocuk sayisini giriniz:");
//       scanf("%d",&çocuksayisi);
//       switch(çocuksayisi){
//       case 1:
//       yenimaas=sabitMaas+ sabitMaas*0.05;
//       break;
//       case 2:
//       yenimaas=sabitMaas+sabitMaas*0.1;
//       break;
//      default:
//       yenimaas=sabitMaas+sabitMaas*0.15;
//       break;
// }
// printf("personelin yeni maaşı:%.2f",yenimaas);
// }





//!5.soru
//Dört işlem: 1:Toplama, 2:Çıkarma,3:Çarpma 4:Bölme. Kullanıcıdan iki sayı alıp işlemi seçerek sonucu ekranda yazınız?
//(if-else, switch-case)
// int main(){
//       int s1,s2,toplama,çarpma,çikarma,bölme,seçim;
//       printf("1.sayiyi giriniz:");
//       scanf("%d",&s1);
//       printf("2.sayiyi giriniz:");
//       scanf("%d",&s2);
//       printf("1-4 arasinda bir seçim yapiniz:");
//       scanf("%d",&seçim);
//       switch(seçim)
//       {
//             case 1:
//             toplama=s1+s2;
//             printf("girmiş olduğunuz iki sayinin toplami:%d",toplama);
//             break;
//             case 2:
//             if(s1>s2)
//             çikarma = s1 - s2;
//             else
//             çikarma= s2 - s1;
//             printf("girmiş olduğunuz sayilarin farki:%d",çikarma);
//             break;
//             case 3:
//             if(s1>s2)
//             bölme= s1/s2;
//             else 
//             bölme=s2/s1;
//             printf("girmiş olduğunuz sayilarin bölümü:%d",bölme);
//             break;
//             case 4:
//             çarpma=s1*s2;
//             printf("girmiş olduğunuz sayilarin çarpimi:%d",çarpma);
//             break;
//             default:
//             printf("lütfen 1-4 arasinda bir seçim giriniz!");
//       }
// }




//!6.soru
//Haftanın Günleri: 1-7 arası girilen değere göre günleri yazdırınız.(if-else, switch-case)
// int main(){
//       int gün;
//       printf("gün sayisini giriniz:");
//       scanf("%d",&gün);
//       switch(gün)
//       {
//             case 1:
//             printf("pazartesi");
//             break;
//             case 2:
//             printf("sali");
//             break;
//             case 3:
//             printf("çarşamba");
//             break;
//             case 4:
//             printf("perşembe");
//             break;
//             case 5:
//             printf("cuma");
//             break;
//             case 6:
//             printf("cumartesi");
//             break;
//             case 7:
//             printf("pazar");
//             break;
//             default:
//             printf("lütfen geçerli bir gün sayisi giriniz!");
//             break;
//       }
// }


//!7.soru
//Klavyeden girilen 4 sayıdan hangi sayıların ortalamadan büyük/eşit/küçük olduğunu bulan programı yazınız.
//Örnek: 10, 5, 3, 12 Ort: 7.5 => Ortalamadan büyük olanlar:10,12 Ortalamadan küçük olanlar: 3, 5 olarak yazacaktır
// int main(){
//       int s1,s2,s3,s4;
//       printf("1.sayiyi giriniz:");
//       scanf("%d",&s1);
//       printf("2.sayiyi giriniz:");
//       scanf("%d",&s2);
//       printf("3.sayiyi giriniz:");
//       scanf("%d",&s3);
//        printf("4.sayiyi giriniz:");
//       scanf("%d",&s4);
//       float ortalama=(s1+s2+s3+s4)/4;
//       if(s1>ortalama)
//       {
//             printf("1.sayi ortalamadan büyüktür!");
//       }
//       else if(s1==ortalama)
//       {
//             printf("1.sayi ortalamaya eşittir!");
//       }
//       else
//       printf("1. sayi ortalamadan küçüktür!");
//          if(s2>ortalama)
//       {
//             printf("2.sayi ortalamadan büyüktür!");
//       }
//       else if(s2==ortalama)
//       {
//             printf("2.sayi ortalamaya eşittir!");
//       }
//       else
//       printf("2. sayi ortalamadan küçüktür!");
//          if(s3>ortalama)
//       {
//             printf("3.sayi ortalamadan büyüktür!");
//       }
//       else if(s3==ortalama)
//       {
//             printf("3.sayi ortalamaya eşittir!");
//       }
//       else
//       printf("3. sayi ortalamadan küçüktür!");
//          if(s4>ortalama)
//       {
//             printf("4.sayi ortalamadan büyüktür!");
//       }
//       else if(s4==ortalama)
//       {
//             printf("4.sayi ortalamaya eşittir!");
//       }
//       else
//       printf("4. sayi ortalamadan küçüktür!");
// }




//!8.soru
//Klavyeden girilen sıralı 3 tam sayı ile dik üçgen çizilip çizilemeyeceğini gösteren program kodunu yazınız.
//A2 + B2 = C2 şartını sağlamalıdır. Örnek: A=3, B=4, C=5 (sayılar sıralı girilmiştir) girildiğinde sonuc “DİK ÜÇGEN ÇİZİLEBİLİR” yazmalıdır.
// int main(){
// int a,b,c;
// printf("1.sayiyi giriniz:");
// scanf("%d",&a);
// printf("2.sayiyi giriniz:");
// scanf("%d",&b);
// printf("3.sayiyi giriniz:");
// scanf("%d",&c);
// if(!(a*a<b*b && b*b<c*c))
// printf("lütfen sayilari sirayla giriniz!");
// else{
// if(a*a+b*b==c*c)
// {
//       printf("girdiğiniz sayilarla bir üçgen oluşturulabilir!");
// }
// else
// printf("girdiğiniz sayilarla bir üçgen oluşturulamaz!");
// }}