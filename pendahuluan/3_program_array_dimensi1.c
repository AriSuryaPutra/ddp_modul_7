#include <stdio.h>

int main() {
   int angka[] = {1, 5, 3, 2, 100,4,8};
   for(int i=0; i<7; i++) {
       printf("Nilai array pada index ke-%d = %d \n", i, angka[i]);
   }   
   return 0;
}