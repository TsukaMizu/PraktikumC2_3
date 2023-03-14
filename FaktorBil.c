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
    while(i < N){
        if(N % i == 0){
            printf("%d, ", i);
            i++;
        }
        else{
            i++;
        }
    }

    return 0;
}