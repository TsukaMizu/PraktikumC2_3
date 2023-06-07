#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{

    // Kamus Lokal
    int N,i;
    i = 1;


    // Input Variabel
    printf("Masukkan bilangan : ");
    scanf("%d",&N);

    // Algoritma
    for (i = 1; i <= N/2; i++) {
        if (N % i == 0) {
            printf("%d ", i);
            printf("%d ", N/i);
        }
    }

    printf("%d\n", N);

    return 0;
}
