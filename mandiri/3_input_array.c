#include <stdio.h>

int main() {
    int nilai[5];

    printf("Input : \n");
    printf("Nilai ke-1 : ");
    scanf("%s",&nilai[0]);
    printf("Nilai ke-2 : ");
    scanf("%s",&nilai[1]);

    printf("\n");

    printf("Output : \n");
    printf("Data - 1 : \n");
    printf("Nilai : %s\n",&nilai[0]);
    printf("Data - 2 : \n");
    printf("Nilai : %s\n",&nilai[1]);
    printf("\n");


    return 0;
}