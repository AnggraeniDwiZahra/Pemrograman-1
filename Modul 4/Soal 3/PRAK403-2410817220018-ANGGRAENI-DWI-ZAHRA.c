#include <stdio.h>

int main() {
    int angka1, angka2;

    printf("Masukkan Angka Pertama: ");
    scanf("%d", &angka1);
    printf("Masukkan Angka Kedua: ");
    scanf("%d", &angka2);


    if (angka1 > angka2) {
        for (int i = 0; i <= (angka1 - angka2); i++) {
            printf("%d %d", angka1 - i, angka2 + i);
            if (i < (angka1 - angka2)) {
                printf(" - "); 
            }
        }
    } else { 
        for (int i = 0; i <= (angka2 - angka1); i++) {
            printf("%d %d", angka1 + i, angka2 - i);
            if (i < (angka2 - angka1)) {
                printf(" - "); 
            }
        }
    }
    printf("\n"); 

    return 0;
}