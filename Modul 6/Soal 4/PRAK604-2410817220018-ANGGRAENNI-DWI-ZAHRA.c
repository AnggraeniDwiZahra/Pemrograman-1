#include <stdio.h>
#include <string.h>

int main() {
    char kode[100], pesan[100];
    int bintang = 0; 
    int pagar = 0;   
    char hasil[100]; 

    printf("Masukkan Kode: ");
    fgets(kode, sizeof(kode), stdin);
    printf("Masukkan Pesan: ");
    fgets(pesan, sizeof(pesan), stdin);

    if (kode[strlen(kode) - 1] == '\n') {
        kode[strlen(kode) - 1] = '\0'; 
    }
    if (pesan[strlen(pesan) - 1] == '\n') {
        pesan[strlen(pesan) - 1] = '\0'; 
    }

    if (strlen(kode) != strlen(pesan)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
    } else {
        for (int i = 0; i < strlen(kode); i++) {
            if (kode[i] == ' ' && pesan[i] == ' ') {
                hasil[i] = ' '; 
                continue; 
            } 
            if (kode[i] == pesan[i]) {
                hasil[i] = '*'; 
                bintang++; 
            } else {
                hasil[i] = '#'; 
                pagar++; 
            }
        }

        hasil[strlen(kode)] = '\0'; 

        printf("%s\n", hasil); 
        printf("* = %d\n", bintang); 
        printf("# = %d\n", pagar); 
        
        if (bintang >= pagar) {
            printf("Pesan Asli\n");
        } else {
            printf("Pesan Palsu\n");
        }
    }
    return 0; 
}