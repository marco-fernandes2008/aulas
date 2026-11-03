#include <stdio.h> 
#include <locale.h> 

int main (int argc, char *arg[]) {
    setlocale (LC_ALL, "");                 

    typedef struct ponto Ponto;
    struct ponto {
        float x;
        float y;
    };
    
    
    struct circulo {
        Ponto p;
        float r;
    }; 
    
    typedef struct circulo Circulo;

    Circulo c1;
    c1.p.x = 17;
    printf("informe o valor de y: ");
    scanf("%f", &c1.p.y);

    c1.r = 3;
    

    return 0;
}
