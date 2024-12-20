#include <stdio.h>
int main () {
    int ruangan;
    printf("Masukkan Jumlah Ruangan: ");
    scanf("%d", &ruangan);

    int zetsu_awal[ruangan];
    int zetsu_membelah[ruangan];

    printf("Masukkan Jumlah Zetsu di Ruangan: ");
    for (int i = 0; i < ruangan; i++) {
        scanf("%d", &zetsu_awal[i]);

    }    
    for (int i = 0; i < ruangan; i++) {
        zetsu_membelah[i] = zetsu_awal[i] * (i + 1);
    }

    printf("Jumlah Zetsu Setelah Membelah: ");
    for (int i = 0; i < ruangan; i++) {
        printf("%d", zetsu_membelah[i]);
        if (i < ruangan - 1);
        printf(" ");
    }
    return 0;
}