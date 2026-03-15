#include <stdio.h>
#include <stdlib.h>

//!1.soru
// 3x3 boyutunda bir matris elemanları kullanıcıdan alındıktan sonra matrisin köşegene göre simetrik olup 
//olmadığını bulunuz.
// int main(){
//       int matris[3][3],simetrik=1;
//       printf("matrisin elemanlarini giriniz:\n");
//       for(int i=0;i<3;i++)
//       {
//             for(int j=0;j<3;j++)
//             {
//                   scanf("%d",&matris[i][j]);
//             }
//       }
//       printf("oluşturulan matris:\n");
//       for(int i=0;i<3;i++)
//       {
//             for(int j=0;j<3;j++)
//             {
//                   printf("%2d ",matris[i][j]);
//             }
//             printf("\n");
//       }
//       for(int i=0;i<3;i++)
//       {
//             for(int j=i+1;j<3;j++)
//             {
//                   if(matris[i][j]!=matris[j][i]){
//                   simetrik=0;
//                   break;
//             }
//                   if(!simetrik)
//                   break;
//             }
//       }
//       if(simetrik)
//       printf("oluşturduğunuz matris simetriktir!");
//       else
//       printf("oluşturduğunuz matris simetrik değildir!");
// }

//!2.soru
// Girilen N değerine göre NxN matris oluşturup 1’den NxN’e kadar sayıları aşağıdaki sırayla yerleştiriniz.
// int main() {
//     int N;
//     printf("N degerini giriniz:");
//     scanf("%d", &N);
//     int matris[N][N];
//     int num = 1;
//     for (int i = 0; i < N; i++) {
//         if (i % 2 == 0) {
//             for (int j = 0; j < N; j++) {
//                 matris[j][i] = num++;
//             }
//         } else {
//             for (int j = N - 1; j >= 0; j--) {
//                 matris[j][i] = num++;
//             }
//         }
//     }
//     printf("olusturulan matris:\n");
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             printf("%d\t", matris[i][j]);
//         }
//         printf("\n");
//     }
// }

//!3.soru
// 5x5 boyutunda bir karakter matrisi tanımlayıp başlangıç değerlerini kod kısmında oluşturunuz. 
//Matrisi ekrana yazdırdıktan sonra kullanıcıdan en fazla 5 karakterlik bir kelime alıp bu kelimenin 
//matris içinde soldan sağa veya yukarıdan aşağıya bulunup bulunmadığını kontrol ediniz.
// 				kelime giriniz: abc “bulundu“
// 				kelime giriniz: xyzt “bulunamadi“
// int main(){
//       char matris[5][5]={
//             {'a','b','c','d','e'},
//             {'f','g','9','h','i'},
//             {'k','l','m','n','o'},
//             {'8','p','r','s','4'},
//             {'t','u','5','v','y'},
//       };
//       int bulundu=1;
//       for(int i=0;i<5;i++)
//       {
//             for(int j=0;j<5;j++)
//             {
//                   printf("%c ",matris[i][j]);
//             }
//             printf("\n");
//       }
//       char kelime[5];
//       printf("aradiğiniz kelimeyi giriniz:");
//       scanf("%5s",kelime);
//       for(int i=0;i<5;i++)
//       {
//             for(int j=0;j<5;j++)
//             {
//                   if(kelime[i] != matris[i]){
//                   bulundu=0;
//                   break;
//                   }
//             }
//       }
//       if(!bulundu)
//       printf("girdiğiniz kelime bulunamamiştir!");
//       else
//       printf("girdiğiniz kelime bulunmuştur!");
// }


//?verilen dizideki elemanlari küçükten büyüğe siralama sorusu
// int main(){
//       int sayilar[5]={15,10,3,47,9};
//       for(int i=0;i<5;i++)
//       {
//             int gecici=sayilar[0];
//             for(int j=0;j<5;j++)
//             {
//                   if(sayilar[j]>sayilar[j+1])
//                   {
//                         gecici=sayilar[j];
//                         sayilar[j]=sayilar[j+1]  ;
//                         sayilar[j+1]=gecici;
//                   }
//             }
//       }
//       printf("oluşturulan dizi:\n");
//       for(int i=0;i<5;i++)
//       {
//             printf("%d ",sayilar[i]);
//       }
// }
