def matriks(baris, kolom):
    matriks = []            #masukkan input satu per satu
    for i in range(baris):
        num = []
        for j in range(kolom):
            num.append(int(input()))
        matriks.append(num)
    print("")
    for i in range(baris):
        for j in range(kolom):
            print(matriks[i][j], end = " ")
        print("")

baris = int(input("Masukkan Jumlah Baris: "))
kolom = int(input("Masukkan Jumlah Kolom: "))
matriks(baris, kolom)