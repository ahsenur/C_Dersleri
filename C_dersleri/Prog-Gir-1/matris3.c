#include <stdio.h>
#include <stdlib.h>

//!1.soru
// Matris Toplama: 3x2 boyutunda 2 adet matris tanımlayıp her bir matrisin elemanlarını 10-30 arası 
//rastgele sayılarla doldurduktan sonra bu iki matrisi toplayarak toplam matrisini elde edip yazdırınız.
// int main(){
//       int matris1[3][2],matris2[3][2],matris3[3][2];
//       srand(time(NULL));
//       for(int i=0;i<3;i++)
//       {
//             for(int j=0;j<2;j++)
//             {
//                   matris1[i][j] = rand() % 21;
//             }
//       }
//       for(int i=0;i<3;i++)
//       {
//             for(int j=0;j<2;j++)
//             {
//                   matris2[i][j] = rand() % 21;
//             }
//       }
//       printf("oluşturulan matrisler:\n");
//       for(int i=0;i<3;i++)
//       {
//             for(int j=0;j<2;j++)
//             {
//                   printf("%d ",matris1[i][j]);
//             }
//             printf("\n");
//       }
//       printf("\n\n");
//         for(int i=0;i<3;i++)
//       {
//             for(int j=0;j<2;j++)
//             {
//                   printf("%d ",matris2[i][j]);
//             }
//             printf("\n");
//       }
// for(int i=0;i<3;i++)
// {
//       for(int j=0;j<2;j++)
//       {
//             matris3[i][j]=matris1[i][j]+matris2[i][j];
//       }
// }
// printf("2 matrisin toplami:\n");
// for(int i=0;i<3;i++)
// {
//       for(int j=0;j<2;j++)
//       {
//          printf("%d ",matris3[i][j]);
//       }
//       printf("\n");
// }
// }

//!2.soru
// Matris Skaler Çarpım: 2x2 boyutunda bir matris elemanlarını ve matrisle çarpılacak tamsayı değerini 
//kullanıcıdan aldıktan sonra çarpma işlemini gerçekleştirip sonuç matrisini elde ediniz ve yazdırınız.
// int main(){
//       int matris[2][2],sayi;
//       printf("çarpilacak sayiyi giriniz:");
//       scanf("%d",&sayi);
//       printf("matrisin değerlerini giriniz:");
//       for(int i=0;i<2;i++)
//       {
//             for(int j=0;j<2;j++)
//             {
//                   scanf("%d",&matris[i][j]);
//             }
//       }
//       for(int i=0;i<2;i++)
//       {
//             for(int j=0;j<2;j++)
//             {
//                   matris[i][j]*=sayi;
//             }
//       }
//       printf("oluşturulan matris:\n");
//       for(int i=0;i<2;i++)
//       {
//             for(int j=0;j<2;j++)
//             {
//                   printf("%d ",matris[i][j]);
//             }
//             printf("\n");
//       }
// }

//!3.soru
// 0-10 arası rastgele sayılardan oluşan 4x4 bir matrisin köşegenlerini yer değiştiren kodu yazınız
//(başka matris kullanmadan)
// int main(){
//    int matris[4][4];
//    srand(time(NULL));
//    for(int i=0;i<4;i++)
//    {
//       for(int j=0;j<4;j++)
//       {
//             matris[i][j]= rand() % 11;
//       }
//    }
//    printf("oluşturulan matris:\n");
//    for(int i=0;i<4;i++)
//    {
//       for(int j=0;j<4;j++)
//       {
//             printf("%2d ",matris[i][j]);///2d yazmamızın sebebi düzgün sütunar halinde görünmesini sağlamak
//       }
//       printf("\n");
//    }
//    for(int i=0;i<4;i++)
//    {
//             int temp=matris[i][i];
//             matris[i][i]=matris[i][3-i];
//             matris[i][3-i]=temp;
//    }
//    printf("köşegenleri değiştirilmiş matris:\n");
//    for(int i=0;i<4;i++)
//    {
//       for(int j=0;j<4;j++)
//       {
//             printf("%2d ",matris[i][j]);
//       }
//       printf("\n");
//    }
// }

