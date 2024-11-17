#include <stdio.h>
int main () {
    int nilai;
    printf("Masukkan Nilai: ");
    scanf("%d", &nilai);
    if (nilai >= 80) {
    printf("Nilai huruf adalah A");
    }
    else if (nilai >= 70 && nilai <= 79) {
    printf("Nilai huruf adalah B");
    }
    else if (nilai >= 60 && nilai <= 69) {
    printf("Nilai huruf adalah C");
    }
    else if (nilai >= 50 && nilai <= 59) {
    printf("Nilai huruf adalah D");
    }
    else {
    printf("Nilai huruf adalah E");
    }
    return 0;
}