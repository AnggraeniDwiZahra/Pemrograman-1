#include <stdio.h>

int main() {
    int angka;

    printf("Masukkan Batas Maksimal: ");
    scanf("%d", &angka);

    printf(" ");
    for (int i = 1; i <= angka; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    printf(" ");
    for (int i = 2; i <= angka; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}