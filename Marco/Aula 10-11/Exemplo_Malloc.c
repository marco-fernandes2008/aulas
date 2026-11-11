
#include <stdio.h>
#include <stdlib.h>

int main() {

    int n; //variavel normal
    int *v; //ponteiro. Ele vai funcionar como um vetor

    //pede a quantidade de itens que vão ser armazenados pro usuário
    printf("Quantos numeros deseja armazenar? ");
    scanf("%d", &n);

    // Alocando memoria. V está apontando com o malloc para a quatidade de itens dentro de N.
    v = malloc(n * sizeof(int)); //significa: reserve espaço suficiente para armazenar "n" números inteiros.

    /*
    MAS POR QUE USAMOS PONTEIRO?
    Porque o malloc() retorna o endereço inicial do espaço de memória reservado. O ponteiro v guarda esse endereço.
    Assim, podemos utilizar o espaço como um vetor normal
    */

    // Verificando se funcionou
    if (v == NULL) {
        printf("Erro ao alocar memoria!");
        return 1;
    }

    // Preenchendo o vetor (ponteiro V) conforme a quantidade de itens que o usuario informou
    for (int i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    // Mostrando os numeros
    printf("\nNumeros digitados:\n");

    for (int i = 0; i < n; i++) {
        printf("%d\n", v[i]);
    }

    // Liberando a memoria depois de usar
    free(v);

    return 0;
}

/*
FUNÇÃO	    PARA QUE SERVE

malloc()	Aloca memória
realloc()	Redimensiona memória
free()	    Libera memória
sizeof()	Informa o tamanho em bytes de um tipo
NULL	    Indica um ponteiro nulo
*/
