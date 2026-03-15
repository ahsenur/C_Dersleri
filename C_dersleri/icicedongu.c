#include <stdio.h>
#include <stdlib.h>

//!1.soru
// int main(){
//       int x;
//       printf("x değerini giriniz:");
//       scanf("%d",&x);
//       for(int i=0;i<x;i++)
//       {
//             for(int j=0;j<x;j++)
//             {
//                   printf("* ");
//             }
//             printf("\n");
//       }
// }



//!2.soru
// int main(){
//       int x;
//       printf("x değerini giriniz:");
//       scanf("%d",&x);
//       for(int i=0;i<x;i++)
//       {
//             for(int j=0;j<i;j++)
//             {
//                   printf("* ");
//             }
//             printf("\n");
//       }
// }



//!3.soru
// int main()
// {
//     int satir,boşluk,N,yildiz;
//     printf("N değerini girinzi:");
//     scanf("%d",&N);
//     for(satir=1;satir<=N;satir++)
//     {
//       for(boşluk=1;boşluk<=N - satir;boşluk++)
//       {
//             printf(" ");
//       }
//       for(yildiz=1;yildiz<=satir*2 - 1;yildiz++)
//       {
//             printf("*");
//       }
//       printf("\n");
//     }
// }



//!4.soru
// int main(){
//       int satir;
//       printf("satir sayisini giriniz:");
//       scanf("%d",&satir);
//       for(int i=0;i<satir;i++)
//       {
//             for(int j=0;j<satir;j++)
//             {
//               if(i == 0 || i== satir - 1 || j == 0 || j== satir - 1)
//               printf("* ");
//               else
//               printf("  ");
//             }
//             printf("\n");
//       }
// }




//!5.soru
// int main(){
//       int satir;
//       printf("satir değerini giriniz:");
//       scanf("%d",&satir);
//       for(int i=0;i<satir;i++)
//       {
//             for(int j=0;j<i;j++)
//             {
//                   printf("%d",i);
//             }
//             printf("\n");
//       }
// }



//!6.soru
// int main(){
//       int satir;
//        int sayi=1;
//       printf("satir sayisini giriniz:");
//       scanf("%d",&satir);
//       for(int i=1;i<=satir;i++)
//       {   
//             for(int j=1;j<=i;j++)
//             {
//                   printf("%d ",sayi);
//                   sayi++;
//             }
//             printf("\n");
//       }
// }


//!7.soru
//?bu soruya dön
// int main()
// {
//       int satir;
//       printf("satir sayisini giriniz:");
//       scanf("%d",&satir);
//       for(int i=1;i<=satir;i++)
//       {
//             int deger=i%2;
//             for(int j=1;j<=i;j++)
//             {
//                  printf("%d ",deger);
//                  deger= 1 - deger;
//             }
//             printf("\n");
//       }
// }




//!paralelkenar örneği
// int main() {
// int sayi;
//     printf("sayi girniz:");
//     scanf("%d",&sayi);
//    for (int i=0;i<sayi;i++) {
//        for (int j=0;j<sayi-i;j++) {
//     printf(" ");
//        }
//        for (int k=0;k<=2*sayi-1;k++) {
//            printf("*");
//        }
//        printf("\n");
//    }
// }


//!onemli ornek
// int main() {
// for(int n=4;n>=0;n--)
// {
//       for(int k=0;k<4-n;k++)
//     {
//         printf(" ");
//     }
//     for(int j=0;j<=n;j++)
//     {
//         printf("* ");
//     }
//     printf("\n");
// }
// }


//!onemli ornek 2
// int main() {
//     int n;
//     printf("n degerini girniz:");
//     scanf("%d",&n);
//     getchar();
//     for(int i=n;i>=1;i--)
//     {
//         for(int k=0;k<n-i;k++)
//         {
//             printf(" ");
//         }
//         for(int j=1;j<=i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }


//!onemli ornek 3
// int main() {
// int n;
//     printf("matrisin boyutunu giriniz:");
//     scanf("%d",&n);
//     int matris[n][n];
//   for (int i=0;i<n;i++) {
//       for (int j=0;j<n;j++) {
//           if ((j==n/2 || i==n/2) || ( n%2 == 0 && (j==n/2-1 || i==n/2-1))) {
//               printf("1 ");
//           }
//           else {
//               printf("0 ");
//           }
//       }
//       printf("\n");
//   }
// }



//!onemli ornek 5
// int main() {
//     int n;
//     int enk = 0;
//     printf("bir sayi girinz:");
//     scanf("%d", &n);
//     for (int i = n; i >= 2; i--) {
//         int asal = 1;
//         for (int j = 2; j < i/2; j++) {
//             if (i % j == 0) {
//                 asal = 0;
//             }
//         }
//         if (asal == 1) {
//             printf("%d", i);
//             break;
//         }
//     }
// }


//!onemli ornek 6
//sayının iki tabanına göre yaklaşık logaritmasını bul
// int main() {
//     int sayi;
//     printf("bir sayi giriniz:");
//     scanf("%d",&sayi);
//     int a=0;
//     for (int i=1;i<sayi;i*=2) {
//       a++;
//     }
//     printf("%d",a);
// }


//!onemli ornek 7
// int main() {
//     int matris[5][5];
//     int a = 1;
//     int b = 1;
//     for (int i = 1; i < 5; i++) {
//         int p = a;
//         int q = b;
//         for (int j = 1; j < 5; j++) {
//             int r = q + p;
//             printf("%d\t", r);
//             p = q;
//             q = r;
//         }
//         printf("\n");
//         int c;
//         c = a + b;
//         a = b;
//         b = c;
//     }
// }


//!onemli ornek 8
// int main() {
// int N;
//     printf("N degerini giriniz:");
//     scanf("%d",&N);
//  int matris[N][N];
//     for (int i=1;i<N;i++) {
//         for (int j=1;j<N;j++) {
//             printf("%d\t",j+i);
//         }
//         printf("\n");
//     }
//  }
