#include <stdio.h>
int main() {
    int pilihan;
    float a, b, c;

    while (1) {
        printf("Pilih Program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. EXIT\n");
        
        printf("Masukkan Pilihan: ");
        scanf("%d", &pilihan);

        if (pilihan == 1) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &a);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &b);
            c = a + b;
            printf("Hasil Penjumlahan antara %.2f dan %.2f adalah %.2f\n", a, b, c);
        } else if (pilihan == 2) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &a);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &b);
            c = a - b;
            printf("Hasil Pengurangan antara %.2f dan %.2f adalah %.2f\n", a, b, c);
        } else if (pilihan == 3) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &a);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &b);
            c = a * b;
            printf("Hasil Perkalian antara %.2f dan %.2f adalah %.2f\n", a, b, c);
        } else if (pilihan == 4) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &a);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &b);
            c = a / b;
            printf("Hasil Pembagian antara %.2f dan %.2f adalah %.2f\n", a, b, c);
        } else if (pilihan == 5) {
            printf("Terimakasih telah menggunakan kalkulator Anggraeni.\n");
            break;  
        } else {
            printf("Input anda salah, silahkan coba lagi.\n");
        }
    }

    return 0;
}