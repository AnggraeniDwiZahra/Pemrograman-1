def maksimal(a, b):
    return a if a > b else b

def minimal(a, b):
    return a if a < b else b

def main():
    batas = 0
    maks = -100000
    minim = 100000
    bilangan = int(input("Masukkan Jumlah Bilangan: "))

    while batas < bilangan:
        nilai = int(input("Masukkan Nilai: "))
        maks = maksimal(maks, nilai)
        minim = minimal(minim, nilai)
        batas += 1
    print(maks, minim)

if __name__ == "__main__":
    main ()