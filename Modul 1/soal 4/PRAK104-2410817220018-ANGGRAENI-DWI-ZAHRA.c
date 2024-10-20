#include <stdio.h>

int main () {
    int harga_sepatu_A = 400000;
    int harga_sepatu_B = 350000;
    float diskon_A_13, diskon_B_21;

    diskon_A_13 = harga_sepatu_A * 0.87;
    diskon_B_21 = harga_sepatu_B * 0.79;

    printf("Harga sepatu A adalah %d\n", harga_sepatu_A);
    printf("Harga sepatu B adalah %d\n", harga_sepatu_B);
    printf("Sepatu A mendapatkan diskon 13%% sehingga harganya menjadi %.0f\n",diskon_A_13);
    printf("Sepatu B mendapatkan diskon 21%% sehingga harganya menjadi %.0f\n",diskon_B_21);

    return 0;
}