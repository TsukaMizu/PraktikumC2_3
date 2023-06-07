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
   for (i = 2; i <= N/2; i++) {
        if (N % i == 0) {
            S++;
        }
    }
	if (S == 0){
		printf("Bilangan Prima");
	}
	else{
		printf("Bukan Bilangan prima");
	}
    return 0;
}
