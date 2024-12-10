def reverse(n) :
    reversed_num = 0
    while n > 0:
        reversed_num = reversed_num * 10 + n % 10
        n = n // 10
    return reversed_num

def main():
    A, B = map(int, input("Masukkan Bilangan: ").split())
    A=reverse(A)
    B=reverse(B)
    C = A+B
    print(f"{reverse(C)}")

if __name__ == "__main__":
    main()