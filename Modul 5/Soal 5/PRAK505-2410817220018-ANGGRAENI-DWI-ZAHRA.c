#include <stdio.h> 

void Biodata(int tahunLahir, char Namaku[], char Asal[]) {
    int tahun_sekarang = 2020; 
    int umur = tahun_sekarang - tahunLahir;

    printf("Perkenalkan Nama saya : %s \n", Namaku);
    printf("Umur Saya : %d \n", umur);
    printf("Saya Adalah Angkatan : %d \n",  tahun_sekarang);
    printf("Asal Saya Dari : %s \n", Asal);
} 

int main() {
    int tahunLahir;
    char Namaku[20], Asal[15];
    printf("Masukkan tahun Lahir: ");
    scanf(" %d",&tahunLahir);
    printf("Masukkan Nama: ");
    scanf(" %[^\n]%*c",&Namaku);
    printf("Masukkan Asal: ");
    scanf(" %[^\n]%*c",&Asal);
    printf("\n");
    Biodata(tahunLahir, Namaku, Asal);
return 0; 
}