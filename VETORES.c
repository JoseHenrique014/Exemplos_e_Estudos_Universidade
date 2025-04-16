#include <stdio.h>

int main(){

    int vetor[6];

    for(int i = 0; i < 6; i++){

        vetor[i] = i * 2;
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}