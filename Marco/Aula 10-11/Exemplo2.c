#include <stdio.h>

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

    /*
    NESTE EXEMPLO, COMO ESTAMOS PEDINDO PRO USUARIO INFORMAR, NAO PRECISA DISSO AQUI...
    
    strcpy(catalago[0].nome, "Tadala"); //strcpy serve para adicionar texto dentro da variavel "char", na "struct produto"
    catalago[0].preco = 35.0; //coloca o "." para acessar a variavel que tu quer dentro do struct
    catalago[0].estoque = 5;
    */

    for (int i = 0; i < 2; i++) {
        
        printf("Informe o nome do produto: ");
        scanf(" %s[^\n]", &catalago[i].nome);

        printf("Informe preco do produto: ");
        scanf("%f", &catalago[i].preco);

        printf("Informe a quantidade em estoque: ");
        scanf("%d", &catalago[i].estoque);

        total += catalago[i].preco * catalago[i].estoque;
        //calcula o total em estoque e soma a ele mesmo toda vez que repete
    }

    for (int i = 0; i < 2; i++) {
        printf("%s - R$ %.2f (%d pecas)\n", catalago[i].nome, catalago[i].preco, catalago[i].estoque);
        //um "for" pra exibir todas as posicoes depois que o usuario preencher tudo.
    }

    printf("Valor total em estoque: R$ %.2f\n", total);
    //exibe o total calculado

    return 0;

/*
Obs: Neste segundo exemplo, nós botamos dentro do "for" a opcao do usuario informar
o nome, o preco e a quantidade em estoque. Depois, botamos outro "for" para 
mostrar tudo que foi guardado
*/

}