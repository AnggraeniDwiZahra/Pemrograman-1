#include <stdio.h>
#include <math.h>

int main () {
    float sisi_a, sisi_b, sisi_miring, alas, tinggi, keliling, luas;

    printf("Masukkan Panjang Sisi A: ");
    scanf("%f", &sisi_a);
    printf("Masukkan Panjang Sisi B: ");
    scanf("%f", &sisi_b);

    tinggi = sisi_a;
    sisi_miring = sisi_b;
    alas = sqrt(sisi_miring* sisi_miring - tinggi * tinggi);
    keliling = alas + tinggi + sisi_miring;
    luas = 0.5 * alas * tinggi;

    printf("Alas =  %.0f cm \n", alas);
    printf("Tinggi = %.0f cm \n", tinggi);
    printf("Keliling = %.0f cm \n", keliling);
    printf("Luas =  %.0f cm^2 \n", luas);

    return 0;
}