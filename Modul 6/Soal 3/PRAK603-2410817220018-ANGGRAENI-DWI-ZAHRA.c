#include <stdio.h>

int main () {
    int n1, n2;

    printf("Masukkan n1: ");
    scanf("%d", &n1);
    printf("Masukkan n2: ");
    scanf("%d", &n2);

    if (n1 != n2) {
        printf("Jumlah Tidak Sama \n");
        return 0;
    }

    int baris1[n1];
    int baris2[n2];
    int hasil[n1];

    printf ("Masukkan %d angka untuk baris pertama: \n", n1);
    for (int i = 0; i < n1; i++) {
        printf("Angka ke-%d: ", i + 1);
        scanf("%d", &baris1[i]);
    }
    printf ("Masukkan %d angka untuk baris kedua: \n", n1);
    for (int i = 0; i < n2; i++) {
        printf("Angka ke-%d: ", i + 1);
        scanf("%d", &baris2[i]);
    }

    for (int i = 0; i < n1; i++) {
        hasil[i] = baris1[i] * baris2[i];
    }

    printf("Hasil Perkalian: ");
    for(int i= 0; i < n1; i++) {
        printf("%d", hasil[i]);
        printf(" ");
    }
    return 0;
}