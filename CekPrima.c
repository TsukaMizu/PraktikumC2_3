#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{

    // Kamus Lokal
    int N,i,S;
    i = 2;
    S = 1;

    // Input Variabel
    printf("Masukkan bilangan : ");
    scanf("%d",&N);

    // Algoritma
    while(i < N){
        if(N % i == 0){
            i = N;
            S = 0;
        }
        else{
            if(i == N-1){
            i++;
            }
            else{
                i++;
            }
        }
    }
	if (S == 1){
		printf("Bilangan Prima");
	}
	else{
		printf("Bukan Bilangan prima");
	}
    return 0;
}