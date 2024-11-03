#include <stdio.h>

int main () {
    float nilai_a, nilai_b, nilai_i, nilai_j, nilai_x, nilai_y, hasil;

    printf("Masukkan Nilai Pertama: ");
    scanf("%f", &nilai_a);
    printf("Masukkan Nilai Kedua: ");
    scanf("%f", &nilai_b);
    printf("Masukkan Nilai Ketiga: ");
    scanf("%f", &nilai_i);
    printf("Masukkan Nilai Ke-empat: ");
    scanf("%f", &nilai_j);
    printf("Masukkan Nilai Kelima: ");     
    scanf("%f",&nilai_x);
    printf("Masukkan Nilai Ke-enam: ");
    scanf("%f", &nilai_y);

    hasil = (nilai_a - nilai_b) * (nilai_i / nilai_j) - (nilai_x + nilai_y);

    printf ("Hasil : %.3f ", hasil);

   return 0; 
}