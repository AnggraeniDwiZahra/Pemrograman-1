import math

sisi_a = float(input ("Masukkan Panjang Sisi A : "))
sisi_b = float(input ("Masukkan Panjang Sisi B : "))

tinggi = sisi_a
sisi_miring = sisi_b
alas = math.sqrt(sisi_miring**2 - tinggi**2)
keliling = alas + tinggi + sisi_miring
luas = 0.5 * alas * tinggi

print(f"Alas =  {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas =  {luas:.0f} cm^2")
