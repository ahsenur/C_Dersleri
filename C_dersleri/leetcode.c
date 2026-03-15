#include <stdio.h>
#include <stdlib.h>

//!1.soru
//?soru  26: Remove Duplicates from Sorted Array
//*bu soruya sonra dön
// int main() {
// int nums[]={0,0,0,1,1,2,2,2,3,3,3,4,4,4,};
// int k=1;
//     int uzunluk;
//     uzunluk=sizeof(nums)/sizeof(nums[0]);
//     printf("dizinin ilk hali:\n");
//     for (int i=0;i<uzunluk;i++) {
//         printf("%d ",nums[i]);
//     }
//     for (int i=0;i<uzunluk;i++) {
//         if (nums[i]!=nums[k-1]) {
//             nums[k]=nums[i];
//             k++;
//         }
//     }
//     printf("\ntekrar eden elemanlar kaldirildi\3\n");
//     printf("olusturulan yeni dizi:\n");
//     for (int j=0;j<k;j++) {
//         printf("%d ",nums[j]);
//     }
// }

//!2.soru
//? soru 2169: Count Operations to Obtain Zero
//* soruya tekrar dön
// int main() {
// int nums1,nums2,islem=0;
//     printf("birinci sayiyii giriniz:");
//     scanf("%d",&nums1);
//     printf("ikinci sayiyi giriniz:");
//     scanf("%d",&nums2);
// while (nums1!=0 && nums2!=0) {
//     if (nums1>=nums2) {
//         nums1-=nums2;
//     }
//     else {
//         nums2-=nums1;
//     }
//     islem++;
// }
//     printf("%d",islem);
// }

//!3.soru
//?  soru 387: First Unique Characte
//*tekrar kendin yapmaya calis
// int main() {
// char kelime[10];
//     int sonuc=-1;
//     int sayac[26];
//     printf(" bir kelime giriniz:");
//     gets(kelime);
//     printf("girdiginiz kelime:");
//     puts(kelime);
//     for (int j=0;j<26;j++) {
//         sayac[j]=0;
//     }
//     int i=0;
//     while(kelime[i]!='\0') {
//         sayac[kelime[i]-'a']++;
//         i++;
//     }
//     i=0;
//     while (kelime[i]!='\0') {
//         if (sayac[kelime[i]-'a']==1) {
//             sonuc=i;
//             break;
//         }
//         i++;
//     }
//     printf("%i", sonuc);
// }

//!4.soru
//?soru 242:valid anagram 
// int main() {
// char s[10],t[10];
//     printf("1.kelimeyi giirniz:");
//     gets(s);
//     printf("2.kelimeyi giriniz:");
//     gets(t);
// int len1=0,len2=0;
//     int anagram=1;
//     while (s[len1]!='\0') {
//         len1++;
//     }
//     printf("birinci kelimenin uzunlugu:%d\n",len1);
//     while (t[len2]!='\0') {
//         len2++;
//     }
//     printf("ikinci kelimenin uzunlugu:%d\n",len2);
//     if (len1!=len2){
//         printf("kelimeler anagram degil");
//         return 0;
// }
//     int kullanildi[10]={0};
//     for (int i=0;i<len1;i++) {
//         int bulundu=0;
//         for (int j=0;j<len2;j++) {
//             if (s[i]==t[j] && kullanildi[j]==0) {
//                 bulundu=1;
//                 kullanildi[j]=1;
//                 break;
//             }
//         }
//         if (!bulundu) {
//             anagram=0;
//             break;
//         }
//     }
//     if (anagram)
//         printf("girdiginiz kelimeler anagramdir\n");
//     else
//         printf("girdiginiz kelimeler anagram degildir\n");
// }
// int main(){
//     int dizi[]={1,2,3,4,1};
//     printf("dizi:\n");
//     int bulundu=0;
//     for(int i=0;i<5;i++)
//     {
//         printf("%d",dizi[i]);
//     }
//     for(int i=0;i<5;i++)
//     {
//         if(dizi[i]==dizi[i+1]){
//             bulundu=1;
//         }
//     }
//     if(bulundu==1)
//     printf("true");
//     else
//     printf("false");
// }


//!2 diziyi pointer olmadan birlestiren kod
#include <stdio.h>
#include <stdlib.h>
#define  MAX 100
// void birlestir(int dizi1[], int dizi2[], int sonuc[], int boyut1, int boyut2);
// int main() {
//     int b1, b2;
//     printf("1.dizinin boyutunu giriniz:");
//     scanf("%d", &b1);
//     int d1[b1];
//     printf("1.dizinin elemanlarini giriniz:");
//     for (int i = 0; i < b1; i++) {
//         scanf("%d", &d1[i]);
//     }
//     printf("2.dizinin boyutunu giriniz:");
//     scanf("%d", &b2);
//     int d2[b2];
//     printf("2.dizinin elemanlarini giriniz:");
//     for (int i = 0; i < b2; i++) {
//         scanf("%d", &d2[i]);
//     }
//     int sonuc[MAX];
//     birlestir(d1, d2, sonuc, b1, b2);
//     for (int i = 0; i < b1 + b2; i++) {
//         printf("%d ", sonuc[i]);
//     }
// }
// void birlestir(int dizi1[], int dizi2[], int sonuc[], int boyut1, int boyut2) {
//     for (int i = 0; i < boyut1; i++) {
//         sonuc[i] = dizi1[i];
//     }
//     for (int i = 0; i < boyut2; i++) {
//         sonuc[boyut1 + i] = dizi2[i];
//     }
// }


//!armstrong sayı sorusunun fonksiyonla cozumu
// int armstrong(int sayi);
// int main() {
//     int sayi;
//     printf("bir sayi giriniz:");
//     scanf("%d", &sayi);
//     if (sayi == armstrong(sayi))
//         printf("girdiginiz syai armstrongtur");
//     else
//         printf("girdiginiz syai armstrong degildir");
// }
// int armstrong(int sayi) {
//     int basamak = 0, result = 0;
//     int i = 0;
//     int temp = sayi;
//     while (temp > 0) {
//         temp /= 10;
//         basamak++;
//     }
//     temp = sayi;
//     int toplam = 0;
//     while (temp > 0) {
//         int us = 1;
//         int rakam = temp % 10;
//         for (int i = 1; i <= basamak; i++) {
//             us *= rakam;
//         }
//         toplam += us;
//         temp /= 10;
//     }
//     return toplam;
// }

//!verilen 2 sayi arasindaki asallari fonksiyonla yazdiran program
// void yazdir(int a, int b);
// int main() {
//     int a, b;
//     printf("a ve b degerlerini giriniz:");
//     scanf("%d %d", &a, &b);
//     yazdir(a, b);
// }
// void yazdir(int a, int b) {
//     if (a > b) {
//         for (int i = b; i < a; i++) {
//             int asal = 1;
//             for (int j = 2; j <= i / 2; j++) {
//                 if (i % j == 0) {
//                     asal = 0;
//                 }
//             }
//             if (asal == 1) {
//                 printf("%d\n", i);
//             }
//         }
//     } else {
//         for (int i = a; i < b; i++) {
//             int asal = 1;
//             for (int j = 2; j <= i / 2; j++) {
//                 if (i % j == 0) {
//                     asal = 0;
//                 }
//             }
//             if (asal == 1) {
//                 printf("%d\n", i);
//             }
//         }
//     }
// }

//!2 sayinin ebobunu fonksiyonla bulan program
// int ebob(int s1, int s2);
// int main() {
//     int s1, s2;
//     printf("1. ve 2. sayiyi giriniz:");
//     scanf("%d %d", &s1, &s2);
//     printf("EBOB(%d,%d)=%d", s1, s2, ebob(s1, s2));
// }
// int ebob(int s1, int s2) {
//     while (s1 != s2) {
//         if (s1 > s2) {
//             s1 -= s2;
//         } else {
//             s2 -= s1;
//         }
//     }
//     return s1;
// }

//!2 sayinin ebobunu ve ekokunu fonksiyonla hesaplayan program
// int ebob(int s1,int s2);
// int ekok(int s1,int s2);
// int main() {
//     int s1,s2;
//     printf("1.sayiyi giriniz:");
//     scanf("%d",&s1);
//     printf("2.sayiyi giriniz:");
//     scanf("%d",&s2);
//     printf("EBOB(%d,%d)=%d\n",s1,s2,ebob(s1,s2));
//     printf("EKOK(%d,%d)=%d\n",s1,s2,ekok(s1,s2));
// }
// int ebob(int s1,int s2) {
//     while(s1!=s2) {
//         if(s1<s2)
//             s2-=s1;
//         else
//             s1-=s2;
//     }
//     return s1;
// }
// int ekok(int s1,int s2) {
//     int carpim;
//     if (s1<0 && s2<0)
//         carpim=(-s1)* (-s2);
//     else if (s1>0 && s2<0)
//         carpim=(+s1)* (-s2);
//     else if (s1<0 && s2>0)
//         carpim=(-s1)* (+s2);
//     else if (s1>0 && s2>0)
//         carpim=s1 * s2;
//     int ebob_degeri=ebob(s1,s2);
//     int ekok_degeri=1;
//     ekok_degeri=carpim/ebob_degeri;
//     return ekok_degeri;
// }

//!bubble-sort algoritmasi ile bir diiznin siralanmasi
// int siralama(int dizi[], int eleman_sayisi);
// int main() {
//     int N;
//     printf("dizinin eleman sayisini giriniz:");
//     scanf("%d", &N);
//     int dizi[N];
//     printf("dizinin elemanlarini giriniz:");
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &dizi[i]);
//     }
//     printf("\nolusturulan dizi:\n");
//     for (int i = 0; i < N; i++) {
//         printf("%d ", dizi[i]);
//     }
//     siralama(dizi, N);
//     printf("\nsiralanmis dizi:\n");
//     for (int i = 0; i < N; i++) {
//         printf("%d ", dizi[i]);
//     }
// }
// int siralama(int dizi[], int eleman_sayisi) {
//     for (int i = 0; i < eleman_sayisi; i++) {
//         for (int j = 0; j < eleman_sayisi; j++) {
//             if (dizi[i] < dizi[j]) {
//                 int temp = dizi[i];
//                 dizi[i] = dizi[j];
//                 dizi[j] = temp;
//             }
//         }
//     }
// }

//!selection-sort ile siralanmis dizi ornegi
// void yazdir(int dizi[], int eleman_sayisi);
// void selection(int dizi[], int eleman_sayisi);
// int main() {
//     int N;
//     printf("dizinin eleman sayisini giriniz:");
//     scanf("%d", &N);
//     int dizi[N];
//     printf("dizinin elemanlarini giriniz:\n");
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &dizi[i]);
//     }
//     printf("olusturulan dizi:\n");
//     yazdir(dizi, N);
//     selection(dizi, N);
//     printf("\nselection sort ile siralanmis diiz:\n");
//     yazdir(dizi, N);
// }
// void yazdir(int dizi[], int eleman_sayisi) {
//     for (int i = 0; i < eleman_sayisi; i++) {
//         printf("%d,", dizi[i]);
//     }
// }
// void selection(int dizi[], int eleman_sayisi) {
//     int en_kucuk_index;
//     for (int i = 0; i < eleman_sayisi - 1; i++) {
//         en_kucuk_index = i;
//         for (int j = i + 1; j < eleman_sayisi; j++) {
//             if (dizi[en_kucuk_index] > dizi[j]) {
//                 en_kucuk_index = j;
//             }
//         }
//         if (en_kucuk_index != i) {
//             int temp = dizi[i];
//             dizi[i] = dizi[en_kucuk_index];
//             dizi[en_kucuk_index] = temp;
//         }
//     }
// }

//!insertion sort ile siralama yapan program
// void yazdir(int dizi[], int eleman_sayisi);
// void insertion(int dizi[], int eleman_sayisi);
// int main() {
//     int N;
//     printf("dizinin eleman sayisini giriniz:");
//     scanf("%d", &N);
//     int dizi[N];
//     printf("dizinin elemanlarini giriniz:\n");
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &dizi[i]);
//     }
//     printf("olusturulan dizi:\n");
//     yazdir(dizi, N);
//     insertion(dizi, N);
//     printf("\ninsertion sort ile siralanmis diiz:\n");
//     yazdir(dizi, N);
// }
// void yazdir(int dizi[], int eleman_sayisi) {
//     for (int i = 0; i < eleman_sayisi; i++) {
//         printf("%d,", dizi[i]);
//     }
// }
// void insertion(int dizi[], int N) {
//     int temp, j, i;
//     for (i = 1; i < N; i++) {
//         temp = dizi[i];
//         j = i - 1;
//         while (j >= 0 && dizi[j] > temp) {
//             dizi[j + 1] = dizi[j];
//             j = j - 1;
//         }
//         dizi[j + 1] = temp;
//     }
// }

//!dizideki tekrar eden elemanlari bulan program,bubble sort ile siralanmis dizide bulunmasi
// #define  MAX 100
// int bul(int dizi[], int eleman_sayisi, int tekrar[]);
// void yazdir(int dizi[], int eleman_sayisi);
// int sirala(int dizi[], int eleman_sayisi);
// int main() {
//     int N;
//     printf("dizinin eleman sayisini giriniz:\n");
//     scanf("%d", &N);
//     int dizi[N];
//     printf("\ndizinin elemanlarini giriniz:");
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &dizi[i]);
//     }
//     printf("\nolusturulan dizi:\n");
//     yazdir(dizi, N);
//     sirala(dizi, N);
//     printf("\nsiralanmis dizi:\n");
//     yazdir(dizi, N);
//     int sonuc[MAX] = {0};
//     int tekrar_sayisi = bul(dizi, N, sonuc);
//     printf("\ntekrar eden elemanlar:\n");
//     yazdir(sonuc, tekrar_sayisi);
// }
// int bul(int dizi[], int eleman_sayisi, int tekrar[]) {
//     int tekrar_index = 0;
//     for (int j = 0; j < eleman_sayisi; j++) {
//         tekrar[j] = 0;
//     }
//     for (int i = 0; i < eleman_sayisi - 1; i++) {
//         if (dizi[i] == dizi[i + 1]) {
//             if (tekrar_index == 0 || tekrar[tekrar_index - 1] != dizi[i]) {
//                 tekrar[tekrar_index] = dizi[i];
//                 tekrar_index++;
//             }
//         }
//     }
//     return tekrar_index;
// }
// void yazdir(int dizi[], int eleman_sayisi) {
//     for (int i = 0; i < eleman_sayisi; i++) {
//         printf("%d ", dizi[i]);
//     }
// }
// int sirala(int dizi[], int eleman_sayisi) {
//     for (int i = 0; i < eleman_sayisi; i++) {
//         for (int j = 0; j < eleman_sayisi - 1; j++) {
//             if (dizi[i] < dizi[j]) {
//                 int temp = dizi[i];
//                 dizi[i] = dizi[j];
//                 dizi[j] = temp;
//             }
//         }
//     }
// }
//*2.cozum
// void tekrar_eden(int dizi[], int n);
// int main() {
//     int n;
//     printf("dizinin eleman saysini giriniz:");
//     scanf("%d", &n);
//     int dizi[n];
//     printf("dizinin elemanlarini giriniz:");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &dizi[i]);
//     }
//     printf("\n\n");
//     tekrar_eden(dizi, n);
// }
// void tekrar_eden(int dizi[], int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (dizi[i] == dizi[j]) {
//                 int tekrar_yazildi = 0;
//                 for (int k = 0; k < i; k++) {
//                     if (dizi[k] == dizi[i]) {
//                         tekrar_yazildi = 1;
//                         break;
//                     }
//                 }
//                 if (!tekrar_yazildi) {
//                     printf("%d ", dizi[i]);
//                 }
//                 break;
//             }
//         }
//     }
//     printf("\n");
// }

//!2 diziyi siralayip siralanmis dizinin birlestirilmis hali
// void yazdir(int dizi[], int N);
// int birlestir(int dizi1[], int dizi2[], int b1, int b2, int birlesik[]);
// int sirala(int dizi[], int eleman_sayisi);
// int main() {
//     int b1, b2;
//     printf("\n1.dizinin boyutunu giriniz:\n");
//     scanf("%d", &b1);
//     int dizi1[b1];
//     printf("\n1.dizinin elemanlarini griiniz:\n");
//     for (int i = 0; i < b1; i++) {
//         scanf("%d", &dizi1[i]);
//     }
//     printf("\n2.dizinin boyutunu giriniz:\n");
//     scanf("%d", &b2);
//     int dizi2[b2];
//     printf("\n2.dizinin elemanlarini giriniz:\n");
//     for (int i = 0; i < b2; i++) {
//         scanf("%d", &dizi2[i]);
//     }
//     printf("\n1.dizi:\n");
//     yazdir(dizi1, b1);
//     printf("\n2.dizi:\n");
//     yazdir(dizi2, b2);
//     printf("\n1.dizinin siralanmis hali:\n");
//     sirala(dizi1, b1);
//     yazdir(dizi1, b1);
//     printf("\n2.dizinin siralanmis hali:\n");
//     sirala(dizi2, b2);
//     yazdir(dizi2, b2);
//     int birles[b1 + b2];
//     for (int i = 0; i < b1 + b2; i++) {
//         birles[i] = 0;
//     }
//     birlestir(dizi1, dizi2, b1, b2, birles);
//     printf("\nolusturulan birlesik dizi:\n");
//     yazdir(birles, b1 + b2);
//     printf("\nbirlesik dizinin siralanmis hali:\n");
//     sirala(birles,b1+b2);
//     yazdir(birles,b1+b2);
// }
// void yazdir(int dizi[], int N) {
//     for (int i = 0; i < N; i++) {
//         printf("%d ", dizi[i]);
//     }
// }
// int birlestir(int dizi1[], int dizi2[], int b1, int b2, int birlesik[]) {
//     int birlesik_index = 0;
//     for (int i = 0; i < b1; i++) {
//         birlesik[birlesik_index] = dizi1[i];
//         birlesik_index++;
//     }
//     for (int j = 0; j < b2; j++) {
//         birlesik[birlesik_index + j] = dizi2[j];
//     }
//     return birlesik;
// }
// int sirala(int dizi[], int eleman_sayisi) {
//     for (int i = 0; i < eleman_sayisi; i++) {
//         for (int j = i + 1; j < eleman_sayisi; j++) {
//             if (dizi[j] < dizi[i]) {
//                 int temp = dizi[i];
//                 dizi[i] = dizi[j];
//                 dizi[j] = temp;
//             }
//         }
//     }
// }

// //!dizideki en buyuk 2.elemani bulan program
// int bul(int dizi[], int eleman_sayisi);
// int main() {
//     int n;
//     printf("dizinin eleman sayisini giriniz:");
//     scanf("%d", &n);
//     int dizi[n];
//     printf("dizinin elemanlarini giriniz:");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &dizi[i]);
//     }
//     printf("\nolusturulan dizi:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", dizi[i]);
//     }
//     int ikinci = bul(dizi, n);
//     printf("\nolusturulan dizide ikinci en buyuk 2. eleman:%d", ikinci);
// }
// int bul(int dizi[], int eleman_sayisi) {
//     int enb, ikinci_enbuyuk;
//     int i = 0;
//     if (dizi[0] > dizi[1]) {
//         enb = dizi[0];
//         ikinci_enbuyuk = dizi[1];
//     } else {
//         enb = dizi[1];
//         ikinci_enbuyuk = dizi[0];
//     }
//     for (int j = 2; j < eleman_sayisi; j++) {
//         if (dizi[j] > enb) {
//             enb = dizi[j];
//             ikinci_enbuyuk = dizi[j - 1];
//         } else if (dizi[j] > ikinci_enbuyuk && dizi[j] < enb) {
//             ikinci_enbuyuk = dizi[j];
//         }
//     }
//     return ikinci_enbuyuk;
// }

// //!diziddeki en kucuk 2.elemani bulan program
// int bul(int dizi[], int eleman_sayisi);
// int main() {
//     int n;
//     printf("dizinin eleman sayisini giriniz:");
//     scanf("%d", &n);
//     int dizi[n];
//     printf("dizinin elemanlarini giriniz:");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &dizi[i]);
//     }
//     printf("\nolusturulan dizi:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", dizi[i]);
//     }
//     int ikinci = bul(dizi, n);
//     printf("\nolusturulan dizide ikinci en kucuk eleman:%d", ikinci);
// }
// int bul(int dizi[], int eleman_sayisi) {
//     int enk, ikinci_enkucuk;
//     int i = 0;
//     if (dizi[0] < dizi[1]) {
//         enk = dizi[0];
//         ikinci_enkucuk = dizi[1];
//     } else {
//         enk = dizi[1];
//         ikinci_enkucuk = dizi[0];
//     }
//     for (int j = 2; j < eleman_sayisi; j++) {
//         if (dizi[j] < enk) {
//             enk = dizi[j];
//             ikinci_enkucuk = dizi[j - 1];
//         } else if (dizi[j] < ikinci_enkucuk && dizi[j] < enk) {
//             ikinci_enkucuk = dizi[j];
//         }
//     }
//     return ikinci_enkucuk;
// }

//!dizizdeki tekrar edden elemanlari kadliran program
// void yazdir(int dizi[], int boyut);
// int kaldir(int dizi[], int boyut, int yeni_dizi[]);
// int sirala(int dizi[], int boyut);
// int main() {
//     int n;
//     printf("dizinin boyutunu giriniz:");
//     scanf("%d", &n);
//     int dizi[n];
//     printf("dizinin elemanlarini gririniz:");
//     printf("\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &dizi[i]);
//     }
//     printf("\n");
//     printf("olusturdugunuz dizi:\n");
//     yazdir(dizi, n);
//     printf("\nolusturdugunuz dizinin sirlanmis hali:\n");
//     sirala(dizi, n);
//     yazdir(dizi, n);
//     int yeni_dizi[n];
//     for (int i = 0; i < n; i++) {
//         yeni_dizi[i] = 0;
//     }
//     int boyut = kaldir(dizi, n, yeni_dizi);
//     printf("\nolusturdgunuz dizinin tekrarlanan elemanlarinin kaldirilmis hali:\n");
//     yazdir(yeni_dizi, boyut);
// }
// void yazdir(int dizi[], int boyut) {
//     for (int i = 0; i < boyut; i++) {
//         printf("%d ", dizi[i]);
//     }
// }
// int kaldir(int dizi[], int boyut, int yeni_dizi[]) {
//     int yeni_index = 0;
//     for (int i = 0; i < boyut; i++) {
//         int tekrar_var = 0;
//         for (int j = 0; j < boyut; j++) {
//             if (dizi[i] == yeni_dizi[j]) {
//                 tekrar_var = 1;
//                 break;
//             }
//         }
//         if (tekrar_var == 0) {
//             yeni_dizi[yeni_index] = dizi[i];
//             yeni_index++;
//         }
//     }
//     return yeni_index;
// }
// int sirala(int dizi[], int boyut) {
//     for (int i = 0; i < boyut; i++) {
//         for (int j = i + 1; j < boyut; j++) {
//             if (dizi[i] > dizi[j]) {
//                 int temp = dizi[i];
//                 dizi[i] = dizi[j];
//                 dizi[j] = temp;
//             }
//         }
//     }
// }

//!iki matrisin toplamini fonksiyonda ayrıca bulan program
// int toplam(int boyut, int matris1[][boyut], int matris2[][boyut], int sonuc[][boyut]);
// int main()
// {
//     int boyut;
//     printf("matrislerin boyutunu giriniz:");
//     scanf("%d", &boyut);
//     int matris1[boyut][boyut], matris2[boyut][boyut], sonuc[boyut][boyut];
//     printf("1.matrisin elemanlarini giriniz:");
//     for (int i = 0; i < boyut; i++)
//     {
//         for (int j = 0; j < boyut; j++)
//         {
//             scanf("%d", &matris1[i][j]);
//         }
//     }
//     printf("\n2.matrisin elemanlarini giriniz:\n");
//     for (int i = 0; i < boyut; i++)
//     {
//         for (int j = 0; j < boyut; j++)
//         {
//             scanf("%d", &matris2[i][j]);
//         }
//     }
//     printf("\n1.matris:\n");
//     for (int i = 0; i < boyut; i++)
//     {
//         for (int j = 0; j < boyut; j++)
//         {
//             printf("%d\t", matris1[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n2.matris:\n");
//     for (int i = 0; i < boyut; i++)
//     {
//         for (int j = 0; j < boyut; j++)
//         {
//             printf("%d\t", matris2[i][j]);
//         }
//         printf("\n");
//     }
//     for (int j = 0; j < boyut; j++)
//     {
//         for (int i = 0; i < boyut; i++)
//         {
//             sonuc[j][i] = 0;
//         }
//     }
//     toplam(boyut, matris1, matris2, sonuc);
//     printf("\n2 matrisin toplami:\n");
//     for (int i = 0; i < boyut; i++)
//     {
//         for (int j = 0; j < boyut; j++)
//         {
//             printf("%d\t", sonuc[i][j]);
//         }
//         printf("\n");
//     }
// }
// int toplam(int boyut, int matris1[][boyut], int matris2[][boyut], int sonuc[][boyut])
// {
//     for (int i = 0; i < boyut; i++)
//     {
//         for (int j = 0; j < boyut; j++)
//         {
//             sonuc[i][j] = matris1[i][j] + matris2[i][j];
//         }
//     }
// }

//!2 matrisin carpimini fonksiyonla yazan program
// int carp(int r1, int c1, int matris1[][c1], int r2, int c2, int matris2[][c2], int sonuc[][c2]);
// int main()
// {
//     int r1, r2, c1, c2;
//     printf("1.matrisin satir sayisini giriniz:");
//     scanf("%d", &r1);
//     printf("1.matrisin sutun sayisini giriniz:");
//     scanf("%d", &c1);
//     printf("2.matrisin satir sayisini giriniz:");
//     scanf("%d", &r2);
//     printf("2.matrisin sutun sayisini giriniz:");
//     scanf("%d", &c2);
//     int matris1[r1][c1];
//     int matris2[r2][c2];
//     printf("\n1.matrisin elemanlarini giriniz:\n");
//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c1; j++)
//         {
//             scanf("%d", &matris1[i][j]);
//         }
//     }
//     printf("\n2.matrisin elemanlarini giriniz:\n");
//     for (int i = 0; i < r2; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             scanf("%d", &matris2[i][j]);
//         }
//     }
//     printf("\n1.matris:\n");
//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c1; j++)
//         {
//             printf("%d\t", matris1[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n2.matris:\n");
//     for (int i = 0; i < r2; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             printf("%d\t", matris2[i][j]);
//         }
//         printf("\n");
//     }
//     int sonuc[r1][c2];
//     carp(r1, c1, matris1, r2, c2, matris2, sonuc);
//     printf("\n2matrisin carpimi:\n");
//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             printf("%d\t", sonuc[i][j]);
//         }
//         printf("\n");
//     }
// }
// int carp(int r1, int c1, int matris1[][c1], int r2, int c2, int matris2[][c2], int sonuc[][c2])
// {
//     if (c1 != r2)
//     {
//         printf("matrisiniz carpilmaya uygun degil");
//         return 0;
//     }
//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             sonuc[i][j] = 0;
//             for (int k = 0; k < c1; k++)
//             {
//                 sonuc[i][j] += matris1[i][k] * matris2[k][j];
//             }
//         }
//     }
// }

//!matrisin tranpozunu fonksiyonla bulan program
// int transpoz(int sutun, int satir, int matris[][sutun], int transpoz_matris[][satir]);
// int main() {
//     int satir, sutun;
//     printf("matrisin satir sayisini giriniz:");
//     scanf("%d", &satir);
//     printf("matriisn sutun sayisini giriniz:");
//     scanf("%d", &sutun);
//     int matris[satir][sutun];
//     printf("matrisin degerlerini giriniz");
//     for (int i = 0; i < satir; i++) {
//         for (int j = 0; j < sutun; j++) {
//             scanf("%d", &matris[i][j]);
//         }
//     }
//     printf("\nolusturdgunuz matris:\n");
//     for (int i = 0; i < satir; i++) {
//         for (int j = 0; j < sutun; j++) {
//             printf("%d ", matris[i][j]);
//         }
//         printf("\n");
//     }
//     int transpoz_matris[sutun][satir];
//     transpoz(sutun, satir, matris, transpoz_matris);
//     printf("\nmatrisin transpozu:\n");
//     for (int i = 0; i < sutun; i++) {
//         for (int j = 0; j < satir; j++) {
//             printf("%d ", transpoz_matris[i][j]);
//         }
//         printf("\n");
//     }
// }
// int transpoz(int sutun, int satir, int matris[][sutun], int tranpsoz_matris[][satir]) {
//     for (int i = 0; i < satir; i++) {
//         for (int j = 0; j < sutun; j++) {
//             tranpsoz_matris[j][i] = matris[i][j];
//         }
//     }
// }

//!matrisin satir toplamini fonksiyonla ayzdiran program
// void satir_toplam(int satir, int sutun, int matris[][sutun]);
// int main() {
//    int satir, sutun;
//    printf("matrisin satir degerini griniz:\n");
//    scanf("%d", &satir);
//    printf("matrisin sutun degerini giriniz:\n");
//    scanf("%d", &sutun);
//    int matris[satir][sutun];
//    printf("\nmatrisin degerlerini giriniz:\n");
//    for (int i = 0; i < satir; i++) {
//       for (int j = 0; j < sutun; j++) {
//          scanf("%d", &matris[i][j]);
//       }
//    }
//    printf("\nolusturulan mtris:\n");
//    for (int i = 0; i < satir; i++) {
//       for (int j = 0; j < sutun; j++) {
//          printf("%d ", matris[i][j]);
//       }
//       printf("\n");
//    }
//    satir_toplam(satir, sutun, matris);
// }
// void satir_toplam(int satir, int sutun, int matris[][sutun]) {
//    for (int i = 0; i < satir; i++) {
//       int toplam = 0;
//       for (int j = 0; j < sutun; j++) {
//          toplam += matris[i][j];
//       }
//       printf("%d.satirin toplami:%d\n", i + 1, toplam);
//    }
// }

//!matrisi birim matrisse fonksiyonla ceviren program
// void birim_matris(int satir, int sutun, int matris[][sutun]);
// int main() {
//    int satir, sutun;
//    printf("matrisin satir degerini griniz:\n");
//    scanf("%d", &satir);
//    printf("matrisin sutun degerini giriniz:\n");
//    scanf("%d", &sutun);
//    int matris[satir][sutun];
//    printf("\nmatrisin degerlerini giriniz:\n");
//    for (int i = 0; i < satir; i++) {
//       for (int j = 0; j < sutun; j++) {
//          scanf("%d", &matris[i][j]);
//       }
//    }
//    printf("\nolusturulan matris:\n");
//    for (int i = 0; i < satir; i++) {
//       for (int j = 0; j < sutun; j++) {
//          printf("%d ", matris[i][j]);
//       }
//       printf("\n");
//    }
//    birim_matris(satir, sutun, matris);
//    printf("\nmatrisin yeni hali:\n");
//    for (int i = 0; i < satir; i++) {
//       for (int j = 0; j < sutun; j++) {
//          printf("%d ", matris[i][j]);
//       }
//          printf("\n");
//    }
// }
// void birim_matris(int satir, int sutun, int matris[][sutun]) {
//    for (int i = 0; i < satir; i++) {
//       for (int j = 0; j < sutun; j++) {
//         matris[i][j] =1;
//       }
//    }
// }

//!toupper fonksiyonunu kullanmadan girilen kelimeyi büyük harfe ceviren fonksiyonla yazilmis program
// int buyuk_harf(char kelime[]);
// int uzunluk_bul(char kelime[]);
// int main() {
//     char kelime[50];
//     printf("kelime giriniz:");
//     gets(kelime);
//     int uzunluk=uzunluk_bul(kelime);
//     printf("girdiginiz kelimenin uzunlugu:%d\n",uzunluk);
//     printf("girdiginiz kelime:");
//     puts(kelime);
//     buyuk_harf(kelime);
//     printf("olusan yeni kelime:");
//     puts(kelime);
// }
// int uzunluk_bul(char kelime[]) {
//     int i=0;
//     int uzunluk=0;
//     while (kelime[i]!='\0') {
//        uzunluk++;
//         i++;
//     }
//     return uzunluk;
// }
// int buyuk_harf(char kelime[]){
//     int i=0;
//   while (kelime[i]!='\0') {
//     if (kelime[i]>='a' && kelime[i]<='z') {
//         kelime[i]=kelime[i]-32;
//     }
//       i++;
//   }

//!araya zaman ekleme
// #include <windows.h>
// int main(int argc, char* argv[]) {
//     for (int i=10;i>=1;i--) {
//         Sleep(1000);
//         printf("%d\n",i);
//     }
// }

//! Soru Tersten Yeni Kelime Oluşturma (Reverse Copy)
// Senaryo: Kullanıcıdan bir kelime alınız. Bu kelimeyi kelimeTersle isminde bir fonksiyona gönderiniz.
// Fonksiyon, kendisine gelen kelimenin ters çevrilmiş halini tutan YENİ bir bellek alanı
// (malloc ile) oluşturmalı ve bu yeni alanı döndürmelidir. Orijinal kelime bozulmamalıdır.
// char *kelimeTersle(char *kelime,int uzunluk);
// int main() {
//     char *kelime=(char*)malloc(sizeof(char)*100);
//     printf("bir kelime giriniz:");
//     gets(kelime);
//     printf("girdiginiz kelime:");
//     puts(kelime);
//     int i=0;
//     while (*(kelime+i)!='\0') {
//         i++;
//     }
// char *ters=kelimeTersle(kelime,i);
//     puts(ters);
// }
// char *kelimeTersle(char *kelime,int uzunluk) {
// int i=0;
//     char *sonuc=(char*)malloc(sizeof(char)*(uzunluk+1));
//    for (int i=0;*(kelime+i)!='\0';i++) {
//        *(sonuc+i)=*(kelime+(uzunluk-i-1));
//    }
//     *(sonuc+uzunluk)='\0';
//     return sonuc;
// }

//!Soru : İstenmeyen Karakteri Temizleme (Filter Char) 
// Senaryo: Kullanıcıdan bir kelime ve "silinecek bir harf" (char) alınız.
// Bunları harfTemizle fonksiyonuna gönderiniz. Fonksiyon, o harfin çıkarıldığı yeni bir string oluşturup
// döndürmelidir.
// Kurallar:
// [] yasak.
// Hazır fonksiyon yasak.
// Dinamik bellek (malloc) şart.
// char *harf_temizle(char *kelime, int boyut, char silinecek);
// int main() {
//     char *kelime = (char *) malloc(sizeof(char) * 100);
//     printf("bir kelime giriniz:");
//     gets(kelime);
//     printf("girdiginiz kelime:");
//     puts(kelime);
//     char harf;
//     printf("silinecek harfi giriniz:");
//     scanf(" %c", &harf);
//     int i = 0;
//     while (*(kelime + i) != '\0') {
//         i++;
//     }
//     char *sonuc = harf_temizle(kelime, i, harf);
//     printf("olusan yeni kelime:\n");
//     puts(sonuc);
// }
// char *harf_temizle(char *kelime, int boyut, char silinecek) {
//     int adet = 0;
//     for (int i = 0; i < boyut; i++) {
//         if (*(kelime + i) == silinecek) {
//             adet++;
//         }
//     }
//     char *yeni = (char *) malloc(sizeof(char) * (boyut - adet + 1));
//     int i = 0;
//     int j = 0;
//     while (*(kelime + i) != '\0') {
//         if (*(kelime + i) != silinecek) {
//             *(yeni + j) = *(kelime + i);
//             j++;
//         }
//         i++;
//     }
//     *(yeni + j) = '\0';
//     return yeni;
// }

//! Soru : Fermuar Yöntemi ile Birleştirme (Interleave)
// Senaryo: Hocanın sorduğu soruya en çok benzeyen ama mantığı bir tık daha zor olan soru.
// Kullanıcıdan eşit uzunlukta iki kelime alınız (eşit girileceği varsayılacak).
// fermuarBirlestir fonksiyonu bu iki kelimeyi bir ondan bir bundan alarak birleştirmelidir.
// Örnek:
// Kelime: top
// Kelime: kek
// Sonuç: tkoepk
// Mantık:
// 1.kelimenin 1. harfi,
// 2.kelimenin 1. harfi,
// 1.kelimenin 2. harfi... şeklinde gidecek.
// Bellek boyutu: (kelime1_uzunluk + kelime2_uzunluk + 1) olmalı.
// char *fermuar_birlestir(char *kelime1, char *kelime2, int boyut1, int boyut2);
// int main() {
//     char *kelime1 = (char *) malloc(100 * sizeof(char));
//     char *kelime2 = (char *) malloc(100 * sizeof(char));
//     printf("1.kelimeyi giriniz:");
//     gets(kelime1);
//     printf("2.kelimeyi giriniz:");
//     gets(kelime2);
//     int boyut1 = 0, boyut2 = 0;
//     while (*(kelime1 + boyut1) != '\0') {
//         boyut1++;
//     }
//     while (*(kelime2 + boyut2) != '\0') {
//         boyut2++;
//     }
//     printf("1.kelime:");
//     puts(kelime1);
//     printf("2.kelime:");
//     puts(kelime2);
//     printf("1.kelimenin uzunlugu:%d\n", boyut1);
//     printf("2.kelimenin uzunlugu:%d\n", boyut2);
//     char *sonuc = fermuar_birlestir(kelime1, kelime2, boyut1, boyut2);
//     printf("sonuc:");
//     puts(sonuc);
// }
// char *fermuar_birlestir(char *kelime1, char *kelime2, int boyut1, int boyut2) {
//     char *sonuc = (char *) malloc(sizeof(char) * (boyut1 + boyut2 + 1));
//     int i = 0, j = 0, k = 0;
//     while (i < boyut1 & j < boyut2) {
//         *(sonuc + k) = *(kelime1 + i);
//         k++;
//         i++;
//         *(sonuc + k) = *(kelime2 + j);
//         k++;
//         j++;
//         if (k == boyut1 + boyut2 + 1)
//             break;
//     }
//     while (i < boyut1) {
//         *(sonuc + k) = *(kelime1 + i);
//         k++;
//         i++;
//     }
//     while (j < boyut2) {
//         *(sonuc + k) = *(kelime2 + j);
//         k++;
//         i++;
//     }
//     *(sonuc + k) = '\0';
//     return sonuc;
// }

//!Soru : Ayna Efekti (Mirror Append)
// Senaryo: Kullanıcıdan bir kelime alınız. Fonksiyon, kelimenin kendisi ile ters çevrilmiş halini bitişik
//  olarak döndürmelidir.
// Fonksiyon: char* aynaOlustur(char *s)
// Örnek:
// Girdi: kabak
// Çıktı: kabakkabak (Palindrom ise aynısı)
// Girdi: ali
// Çıktı: alila
//?1.çözüm
// char *ayna_olustur(char *kelime, int uzunluk);
// int main() {
//     char *kelime = (char *) malloc(sizeof(char) * 100);
//     printf("bir kelime giriniz:");
//     gets(kelime);
//     int uzunluk = 0;
//     while (*(kelime + uzunluk) != '\0') {
//         uzunluk++;
//     }
//     char *sonuc = ayna_olustur(kelime, uzunluk);
//     puts(sonuc);
//     free(kelime);
// }
// char *ayna_olustur(char *kelime, int uzunluk) {
//     int i = 0;
//     int k = 0;
//     int j = 0;
//     char *ters = (char *) malloc(sizeof(char) * (uzunluk + 1));
//     char *birlestir = (char *) malloc(sizeof(char) * ((2 * uzunluk) + 1));
//     while (*(kelime + i) != '\0') {
//         *(ters + k) = *(kelime + (uzunluk - i - 1));
//         i++;
//         k++;
//     }
//     *(ters + k) = '\0';
//     i = 0;
//     while (*(kelime + i) != '\0') {
//         *(birlestir + j) = *(kelime + i);
//         j++;
//         i++;
//     }
//     k = 1;
//     while (*(ters + k) != '\0') {
//         *(birlestir + j) = *(ters + k);
//         k++;
//         j++;
//     }
//     *(birlestir + j) = '\0';
//     return birlestir;
// }
//?2.çözüm
// char *ayna_olustur(char *kelime, int uzunluk);
// char *tersi(char *kelime, int uzunluk);
// int main() {
//     char *kelime = (char *) malloc(sizeof(char) * 100);
//     printf("bir kelime giriniz:");
//     gets(kelime);
//     int uzunluk = 0;
//     while (*(kelime + uzunluk) != '\0') {
//         uzunluk++;
//     }
//     char *sonuc = ayna_olustur(kelime, uzunluk);
//     puts(sonuc);
// }
// char *tersi(char *kelime, int uzunluk) {
//     int i = 0;
//     int k = 0;
//     char *ters = (char *) malloc(sizeof(char) * (uzunluk + 1));
//     while (*(kelime + i) != '\0') {
//         *(ters + k) = *(kelime + (uzunluk - i - 1));
//         k++;
//         i++;
//     }
//     *(ters + k) = '\0';
//     return ters;
// }
// char *ayna_olustur(char *kelime, int uzunluk) {
//     char *ters = tersi(kelime, uzunluk);
//     int i = 0;
//     int j = 1;
//     int k = 0;
//     char *birlesmis = (char *) malloc(sizeof(2 * uzunluk + 1));
//     while (*(kelime + i) != '\0') {
//         *(birlesmis + k) = *(kelime + i);
//         k++;
//         i++;
//     }
//     while (*(ters + j) != '\0') {
//         *(birlesmis + k) = *(ters + j);
//         k++;
//         j++;
//     }
//     *(birlesmis + k) = '\0';
//     return birlesmis;
// }
// 

//! Soru : URL Kodlama Mantığı (Space Replacer)
// Senaryo: Kullanıcıdan birden fazla kelimeden oluşan bir cümle (string) alınız.
// String içindeki her boşluk (' ') karakteri yerine "-ARA-" (5 karakter) stringini koyarak yeni bir yapı
// oluşturunuz.
// Fonksiyon: char* boslukDoldur(char *s)
// Örnek:
// Girdi: ali eve gel
// Çıktı: ali-ARA-eve-ARA-gel
// Zorluk: 1 boşluk karakteri çıkıyor, yerine 5 karakter giriyor.
// Malloc boyutu: Uzunluk + (BoşlukSayisi * 4) + 1
// char *boslukdoldur(char *cumle);
// int main() {
//     char *cumle = (char *) malloc(sizeof(char) * 100);
//     printf("bir kelime giriniz:");
//     gets(cumle);
//     printf("girdigiiniz cumle:");
//     puts(cumle);
//     char *sonuc = boslukdoldur(cumle);
//     printf("olusan yeni cumle:");
//     puts(sonuc);
// }
// char *boslukdoldur(char *cumle) {
//     int i = 0;
//     int bosluk = 0;
//     while (*(cumle + i) != '\0') {
//         if (*(cumle + i) == ' ') {
//             bosluk++;
//         }
//         i++;
//     }
//     char *yeni = (char *) malloc(sizeof(char) * (i + (bosluk * 4) + 1));
//     i = 0;
//     int j = 0;
//     char *kelime = "-ARA-";
//     while (*(cumle + i) != '\0') {
//         if (*(cumle + i) == ' ') {
//             int k = 0;
//             while (*(kelime + k) != '\0') {
//                 *(yeni + j) = *(kelime + k);
//                 j++;
//                 k++;
//             }
//         } else {
//             *(yeni + j) = *(cumle + i);
//             j++;
//         }
//         i++;
//     }
//     *(yeni + j) = '\0';
//     return yeni;
// }

//! Soru : Ortaya Ekleme (Insert Middle)
// Senaryo: Kullanıcıdan iki kelime alınız (s1 ve s2). İkinci kelimeyi, birinci kelimenin tam ortasına
// yerleştiriniz. (s1 uzunluğu tek ise ortadaki harften sonraya).
// Fonksiyon: char* ortayaGom(char *s1, char *s2)
// Örnek:
// s1: masa (4 harf, orta 2. harf sonu), s2: büyük
// Çıktı: mabüyükasa
// char *ortayaGom(char *kelime1, char *kelime2);
// int main() {
//     char *kelime1 = (char *) malloc(sizeof(char) * 100);
//     char *kelime2 = (char *) malloc(sizeof(char) * 100);
//     printf("1.kelimeyi giriniz:");
//     gets(kelime1);
//     printf("2.kelimeyi giriniz:");
//     gets(kelime2);
//     char *sonuc = ortayaGom(kelime1, kelime2);
//     puts(sonuc);
// }
// char *ortayaGom(char *kelime1, char *kelime2) {
//     int u1 = 0, u2 = 0;
//     int k = 0;
//     while (*(kelime1 + u1) != '\0') {
//         u1++;
//     }
//     while (*(kelime2 + u2) != '\0') {
//         u2++;
//     }
//     char *yeni = (char *) malloc(sizeof(char) * (u1 + u2 + 1));
//     int i = 0;
//     for (int i = 0; i < u1 / 2; i++) {
//         *(yeni + k) = *(kelime1 + i);
//         k++;
//     }
//     int j = 0;
//     while (*(kelime2 + j) != '\0') {
//         *(yeni + k) = *(kelime2 + j);
//         j++;
//         k++;
//     }
//     for (int j = u1 / 2; *(kelime1 + j) != '\0'; j++) {
//         *(yeni + k) = *(kelime1 + j);
//         k++;
//     }
//     *(yeni + k) = '\0';
//     return yeni;
// }

//! Soru : Tekrarları Temizle (Unique Char Copy)
// Senaryo: Kullanıcıdan bir kelime alınız. Yan yana aynı olan karakterleri teke düşürerek yeni bir string
// oluşturunuz.
// Fonksiyon: char* sadelestir(char *s)
// Örnek:
// Girdi: aaabbbccca
// Çıktı: abca
// char *sadelestir(char *kelime);
// int main() {
//     char *kelime = (char *) malloc(sizeof(char) * 100);
//     printf("bir kelime giriniz:");
//     gets(kelime);
//     printf("girdiginiz kelime:");
//     puts(kelime);
//     char *sonuc = sadelestir(kelime);
//     printf("sadelestirilen kelime:");
//     puts(sonuc);
//     free(kelime);
// }
// char *sadelestir(char *kelime) {
//     int i = 0;
//     int uzunluk = 0;
//     while (*(kelime + uzunluk) != '\0') {
//         uzunluk++;
//     }
//     int adet = uzunluk;
//     int j = 0;
//     while (*(kelime + i) != '\0') {
//         if (*(kelime + i) == *(kelime + i + 1)) {
//             adet--;
//         }
//         i++;
//     }
//     char *yeni = (char *) malloc(sizeof(char) * (adet + 1));
//     i = 0;
//     while (*(kelime + i) != '\0') {
//         if (*(kelime + i) != *(kelime + i + 1)) {
//             *(yeni + j) = *(kelime + i);
//             j++;
//         }
//         i++;
//     }
//     *(yeni + j) = '\0';
//     return yeni;
// }

//! Soru : Çapraz Kesim (Cross Cut)
// Senaryo: Kullanıcıdan iki kelime alınız. Birinci kelimenin ilk yarısı ile
// İkinci kelimenin ikinci yarısını birleştirip döndürünüz.
// Fonksiyon: char* melezKelime(char *s1, char *s2)
// Örnek:
// s1: yazilim (7 harf, ilk yarı 3 al: yaz)
// s2: muhendis (8 harf, ikinci yarı 4 al: ndis)
// Çıktı: yazndis
// char *melezKelime(char *kelime1, char *kelime2);
// int main() {
//     char *kelime1 = (char *) malloc(sizeof(char) * 100);
//     char *kelime2 = (char *) malloc(sizeof(char) * 100);
//     printf("1.kelimeyi giriniz:");
//     gets(kelime1);
//     printf("2.kelimeyi giriniz:");
//     gets(kelime2);
//     char *sonuc = melezKelime(kelime1, kelime2);
//     printf("sonuc:");
//     puts(sonuc);
// }
// char *melezKelime(char *kelime1, char *kelime2) {
//     int u1 = 0, u2 = 0;
//     while (*(kelime1 + u1) != '\0') {
//         u1++;
//     }
//     while (*(kelime2 + u2) != '\0') {
//         u2++;
//     }
//     int boyut = (u1 / 2) + (u2 / 2) + 1;
//     char *yeni = (char *) malloc(sizeof(char) * boyut);
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     for (int i = 0; i < u1 / 2; i++) {
//         *(yeni + k) = *(kelime1 + i);
//         k++;
//     }
//     for (int j = u2 / 2; *(kelime2 + j) != '\0'; j++) {
//         *(yeni + k) = *(kelime2 + j);
//         k++;
//     }
//     *(yeni + k) = '\0';
//     return yeni;
// }

//! Soru : ASCII Kaydırma ve Tersleme (Shift & Reverse)
// Senaryo: Kullanıcıdan bir kelime alınız. Her harfin ASCII değerini 1 artırınız
// (a->b, b->c). Elde edilen bu yeni kelimeyi bir de ters çevirip döndürünüz.
// Fonksiyon: char* sifrele(char *s)
// Örnek:
// Girdi: abc
// Ara İşlem (+1): bcd
// Sonuç (Ters): dcb
// char *sifrele(char *kelime);
// int main() {
//     char *kelime = (char *) malloc(100 * sizeof(char));
//     printf("bir kelime giriniz:");
//     gets(kelime);
//     printf("girdiigniz kelime:");
//     puts(kelime);
//     printf("\nolusan yeni kelime:");
//     char *sonuc = sifrele(kelime);
//     puts(sonuc);
// }
// char *sifrele(char *kelime) {
//     int uzunluk = 0;
//     while (*(kelime + uzunluk) != '\0') {
//         uzunluk++;
//     }
//     char *ters = (char *) malloc(sizeof(char) * (uzunluk + 1));
//     int i = 0;
//     while (*(kelime + i) != '\0') {
//         *(kelime + i) = *(kelime + i) + 1;
//         i++;
//     }
//     i = 0;
//     int j = 0;
//     while (*(kelime + i) != '\0') {
//         *(ters + j) = *(kelime + (uzunluk - 1 - i));
//         i++;
//         j++;
//     }
//     *(ters + j) = '\0';
//     return ters;
// }
