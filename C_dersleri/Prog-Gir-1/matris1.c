#include <stdio.h>
#include <stdlib.h>

//!1.soru
// 2x2 boyutunda bir matrisin değerlerini kullanıcıdan alarak matris şeklinde yazdırınız.
// int main(){
//       int matris[2][2];
//       printf("matrisin değeerlerini giriniz:\n");
//       for(int i=0;i<2;i++)
//       {
//             for(int j=0;j<2;j++)
//             {
//                   scanf("%d",&matris[i][j]);
//             }  
//       }
//       printf("oluşturulan matris:\n");
//       for(int i=0;i<2;i++)
//       {
//             for(int j=0;j<2;j++)
//       {
//             printf("%d ",matris[i][j]);
//       }
//       printf("\n");
//       }
// }

//!2.soru
// 0-100 arası rastgele sayılardan oluşturulan 3x3 bir matriste 50 den büyük kaç tane sayı olduğunu bulunuz.
// int main(){
// int matris[3][3];
// srand(time(NULL));
// int sayac=0;
// for(int i=0;i<3;i++)
// {
//       for(int j=0;j<3;j++)
//       {
//             matris[i][j]=rand() % 101;
//       }
// }
// for(int i=0;i<3;i++)
// {
//       for(int j=0;j<3;j++)
//       {
//             if(matris[i][j]>50)
//             {
//                 sayac++;
//             }
//       }
// }
// printf("olusturulan matris:\n");
// for(int i=0;i<3;i++)
// {
//     for(int j=0;j<3;j++)
//     {
//         printf("%d\t",matris[i][j]);
//     }
// }
// printf("olusturulan matriste 50'den buyuk %d adet sayi vardir",sayac);
// }

//!3.soru
// 0-100 arası rastgele sayılardan oluşturulan 4x4 bir matristeki en büyük, en küçük ve ortalama sayıyı bulunuz.
// int main(){
//       int matris[4][4],enb,enk,toplam=0;
//       float ort;
//       srand(time(NULL));
//       for(int i=0;i<4;i++)
//       {
//             for(int j=0;j<4;j++)
//             {
//                   matris[i][j]=rand() % 101;
//             }
//       }
//       printf("oluşturulan matris:\n");
//       for(int i=0;i<4;i++)
//       {
//             for(int j=0;j<4;j++)
//             {
//                   printf("%d ",matris[i][j]);
//                   toplam+=matris[i][j];
//             }
//             printf("\n");
//       }
//       enb=matris[0][0];
//       enk=matris[0][0];
//       for(int i=0;i<4;i++)
//       {
//             for(int j=0;j<4;j++)
//             {
//                   if(matris[i][j]>enb)
//                   enb=matris[i][j];
//                   if(matris[i][j]<enk)
//                   enk=matris[i][j];
//             }
//       }
//       ort=toplam/16;
//       printf("\noluşturulan matristeki en büyük eleman:%d\n",enb);
//       printf("\noluşturulan matristeki en küçük eleman:%d\n",enk);
//       printf("\noluşturulan matristeki elemanlarin ortalamasi:%.2f\n",ort);
// }

//!4.soru
// 1’den 10’a kadar olan sayıları ve karelerini matris olarak oluşturup yazdırınız
//.(1.sütunda sayılar, 2.sütunda kareleri olacaktır)
// int main(){
//  int matris[10][2];
//  for(int i=0;i<10;i++)
//  {
//       for(int j=0;j<2;j++)
//       {
//            matris[i][0]=i+1;
//            matris[i][1]=(i+1)*(i+1);
//       }
//  }
//  printf("matrisin değerleri:\n");
//  for(int i=0;i<10;i++)
//  {
//       for(int j=0;j<2;j++)
//       {
//             printf("%d ",matris[i][j]);
//       }
//       printf("\n");
//  }
// }

//!5.soru
// 0-10 arası rastgele sayılardan oluşan 4x4 bir matrisin köşegen toplamlarını bulunuz.
// 			1.köşegen toplamı: 24  (5+9+7+3)
// 2.köşegen toplamı: 20  (9+4+6+1)
// int main(){
//       int matris[4][4],toplam1=0,toplam2=0;
//       srand(time(NULL));
//       for(int i=0;i<4;i++)
//       {
//             for(int j=0;j<4;j++)
//             {
//                   matris[i][j]=rand() % 11;
//             }
//       }
//          printf("oluşturulan matris:\n");
//          for(int i=0;i<4;i++)
//          {
//             for(int j=0;j<4;j++)
//             {
//                   printf("%d ",matris[i][j]);
//             }
//             printf("\n");
//          }
//          for(int i=0;i<4;i++)
//          {
//             for(int j=0;j<4;j++)
//             {
//                   if(i==j){
//                         toplam1+=matris[i][j];
//                   }
//             }
//          }
//          for(int i=0;i<4;i++)
//          {
//             for(int j=0;j<4;j++)
//             {
//                   if(i+j==3)
//                   {
//                         toplam2+=matris[i][j];
//                   }
//             }
//          }
//          printf("oluşturulan matrisin 1.köşegenin toplami:%d\n",toplam1);
//          printf("oluşturulan matrisin 2.köşegenin toplami:%d\n",toplam2);
// }

//?do while döngüsü soru çözümü
// int main(){
//       int toplam=0,sayi=1;
//       printf("1'den 10'a kadar sayilarin toplami:");
//       do
//       {
//             toplam=toplam+sayi;
//             sayi+=1;
//       } while (sayi<=10);
//       printf("%d",toplam);
// }
