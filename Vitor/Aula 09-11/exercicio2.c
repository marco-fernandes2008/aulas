#include <stdio.h>

int main(){

    float saldo = 500.50;
    int *p = (int *)&saldo;
    printf("saldo=%.2f\n", *p);
    //o valor impresso é 500? não
    // o armazenamento do float ocorre com o ponto
    // flutuante na arquitetura conforme o padrão IEE 754.
    // A organização interna dos BITS é diferente: inteiro usa
    // complemento de 2.
    return 0;
}