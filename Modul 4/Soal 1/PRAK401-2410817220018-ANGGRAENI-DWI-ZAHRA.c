#include <stdio.h>
int main () {
    int kelipatan;
    char simbol;

    printf("Masukkan kelipatan: ");
    scanf("%d", &kelipatan);
    printf("Masukkan simbol: ");
    scanf(" %c", &simbol);

    int i;

    for (i = 1; i <= 50; i++) {
        if (i % kelipatan == 0) {
            printf("%c ", simbol);
        } else {
            printf ("%d ", i);
        }
    }

    return 0;
}