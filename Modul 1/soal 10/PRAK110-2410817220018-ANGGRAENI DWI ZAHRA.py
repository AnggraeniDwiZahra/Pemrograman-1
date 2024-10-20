import math

alas = 5
tinggi = 12
sisi_miring = math.sqrt(alas**2 + tinggi**2)
keliling = alas + tinggi + sisi_miring
luas = 0.5 * alas * tinggi

print("Diketahui :")
print(f"Alas = {alas} cm")
print(f"Tingi = {tinggi} cm")
print()
print("Jawab :")
print(f"Sisi A = {tinggi} cm")
print(f"Sisi B = {sisi_miring:.0f} cm")
print(f"Sisi C = {alas} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm")