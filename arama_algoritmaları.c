//*selection sort(secmeli sıralama) ornek soru
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int dizi[]={12,23,21,13,22,38,33,34};
//     int boyut=sizeof(dizi)/sizeof(dizi[0]);
//     for (int i=0;i<boyut;i++) {
//         int min=i;
//         for (int j=i+1;j<boyut;j++) {
//            if (dizi[j]<dizi[min]) {
//                min=j;
//            }
//         }
//         if (min!=i) {
//             int temp=dizi[i];
//             dizi[i]=dizi[min];
//             dizi[min]=temp;
//         }
//     }
//     printf("siralanmis dizi:");
//     for (int i=0;i<boyut;i++) {
//         printf("%d ",dizi[i]);
//     }
// }

//*bubble sort(kabarcık sıralama) ornek soru
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int dizi[] = {11, 16, 8, 7, 20, 4, 14};
//     int boyut = sizeof(dizi) / sizeof(dizi[0]);
//     for (int i = 0; i < boyut - 1; i++) {
//         int flag = 0;
//         for (int j = 0; j < boyut - 1 - i; j++) {
//             if (dizi[j] > dizi[j + 1]) {
//                 int temp = dizi[j];
//                 dizi[j] = dizi[j + 1];
//                 dizi[j + 1] = temp;
//                 flag = 1;
//             }
//         }
//         if (flag == 0)
//             break;
//     }
//     printf("siralanmis dizi:\n");
//     for (int i = 0; i < boyut; i++) {
//         printf("%d ", dizi[i]);
//     }
// }

//*binary_search ornek soru
// #include <stdio.h>
// #include <stdlib.h>
// void bastir(int dizi[], int boyut);
// int main() {
//     int dizi[256];
//     int aranan;
//     printf("aradiginiz degeri giriniz:");
//     scanf("%d", &aranan);
//     int boyut = sizeof(dizi) / sizeof(dizi[0]);
//     int sol = 0;
//     int sag = boyut - 1;
//     int orta;
//     for (int i = 0; i < 256; i++) {
//         dizi[i] = i + 1;
//     }
//     bastir(dizi,boyut);
//     int sayac = 0;
//     int bulunan_index = -1;
//     while (sol <= sag) {
//         sayac++;
//         orta = (sol + sag) / 2;
//         if (dizi[orta] == aranan) {
//             bulunan_index = orta;
//             break;
//         } else if (dizi[orta] < aranan)
//             sol = orta + 1;
//         else
//             sag = orta - 1;
//     }
//     if (bulunan_index != -1) {
//         printf("Bulunan index:%d\n", bulunan_index);
//     } else
//         printf("aradiginiz eleman bulunmamaistir");
//     printf("\n\n\n%d.iterasyon:\n", sayac);
// }
// void bastir(int dizi[], int boyut) {
//     for (int i = 0; i < boyut; i++) {
//         printf("%d ", dizi[i]);
//     }
// }
//*