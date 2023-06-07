#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{

    // Kamus Lokal
    int N,i,S;
    i = 1;
    S = 0;

    // Input Variabel
    printf("Masukkan bilangan : ");
    scanf("%d",&N);

    // Algoritma
    for (i = 1; i < N; i++) {
        if (N % i == 0) {
            S += i;
        }
    }
    if(S == N){
        printf("Bilangan Sempurna");
    }
    else{
        printf("Bukan Bilangan Sempuurna");
    }
    return 0;
