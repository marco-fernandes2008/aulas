#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, ""); 

    typedef unsigned char UChar;
    typedef int *Pint;
    //apelidou os dois bagulho

    typedef struct ponto Ponto;
    struct ponto {
        float x;
        float y;
    };
    //apelidou a struct pra nao ficar escrevendo "struct..." toda vez

    UChar z = 230;
    int w = 120;
    Pint pp; //???
    pp = &w; //pp aponta pro endereco de memoria de w.
    *pp = 7; 

    //struct ponto sp;
    Ponto sp;
    sp.x = 10; //acessa 
    sp.y = 12;

    printf("Informe o valor de y: ");
    scanf("%f", &sp.y);

    printf("x=%.2f y=%.2f z=%d w=%d\n", sp.x, sp.y, z, w);

    return 0;
    
}