angka = int(input("Masukkan Batas Maksimal: "))

for i in range(1, angka+1):
    if i % 2 != 0:
        print(i, end=" ")
print()

for i in range(angka, 1, -1):
    if i % 2 == 0: 
         print(i, end=" ")