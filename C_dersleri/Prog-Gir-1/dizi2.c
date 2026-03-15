#include <stdio.h>
#include <stdlib.h>
//!1.soru
// Verilen bir dizinin k.konumuna x değerini yerleştiriniz.(k ve x kullanıcıdan alınacaktır.)
// int main(){
//       int N,k,x;
//       printf("dizinin boyutunu giriniz:");
//       scanf("%d",&N);
//       int dizi[N];
//       printf("dizinin elemanlarini giriniz:\n");
//       for(int i=0;i<N;i++)
//       {
//             scanf("%d",&dizi[i]);
//       }
//       printf("\noluşturulan dizi:\n");
//       for(int j=0;j<N;j++){
//             printf("%d\n",dizi[j]);
//       }
//       printf("\nyerleştirmek istediğiniz konumu giriniz:\n");
//       scanf("%d",&k);
//       printf("yerleştirmek istediğiniz değeri giriniz:\n");
//       scanf("%d",&x);
//       printf("\n yeni oluşturulan dizinin elemanlari:\n");
//         if(k<0 || k>=N)
//       printf("girdiğiniz konum dizide bulunmamaktadir!");
//    else
//    {
//       dizi[k]=x;
//       printf("\n oluşturulan dizinin elemanlari:\n");
//       for(int i=0;i<N;i++)
//       {
//             printf("%d\n",dizi[i]);
//       }
//    }
// }

//!2.soru
// Girilen N elemanlı bir tamsayı dizisinde istenen bir sayıyı arayıp konumunu yazdırınız.
// int main(){
//       int N,aranan,var=0;
//       printf("dizinin boyutunu giriniz:\n");
//       scanf("%d",&N);
//       int dizi[N];
//       printf("dizinin elemanlarini giriniz:\n");
//       for(int i=0;i<N;i++)
//       {
//             scanf("%d",&dizi[i]);
//       }
//       printf("\n oluşturulan dizi:\n");
//       for(int j=0;j<N;j++)
//       {
//             printf("%d\n",dizi[j]);
//       }
//       printf("aradiğiniz sayiyi girinzi:");
//       scanf("%d",&aranan);
//       for(int i=0;i<N;i++)
//       {
//            if(aranan==dizi[i])
//            {
//             printf("aradiğiniz eleman bulundu,konumu:%d",i+1);
//             var=1;
//             break;
//            }
//       }
//       if(!var)
//       printf("aradiğiniz eleman dizide bulunamamiştir");
// }

//!3.soru
// Girilen bir karakter dizisinde istenen bir harften kaç adet tekrarlandığını bulunuz.
// int main(){
//       char dizi[20];
//       int sayac=0;
//       printf("bir metin giriniz:");
//       fgets(dizi,20,stdin);
//       printf("girdiğiniz metin:");
//       puts(dizi);
//       char aranan;
//       printf("aranan harfi giriniz:");
//       scanf(" %c",&aranan);
//       for(int i=0;  dizi[i] != '\0';i++)
//       {
//             if(dizi[i]==aranan)
//             sayac++;
//       }
//       printf("girmiiş olduğunuz cümlede aradiğiniz harften %d kadar var",sayac);
// }
//?2.cozum
// int main() {
//     char cumle[50];
//     printf("cumlenizi giriniz:\n");
//     gets(cumle);
//     printf("girdiginiz cumle:\n");
//     puts(cumle);
//     char aranan;
//     printf("aradiginiz karakteri giriniz:\n");
//     scanf("%c",&aranan);
//     int i=0,adet=0;
//     while (cumle[i]!='\0') {
//         if (cumle[i]==aranan) {
//             adet++;
//         }
//         i++;
//     }
//     printf("aradiginiz harfin cumledeki adedi:%d",adet);
// }

//!4.soru
// Girilen bir metindeki boşluk sayısını bulunuz.
// int main(){
//        char metin[20];
//        int sayac=0;
//        printf("metin giriniz:");
//        fgets(metin,50,stdin);
//        printf("girdiğiniz metin:");
//        puts(metin);
//       for(int i=0;metin[i]!='\0';i++)
//       {
//             if(metin[i]==' ')
//             sayac++;
//       }
//       printf("girdiğiniz metindeki boşluk sayisi:%d",sayac);
// }

//!5.soru
// Girilen bir cümledeki kelime sayısını bulunuz.
// int main(){
//       char metin[20];
//       int sayac=0;
//       printf("kelime giriniz:");
//       fgets(metin,20,stdin);
//       printf("girdiğiniz kelime:");
//       puts(metin);
//       for(int i=0;metin[i]!='\0';i++)
//       {
//             if(metin[i]==' ')
//             sayac++;
//       }
//       printf("girdiğiniz metindeki kelime sayisi:%d",sayac+1);//kelime sayisi boşluk sayisindan bir fazladir
//}

//!6.soru
//  Girilen bir cümledeki Büyük harf,Küçük harf,Rakam ve diğer sembolleri bulunuz.
// int main(){
//       char metin[50],büyük[50],küçük[50],rakam[50],sembol[50];
//       printf("metin giriniz:");
//       fgets(metin,50,stdin);
//       printf("girdiğiniz metin:");
//       puts(metin);
//       int b=0,k=0,r=0,s=0;
//       for(int i=0;metin[i]!='\0';i++)
//       {
//             if(metin[i]>='A' && metin[i]<='Z')
//             {
//             büyük[b]=metin[i];
//             b++;
//             }
//             else if(metin[i]>='a' && metin[i]<='z')
//             {
//                  küçük[k] =metin[i];
//                   k++;
//             }
//             else if(metin[i]>='0' && metin[i]<='9')
//             {
//                  rakam[r]= metin[i];
//                   r++;
//             }
//             else
//             {
//             sembol[s]=metin[i];
//             s++;
//             }
//       }
//       printf("girilen metindeki büyük harf sayisi:%d\n",b);
//       printf("girilen metindeki büyük harfler:\n");
//       for(int i=0;i<b;i++)
//       {
//             printf("%c ",büyük[i]);
//       }
//       printf("\ngirilen metindeki küçük harf sayisi:%d\n",k);
//        printf("girilen metindeki küçük harfler:\n");
//       for(int i=0;i<k;i++)
//       {
//             printf("%c ",küçük[i]);
//       }
//        printf("\ngirilen metindeki rakam sayisi:%d\n",r);
//        printf("girilen metindeki rakamlar:\n");
//       for(int i=0;i<r;i++)
//       {
//             printf("%c ",rakam[i]);
//       }
//       printf("\ngirilen metindeki sembol sayisi:%d\n",s);
//        printf("girilen metindeki semboller:\n");
//       for(int i=0;i<s;i++)
//       {
//             printf("%c ",sembol[i]);
//       }    
// }

//!7.soru
// Girilen kelimenin palindrom olup olmadığını bulunuz
//?soruya
// int main(){
//   int palindrom=1;
//  char kelime[100];
//  printf("kelimeyi giriniz:");
//  fgets(kelime,100,stdin);
//  printf("girmiş olduğunuz kelime:\n");
//  puts(kelime);
//  int uzunluk=0,j=0;
//  while(kelime[j]!='\0')
//  {
//   uzunluk++;
//   j++;
//  }
//  printf("kelimenin uzunluğu :%d\n",uzunluk);
// for(int i=0;i<uzunluk/2;i++)
// {
//   if(kelime[i]!=kelime[uzunluk-i-1]){
//   palindrom=0;
//   break;
// }
// }      
// if(!palindrom)
// printf("girdiğiniz kelime palindrom değildir");
// else
// printf("girdiğiniz kelime palindromdur");
// }
//?2.cozum
// int main() {
// char kelime[10];
//     printf("bir kelime giriniz:");
//     gets(kelime);
//     printf("girdiginiz kelime:\n");
//     puts(kelime);
//     int i=0;
//     int uzunluk=0;
//     int palindrom=0;
//     while (kelime[i]!='\0') {
//         uzunluk++;
//         i++;
//     }
//     printf("girdiginiz kelimenin uzunlugu:%d",uzunluk);
//     for (int j=0;j<uzunluk/2;j++) {
//         if (kelime[j]==kelime[uzunluk-j-1]) {
//             palindrom=1;
//         }
//     }
//     if (palindrom==1)
//         printf("girdiginiz kelime palindromdur");
//     else
//         printf("girdiginiz kelime palindrom degildir");
// }

//!8.soru
// int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 }; Verilen sayı dizisinde 
//çift sayıları tek sayıya (kendisinden bir fazla olan sayıya) çeviren program kodunu yazınız.
// (20=>21, 60=>61 şeklinde olacaktır.)
// int main(){
//   int sayilar[]={20,60,45,42,23,24,26,125,66,55,145,50,30,40};
//   for(int i=0;i<14;i++)
//   {
//     if(sayilar[i]%2==0)
//     {
//       sayilar[i]=sayilar[i]+1;
//     }
//     else
//     continue;
//   }
//   printf("oluşan yeni diznin elemanlari:\n");
//   for(int i=0;i<14;i++)
//   {
//     printf("%d ",sayilar[i]);
//   }
//}

//!9.soru
// int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 }; Verilen sayı dizisinde yan yana olan çift sayi
// ikilisi bulan program (20-60, 24-26, 50-30, 30-40 şeklinde 4 adet olarak ekrana yazdırılacaktır.)
// int main(){
//   int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
//   for(int i=0;i<13;i++)
//   {
//     if(sayilar[i]%2==0 && sayilar[i+1]%2==0)
//     printf("sayi ikilisi:%d-%d\n",sayilar[i],sayilar[i+1]);
//     else
//     continue;
//   }
// }

//!10.soru
// Kullanıcıdan alınan bir kelimedeki harfleri Harf isimli diziye, rakamları ise Rakam isimli diziye aktardıktan
// sonra bu dizileri sırayla ekrana yazdıran programın kodunu yazınız
// int main(){
//   char kelime[50],harf[50],rakam[50];
//   printf("kelimeyi giriniz:");
//   fgets(kelime,50,stdin);
//   printf("girdiğiniz kelime:\n");
//   puts(kelime);
//   int i=0,h=0,r=0;
//   while(kelime[i]!='\0')
//   {
//     if(kelime[i]>='A' && kelime[i]<='Z' || kelime[i]>='a' && kelime[i]<='z')
//     {
//       harf[h++]=kelime[i];
//     }
//     else if(kelime[i]>='0' && kelime[i]<='9')
//     {
//       rakam[r++]=kelime[i];
//     }
//     i++;
//   }
//   harf[h]='\0';
//   rakam[r]='\0';
//   printf("girilen kelimedeki harfler:\n");
//   for(int j=0;j<h;j++)
//   {
//     printf("%c, ",harf[j]);
//   }
//   printf("\ngirilen kelimedeki rakamlar:\n");
//   for(int j=0;j<r;j++)
//   {
//     printf("%c, ",rakam[j]);
//   }
// }


