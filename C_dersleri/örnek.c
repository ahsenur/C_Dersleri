// #include <stdio.h>
// #include <stdlib.h>
// //girilen iki dizinin medyanını döndüren kodu yazınız
// int sirala(int dizi[],int N){
     
// for(int i=0;i<N;i++)
// {
       
//        if(dizi[i]>dizi[i+1])
//        {
//            int temp=dizi[i];
//            dizi[i]=dizi[i+1];
//            dizi[i+1]=temp;
//        }
// }
// for(int i=0;i<N;i++)
// {
//       printf("%d ",dizi[i]);
// }
// }
// int main(){
// int N;
// printf("oluşturulan dizilerin boyutunu giriniz:");
// scanf("%d",&N);
// int dizi1[N],dizi2[N];
// printf("oluşturulan 1.dizinin elemanlarini giriniz:\n");
// for(int i=0;i<N;i++)
// {
//       scanf("%d",&dizi1[i]);
// }

// printf("oluşturulan 2.dizinin elemanlarini giriniz:\n");
// printf("\n\n");
// for(int i=0;i<N;i++)
// {
//       scanf("%d",&dizi2[i]);
// }
// sirala(dizi1,N);
// sirala(dizi2,N);

// }
#include <stdio.h>
#include <stdlib.h>

// Dizi sıralama fonksiyonu (bubble sort)
void sirala(int dizi[], int N) {
    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < N-i-1; j++) {
            if (dizi[j] > dizi[j+1]) {
                int temp = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = temp;
            }
        }
    }
}

// Medyan bulma fonksiyonu
double medyan(int dizi[], int N) {
    if (N % 2 == 0)
        return (dizi[N/2 - 1] + dizi[N/2]) / 2.0;
    else
        return dizi[N/2];
}

int main() {
    int N;
    printf("oluşturulan dizilerin boyutunu giriniz:");
    scanf("%d", &N);
    int dizi1[N], dizi2[N];

    printf("1. dizinin elemanlarini giriniz:\n");
    for (int i = 0; i < N; i++)
        scanf("%d", &dizi1[i]);

    printf("2. dizinin elemanlarini giriniz:\n");
    for (int i = 0; i < N; i++)
        scanf("%d", &dizi2[i]);

    sirala(dizi1, N);
    sirala(dizi2, N);

    printf("1. dizi sirali: ");
    for (int i = 0; i < N; i++)
        printf("%d ", dizi1[i]);
    printf("\n");

    printf("2. dizi sirali: ");
    for (int i = 0; i < N; i++)
        printf("%d ", dizi2[i]);
    printf("\n");

    printf("1. dizinin medyani: %.2f\n", medyan(dizi1, N));
    printf("2. dizinin medyani: %.2f\n", medyan(dizi2, N));

    return 0;
}