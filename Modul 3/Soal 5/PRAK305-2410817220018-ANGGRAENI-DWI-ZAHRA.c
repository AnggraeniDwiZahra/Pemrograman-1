#include <stdio.h>
int main () {
    int total_detik, hari, jam, menit, detik;
    printf("Masukkan Detik :");
    scanf("%d", &total_detik);
    hari = total_detik / 86400;
    total_detik %= 86400;
    jam = total_detik /  3600;
    total_detik %= 3600;
    menit = total_detik / 60;
    detik = total_detik % 60;
    if (hari == 0) {
    printf("%02d:%02d:%02d", jam, menit, detik);
    }
    else {
    printf("%d hari %02d:%02d:%02d", hari, jam, menit, detik);
    }
    return 0;
}