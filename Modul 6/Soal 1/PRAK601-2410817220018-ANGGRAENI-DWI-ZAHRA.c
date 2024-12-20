#include <stdio.h>

void matriks(int baris, int kolom) {
    int matriks[baris][kolom];

    for(int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            scanf("%d", &matriks[i][j]);
        }
    }

    printf("\n");
    for (int i = 0; i < baris; i++) {
        for(int j = 0;j < kolom; j++) {
            printf("%d  ", matriks[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int baris, kolom;
    printf("Masukkan Jumlah Baris: ");
    scanf("%d", &baris);
    printf("Masukkan Jumlah Kolom: ");
    scanf("%d", &kolom);
    matriks(baris, kolom);
    return 0;
}