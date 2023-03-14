#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main() {
	//Kamus Lokal
    int n, i, j, sum;
	//Algoritma
    printf("Masukkan nilai N: ");
    scanf("%d", &n);


    for (i = 1; i <= n; i++) {
        sum = 0;
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}