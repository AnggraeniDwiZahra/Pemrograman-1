import math

jari_jari = float(input ("Masukkan Jari-jari : "))
tinggi = float(input ("Masukkan Tinggi : "))

volume = 22/7 * jari_jari**2 * tinggi
luas = 2 * 22/7 * jari_jari * (jari_jari + tinggi)
keliling = 2 * 22/7 * jari_jari

print(f"Volume =  {volume:.2f}")
print(f"Luas =  {luas:.2f}")
print(f"Keliling = {keliling:.2f}")