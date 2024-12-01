angka1 = int(input("Masukkan Angka Pertama: "))
angka2 = int(input("Masukkan Angka Kedua: "))

if angka1 < angka2:
    for i in range(angka1, angka2 + 1):
        print(i, angka2 - (i - angka1), end=" - ")
else:
    for i in range(angka2, angka1 + 1):
        print(angka1 - (i - angka2), i, end=" - ")

print("\b\b  ")  