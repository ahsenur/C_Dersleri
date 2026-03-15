#include <stdio.h>
#include <stdlib.h>
//adam asmaca oyunu
// int main(){
//       char kelime[50],tahmin,dene[50];
//       printf("belirlenen kelimeyi giriniz:");
//       fgets(kelime,50,stdin);
      
//       int i=0,uzunluk=0;
     
//       while(kelime[i]!='\0')
//       {
//                  if(kelime[i]=='\n')
//                  {
//                   kelime[i]='\0';
//                   break;
//                  }
//                  i++;
//       }
//       int yanliş=0;
//       uzunluk=i;
//         for(i=0;i<uzunluk;i++)
//     {
//       dene[i]='_';
//     }
//       while(yanliş<6){
  
//     dene[i]='\0';
//      printf("\n kelime:%s\n",dene);
     
//      int ayni_mi = 1; 
//      printf("tahmin edilecek harfi girinz:\n");
//       scanf(" %c",&tahmin);
//       int bulundu=0; 
//       for(int i=0;i<uzunluk;i++)
//       {
//             if(kelime[i]==tahmin)
//             {
//                   dene[i]=tahmin;
            
//                   bulundu=1;
//             }
//       }
//       if(bulundu){
//       printf("doğru!:%s",dene);

// for(i=0; i<uzunluk; i++){
//     if(kelime[i] != dene[i]){
//         ayni_mi = 0;   // fark bulundu
//         break;
//     }
// }

// if(ayni_mi){
//     printf("Tebrikler, kelimeyi buldunuz!\n");
//     break;
// }}
//       else
//       {
//                 switch (yanliş)
//                   {
//                   case 0:
//                         printf("adaminizin sağ kolu koptu!");
//                         break;
//                   case 1:
//                   printf("adaminizin sol kolu koptu!");
//                   break;
//                   case 2:
//                   printf("adaminizin sağ ayaği koptu!");
//                   break;
//                   case 3:
//                   printf("adaminizin sol ayaği koptu!");
//                   break;
//                   case 4:
//                   printf("adaminizin gövdesi koptu!");
//                   break;
//                   case 5:
//                   printf("adaminizin başi koptu ve oyun bitti!");
//                   break;
                  
//                   default:
//                         break;
//                   }
                  
            
//             yanliş++;
//       }
// }
//     return 0;
// }
#include <stdio.h>

int main(){
    char kelime[50], tahmin, dene[50];
    printf("Belirlenen kelimeyi giriniz: ");
    fgets(kelime,50,stdin);
      
    int i=0, uzunluk=0;
    while(kelime[i]!='\0'){
        if(kelime[i]=='\n'){
            kelime[i]='\0';
            break;
        }
        i++;
    }
    uzunluk=i;

    // dene dizisini sadece 1 kere doldur
    for(i=0;i<uzunluk;i++){
        dene[i]='_';
    }
    dene[i]='\0';

    int yanlis=0;
    while(yanlis<6){
        printf("\nKelime: %s\n", dene);
        printf("Tahmin edilecek harfi giriniz: ");
        scanf(" %c",&tahmin);

        int bulundu=0; 
        for(i=0;i<uzunluk;i++){
            if(kelime[i]==tahmin){
                dene[i]=tahmin;
                bulundu=1;
            }
        }

        if(bulundu){
            printf("Doğru!: %s\n",dene);

            // kelime ile dene aynı mı?
            int ayni_mi = 1;
            for(i=0;i<uzunluk;i++){
                if(kelime[i]!=dene[i]){
                    ayni_mi=0;
                    break;
                }
            }
            if(ayni_mi){
                printf("Tebrikler, kelimeyi buldunuz!\n");
                break;
            }
        }
        else {
            switch(yanlis){
                case 0: printf("Adamın sağ kolu koptu!\n"); break;
                case 1: printf("Adamın sol kolu koptu!\n"); break;
                case 2: printf("Adamın sağ ayağı koptu!\n"); break;
                case 3: printf("Adamın sol ayağı koptu!\n"); break;
                case 4: printf("Adamın gövdesi koptu!\n"); break;
                case 5: printf("Adamın başı koptu ve oyun bitti!\n"); break;
            }
            yanlis++;
        }
    }

    return 0;
}
