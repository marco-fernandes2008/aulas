#include <stdio.h>
#include <locale.h>
#include <math.h>



int main () {
    setlocale (LC_ALL, ""); 
    
    //DANDO O APELEDIDO PARA A STRUCT CIRCULO
    typedef struct circulo Circulo;
        
    //FUNCAO PARA CALCULAR A AREA (PASSA A STRUCT COMO PARAMETRO)
    float calculaArea (Circulo c) {
        return M_PI * pow(c.r, 2);
    };

    
//PRIMEIRA STRUCT
typedef struct ponto Ponto;
    struct ponto {
        float x;
        float y;
};

//STRUCT COM OUTRA STRUCT DENTRO (ANINHAMENTO)
struct circulo {
    Ponto p;
    float r;
};

//DEFINIÇÃO DO PARAMETRO CIRCULO COM OUTRO NOME (APELIDO DO APELIDO)
Circulo c1;

//PASSAGEM DE PAREMETRO PARA A VARIAVEL "X" DENTRO DA STRUCT "PONTO"
c1.p.x = 17;

    printf("Informe o valor de y: ");
    scanf("%f", &c1.p.y);

//DEFINICAO DA VARIAVEL "R" DENTRO DA STRUCT "CIRCULO"
c1.r = 3;

    printf("Ponto: (%.2f  %.2f) Raio: %.2f\n", c1.p.x, c1.p.y, c1.r);

    printf("Area do circulo: %.2f\n", calculaArea(c1));

    return 0;
    
}