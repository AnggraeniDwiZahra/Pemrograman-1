def hitung(nilai1, nilai2):
    return nilai1 - nilai2

def mutlak(angka):
    if angka < 0:
        return -angka
    return angka

def main():
    a, b, c, d = map(int, input("Masukkan Koordinat: ").split())
    Hasil = mutlak(hitung(a, c)) + mutlak(hitung(b, d))
    print (" ", Hasil)

if __name__ == "__main__":
    main ()