#include <stdio.h>
int main () {
int nilai;
    printf("Masukkan Nilai: ");
    scanf("%d", &nilai);
    if (nilai == 0) {
    printf("nol");
    }
    else if (nilai >= 1) {
    printf("positif");
    }
    else {
    printf("negatif");
    }
    return 0;
}