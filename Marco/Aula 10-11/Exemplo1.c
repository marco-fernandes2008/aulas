#include <stdio.h>
#include <string.h>

typedef struct produto {
    char nome[30];
    float preco;
    int estoque;
} Produto;
//typedef é só pra adicionar um apelido na struct, pra nao ter que ficar escrevendo toda vez "struct produto". Ela foi apelidada de Produto.

int main () {
    Produto catalago[50];
    //struct Produto catalago[50]. É a mesma coisa, só apelidou o struct para "Produto".

    /*
    Ele definiu o "struct produto" ou "Produto" como outra variavel chamada "catalago[50]". 
    Significa que vai repetir todas as informacoes dentro da struct 50 vezes (como se fosse um vetor da struct)
    */

    float total = 0;
    //variavel para calcular o total em estoque depois

    strcpy(catalago[0].nome, "Tadala"); //strcpy serve para adicionar texto dentro da variavel "char", na "struct produto"
    catalago[0].preco = 35.0; //coloca o "." para acessar a variavel que tu quer dentro do struct
    catalago[0].estoque = 5;

    for (int i = 0; i < 50; i++) {
        printf("%s - R$ %.2f (%d pecas)\n", catalago[i].nome, catalago[i].preco, catalago[i].estoque);
        //"pecas" ta dentro de parenteses so pra ficar bonito mesmo, nao tem motivo

        total += catalago[i].preco * catalago[i].estoque;
        //calcula o total em estoque e soma a ele mesmo toda vez que repete
    }

    printf("Valor total em estoque: R$ %.2f\n", total);
    //exibe o total calculado

    return 0;

/*
Obs: Neste exemplo, o sor definiu apenas uma posicao do vetor, entao todas as outras 49 posicoes estao
vazias, por isso ele so imprime o primeiro [0] e depois imprime um monte de lixo, por que a gente só definiu ele
com algo dentro. Para colocar nos outros, tem que usar o scanf dentro do "for" e pedir pro usuario digitar dentro
de cada um dos vetores, e só depois imprimir.

*/
}