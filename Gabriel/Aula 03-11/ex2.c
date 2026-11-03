#include <stdio.h> 
#include <locale.h> 
#define _USE_MATH_DEFINES // Garante o acesso ao M_PI em alguns compiladores
#include <math.h>

// CORREÇÃO: Definindo os tipos fora e antes das funções para que todos possam usar
typedef struct {
    float x;
    float y;
} Ponto;

typedef struct {
    Ponto p;
    float r;
} Circulo;

// Agora a função reconhece o tipo 'Circulo' perfeitamente
float calculaArea(Circulo c) {
    return M_PI * pow(c.r, 2);
}

int main (int argc, char *arg[]) {
    setlocale (LC_ALL, "");                 

    Circulo c1;
    c1.p.x = 17;
    printf("informe o valor de y: ");
    scanf("%f", &c1.p.y);

    c1.r = 3;
    
    printf("Area do circulo: %.2f\n", calculaArea(c1));

    return 0;
}
