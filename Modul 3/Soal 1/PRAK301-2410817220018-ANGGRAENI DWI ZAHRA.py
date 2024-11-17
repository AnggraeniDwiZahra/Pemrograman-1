a = input ("Masukkan Nilai a = ")
b = input ("Masukkan Nilai b = ")
c = input ("Masukkan Nilai c = ")

if a > b > c:
    print (c, a, b)
elif a > c > b:
    print (b, c, a)
elif b > a > c:
    print (c, a, b)
elif c > a > b:
    print (b, a, c)
elif b > c > a:
    print (a, c, b)
elif c > b > a:
    print (a, b, c)
