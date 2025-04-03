#include <stdio.h>

int main(){
    int signedNumber = 3000000001;
    //Este valor excede o limite de um int normal, que tem valor 2,147,483,647 e -2,147,483,648
    //signed, tem uma tradução de "número assinado", ou podemos entender como "número com sinal", ou seja,
    //ele pode vim positivo e com sinal negativo.
    unsigned int unsignedNumber = 3000000000;

    printf("Número com sinal: %d\n", signedNumber);
    printf("Número sem sinal: %u\n", unsignedNumber);

    return 0;
}