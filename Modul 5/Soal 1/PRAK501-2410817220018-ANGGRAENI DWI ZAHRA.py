def MaxBilangan(a, b, c, d):
    max_bil = a
    if b > max_bil:
        max_bil = b
    if c > max_bil:
       max_bil = c
    if d > max_bil:
        max_bil = d
    return max_bil

def main():
    a, b, c, d = map(int, input("Masukkan Bilangan: ").split())
    hasil = MaxBilangan (a, b, c, d)
    print(" ", hasil)

MaxBilangan('a', 'b', 'c', 'd')
main()