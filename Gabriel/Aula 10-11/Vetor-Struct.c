#include <stdio.h>
#include <string.h>

typedef struct produto //typedef para dar apelido 
{ 
    char nome[30]; 
    float preco; 
    int estoque; 
} Prod; // apelido do typedef 

Prod catalogo[50]; 

int main(){
    float total = 0; 
    
    strcpy(catalogo[0].nome, "Bally 2L"); // Serve para injetar nome dentro do codigo sem necessidade de scanf strcpy(onde quero texto, "texto")
    catalogo[0].preco = 10; 
    catalogo[0].estoque = 100; 

    for (int i=0; i <50; i++){
        printf("%s - R$ %.2f (%d un)\n", catalogo[i].nome, catalogo[i].preco, catalogo[i].estoque);
        total += catalogo[i].preco*catalogo[i].estoque; 
    };

    return 0;
}
