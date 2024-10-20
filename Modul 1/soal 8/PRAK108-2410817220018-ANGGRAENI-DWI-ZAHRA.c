#include <stdio.h>
#define PI 3.14

int main() {
    int putaran = 5;
    float total_jarak = 14; 
    float keliling, jari_jari;

    keliling = total_jarak / putaran;
    jari_jari = keliling / (2 * PI);

    printf("Diketahui : \n");
    printf("Pak Dengklek mengelilingi taman = %d putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n\n\n", total_jarak);
    printf("Jawaban : \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jari_jari);
    
    return 0;
}