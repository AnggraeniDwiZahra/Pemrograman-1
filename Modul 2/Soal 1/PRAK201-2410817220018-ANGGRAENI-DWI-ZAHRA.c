#include <stdio.h>

int main () {
    char nama[100],nim[100],kelas_paralel[100],ttl[100],alamat[100],hobby[100],no_hp[100];

    printf("Masukkan nama: ");
    fgets(nama, sizeof(nama), stdin);

    printf("Masukkan NIM: ");
    fgets(nim, sizeof(nim), stdin);

    printf("Masukkan Kelas Paralel: ");
    fgets(kelas_paralel, sizeof(kelas_paralel), stdin);

    printf("Masukkan TTL: ");
    fgets(ttl, sizeof(ttl), stdin);

    printf("masukkan alamat: ");
    fgets(alamat, sizeof(alamat), stdin);

    printf("masukkan Hobby: ");
    fgets(hobby, sizeof(hobby), stdin);

    printf("masukkan No. HP: ");
    fgets(no_hp, sizeof(no_hp), stdin);

    printf("Nama: %s", nama);
    printf("NIM: %s", nim);
    printf("Kelas Paralel: %s", kelas_paralel);
    printf("Tempat/Tanggal Lahir: %s", ttl);
    printf("Alamat: %s", alamat);
    printf("Hobby: %s", hobby);
    printf("No.HP: %s", no_hp);

    return 0;
}