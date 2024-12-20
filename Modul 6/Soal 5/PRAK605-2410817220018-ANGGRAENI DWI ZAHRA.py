n = int(input("Masukkan ordo matriks: "))

print("Matriks A: ")
A =[list(map(int, input().split())) for _ in range(n)]

print("Matriks B: ")
B =[list(map(int, input().split())) for _ in range(n)]

Hasil = [[sum(A[i][k] * B[k][j] for k in range(n)) for j in range(n)] for i in range(n)]
print("")
print ("Matriks AXB")
for baris in Hasil :
    print(*baris)