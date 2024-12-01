#include <stdio.h>

int main() {
    int n, kelipatan;
    int total = 0;  

    printf("Masukkan jumlah baris: ");
    scanf("%d", &n);
    printf("Masukkan kelipatan: ");
    scanf("%d", &kelipatan);

    for (int i = 1; i <= n; i++) {
        int baris_total = 0;  

        for (int j = i; j >= 1; j--) {
            baris_total += j * kelipatan;
            
            if (j != i) {
                printf(" + ");
            }
            printf("(%d * %d)", j, kelipatan);
        }

        printf(" = %d\n", baris_total);
        
        total += baris_total;
    }

    printf("%d\n", total);

    return 0;
}