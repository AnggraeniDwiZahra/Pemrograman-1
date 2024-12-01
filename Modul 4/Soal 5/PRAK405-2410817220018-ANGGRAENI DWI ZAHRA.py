n = int(input("Masukkan Jumlah Baris: "))
kelipatan = int(input("Masukkan Kelipatan: "))

total = 0  

for i in range(1, n + 1):
    baris_total = 0  
    ekspresi = ""  

    for j in range(i, 0, -1):
        baris_total += j * kelipatan
        if j != i:
            ekspresi += " + "
        ekspresi += f"({j} * {kelipatan})"
    
    print(ekspresi, "=", baris_total)
    
    total += baris_total
print(total)