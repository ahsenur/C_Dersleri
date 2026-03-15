#include <stdio.h>
#include <stdlib.h>

//!1.soru
// Girilen N değerine göre NxN matris oluşturup 1’den NxN’e kadar sayıları sırayla yerleştiriniz.
// N=3 girilirse:
// int main(){
//       int N;
//       printf("N değerini giriniz:\n");
//       scanf("%d",&N);
//       int matris[N][N];
//       for(int i=0;i<N;i++)
//       {
//             for(int j=0;j<N;j++)
//             {
//                   matris[i][j]=N*i+j+1;
//             }
//       }
//       printf("oluşturulan matris:\n");
//       for(int i=0;i<N;i++)
//       {
//             for(int j=0;j<N;j++)
//             {
//                   printf("%d ",matris[i][j]);
//             }
//             printf("\n");
//       }
// }

//!2.soru
//?bu soruya dön
// Girilen bir cümledeki her bir kelimeyi matrisin bir satırına aktaran programı yazınız. 
// Örneğin; “ali veli sami” girilirse matris yapısı:
//  int main(){
//       char kelime[50];
//       printf("kelime giriniz:\n");
//       gets(kelime);
//       puts(kelime);
//       int bosluk=0,i=0;
//       while(kelime[i] !='\0'){
//             if(kelime[i]==' ')
//             bosluk++;
//             i++;
//       }
//     char matris[bosluk+1][20];
//       printf("kelimedeki boşluk sayisi:%d\n",bosluk);
//    int j=0, sutun=0,satir=0;
//    while(kelime[j] != '\0'){
//       if(kelime[j]==' ')
//       {
//             matris[satir][sutun]= '\0';
//             satir++;
//             sutun=0;
//       }
//       else
//       {
//             matris[satir][sutun]=kelime[j];       
//             sutun++;
//       }
//       j++;
//    }
//    matris[satir][sutun]='\0';
//       printf("oluşturulan matris:\n");
//       for(int i=0;i<bosluk+1;i++)
//       {
//            printf("%s \n",matris[i]);
//       }
//     }

//!3.soru
// 5 öğrenci için 0-100 arası Vize,Final notlarından oluşan bir matriste her öğrencinin ortalama notunu hesaplayıp
// 4.sütuna yazınız.
// int main(){
// int matris[5][4],final[5],vize[5];
// float ort[5];
// for(int i=0;i<5;i++)
// {
//       printf("%d.öğrencinin final notu:",i+1);
//       scanf("%d",&final[i]);
//       printf("%d.öğrencinin vize notu:",i+1);
//       scanf("%d",&vize[i]);
// }
// for(int i=0;i<5;i++)
// {
//       ort[i]=(final[i]*(0.6))+(vize[i] * (0.4)) ;
// }
// for(int i=0;i<5;i++)
// {
//       for(int j=0;j<4;j++)
//       {
//             matris[i][0]=i+1;
//             matris[i][1]=final[i];
//             matris[i][2]=vize[i];
//             matris[i][3]=ort[i];
//             }
// }
// printf("oluşturulan matris:\n");
// for(int i=0;i<5;i++)
// {
//       for(int j=0;j<4;j++){
//             printf("%d ",matris[i][j]);
//       }
//       printf("\n");
// }
//}
