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
    while(i < N){
        if(N % i == 0){
            S = S + i;
            i++;
        }
        else{
            i++;
        }
    }
    if(S == N){
        printf("Bilangan Sempurna");
    }
    else{
        printf("Bukan Bilangan Sempuurna");
    }
    return 0;
