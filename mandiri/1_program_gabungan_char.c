#include <stdio.h>
#include <string.h>

int main(){
    char teks1[20],teks2[20];
    printf("Masukan kata 1 = ");
    scanf("%s",&teks1);
    printf("Masukan kata 2 = ");
    scanf("%s",&teks2);
    printf("Hasil Gabungan = %s",strcat(strcat(teks1," "),teks2));

    return 0;
}