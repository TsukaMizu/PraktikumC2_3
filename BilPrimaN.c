#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(void){
    // Kamus Lokal
    int N,i,i2,cekPrima;

    //Algoritma
    printf("Masukkan nilai N : ");
    scanf("%d", &N);
    if(N>0){
        for(i=2;i<=N;i++){
            cekPrima = 1;
            for(i2=2;i2<=(sqrt(i));i2++){
                if(i%i2 == 0){
                    cekPrima = 0;
                    break;
                }
            }
            if(cekPrima == 1){
                printf("%d, ",i);
            }
        }
    }
    else{
            printf("input tidak valid");
    }
    return 0;
}