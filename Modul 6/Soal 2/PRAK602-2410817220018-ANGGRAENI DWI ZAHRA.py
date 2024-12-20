ruangan = int(input("Masukkan Jumlah Ruangan: "))
zetsu_awal = list(map(int, input("Masukkan Jumlah Zetsu di Ruangan: ").split()))

zetsu_membelah = [zetsu_awal[i] * (i + 1) for i in range (ruangan)]
print(' '.join(map(str, zetsu_membelah)))