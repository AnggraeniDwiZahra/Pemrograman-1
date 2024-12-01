while(True):
    print("Pilih Program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. EXIT")
    j = int(input("Masukkan Pilihan :"))

    if j==1:
        a = int(input("Masukkan nilai pertama : "))
        b = int(input("Masukkan nilai kedua : "))
        c = (a + b)
        print(f"Hasil Penjumlahan antara {a:.2f} dengan {b:.2f} adalah {c:.2f}")
    elif j==2:
        a = int(input("Masukkan nilai pertama : "))
        b = int(input("Masukkan nilai kedua : "))
        c = (a - b)
        print(f"Hasil Pengurangan antara {a:.2f} dengan {b:.2f} adalah {c:.2f}")
    elif j==3:
        a = int(input("Masukkan nilai pertama : "))
        b = int(input("Masukkan nilai kedua : "))
        c = (a * b)
        print(f"Hasil Perkalian antara {a:.2f} dengan {b:.2f} adalah {c:.2f}")
    elif j==4:
        a = int(input("Masukkan nilai pertama : "))
        b = int(input("Masukkan nilai kedua : "))
        c = (a / b)
        print(f"Hasil Penjumlahan antara {a:.2f} dengan {b:.2f} adalah {c:.2f}")
    elif j==5:
        print("Terimakasih telah menggunakan kalkulator Anggraeni")
        break
    else:
        print("Input anda salah, silahkan coba lagi")