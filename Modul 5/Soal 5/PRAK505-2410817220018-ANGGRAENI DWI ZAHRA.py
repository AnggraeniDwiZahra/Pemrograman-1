def Biodata(tahunLahir, Namaku, Asal):
    tahun_sekarang = 2020
    umur = tahun_sekarang - tahunLahir

    print(f"Perkenalkan Nama saya : {Namaku}")
    print(f"Umur Saya : {umur}")
    print(f"Saya Adalah Angkatan : {tahun_sekarang}")
    print(f"Asal Saya Dari : {Asal}")

def main():
    tahunLahir = int(input("Masukkan Tahun Lahir : "))
    Namaku = input("Masukkan Nama : ")
    Asal = input("Masukkan Asal : ")
    print("")
    Biodata(tahunLahir, Namaku, Asal)

if __name__ == "__main__":
    main()