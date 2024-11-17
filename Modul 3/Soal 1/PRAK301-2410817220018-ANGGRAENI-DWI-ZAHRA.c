#include <stdio.h>
int main() { 
    int a, b, c;
    printf("Masukkan Bilangan a: ");
    scanf("%d", &a);
    printf("Masukkan Bilangan b: ");
    scanf("%d", &b);
    printf("Masukkan Bilangan c: ");
    scanf("%d", &c);

    if (a <= b && a <= c) {
        if ( b <= c ) {
        printf("%d %d %d", a, b, c);    
        }  else {
        printf("%d %d %d", a, c, b);
        }
    } else if (b <= a && b <= c) {
        if (a <= c) {
        printf("%d %d %d", b, a, c);
        } else {
            printf("%d %d %d", b, c, a);
        }
    } else {
        if (a <= b) {
        printf("%d %d %d", c, a, b);
        }
        else if (b <= a) {
        printf("%d %d %d", c, b, a);
        }
    }
    return 0;
}