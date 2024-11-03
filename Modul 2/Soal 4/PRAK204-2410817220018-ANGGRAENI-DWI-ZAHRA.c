#include <stdio.h>
#include <math.h>

int main () {
    float jari_jari, tinggi, volume, luas, keliling;
    const float pi = 22.0/7.0;

    printf("Masukkan Jari-jari: ");
    scanf("%f", &jari_jari);
    printf("Masukkan Tinggi: ");
    scanf("%f", &tinggi);

    volume = pi * jari_jari* jari_jari * tinggi;
    luas = 2 * pi * jari_jari * (jari_jari + tinggi);
    keliling = 2 * pi * jari_jari;

    printf("Volume = %.2f \n", volume);
    printf("Luas = %.2f \n", luas);
    printf("Keliling = %.2f \n", keliling);

   return 0; 
}