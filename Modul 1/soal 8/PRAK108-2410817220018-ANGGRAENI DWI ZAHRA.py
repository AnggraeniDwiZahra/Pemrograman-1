import math

putaran = 5
jarak_tempuh = 14 

keliling_satu_putaran = jarak_tempuh / putaran
jari_jari = keliling_satu_putaran / (2 * math.pi)

print("Diketahui :")
print(f"Pak Dengklek mengelilingi taman = {putaran} Putaran")
print(f"Jarak tempuh Pak Dengklek = {jarak_tempuh} Kilometer")
print()
print()
print("Jawaban :")
print(f"Jari-jari taman yang dikeliingi Pak Dengklek adalah {jari_jari:.2f} Kilometer")