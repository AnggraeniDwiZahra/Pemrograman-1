Nilai = int(input("Masukkan Nilai = "))
if Nilai == 0:
    print("Nol")
elif Nilai >= 1 and Nilai <= 9:
    print ("Satuan")
elif Nilai == 10 or Nilai >= 20 and Nilai <= 99:
    print ("Puluhan")
elif Nilai >= 11 and Nilai <= 19:
    print ("Belasan")
else:
    print ("Anda Menginput Melebihi Limit Bilangan")
