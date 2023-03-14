#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Kamus Lokal
    int i,N,Sum;
    Sum = 0;
    //Algoritma
    printf("Masukkan nilai N : ");
    scanf("%d", &N);

    for(i = 1;i <= N;i++){
        Sum = Sum + i;
    }
    printf("Hasil penjumlahan baris dengan N = %d adalah %d",N, Sum);
    return 0;
}