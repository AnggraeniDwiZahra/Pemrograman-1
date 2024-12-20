def main():
    n1 = int(input("Masukkan n1: "))
    n2 = int(input("Masukkan n2: "))

    if n1 != n2:
        print("Jumlah tidak sama")
        return

    print(f"Masukkan {n1} angka untuk baris pertama:")
    baris1 = [int(input(f"Angka ke-{i+1}: ")) for i in range(n1)]

    print(f"Masukkan {n2} angka untuk baris kedua:")
    baris2 = [int(input(f"Angka ke-{i+1}: ")) for i in range(n2)]

    hasil = [baris1[i] * baris2[i] for i in range(n1)]
    print("Hasil perkalian: ", ' '.join(map(str, hasil)))

if __name__ == "__main__":
    main()