#include <stdio.h>

int main() {
    int a =4, b = 8, c = 3; 

    int sama_a_b = (a == b);
    int lebih_besar_b_c = (b > c);
    int tidak_sama_a_c = (a != c);

     printf("Variabel a bernilai %d\n", a);
     printf("Variabel b bernilai %d\n", b);
     printf("Variabel c bernilai %d\n", c);

     printf("Apakah a sama dengan b? jawabannya adalah %d\n", sama_a_b);
     printf("Apakah b lebih besar dari c? jawabannya adalah %d\n", lebih_besar_b_c);
     printf("Apakah a tidak sama dengan c? jawabannya adalah %d\n", tidak_sama_a_c);

    return 0;
}