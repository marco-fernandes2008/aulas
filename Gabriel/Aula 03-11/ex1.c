    #include <stdio.h> 
    #include <locale.h> // CORREÇÃO: Necessário para usar a função setlocale

int main (int argc, char *arg[]) {
    setlocale (LC_ALL, "");                 

    typedef unsigned char UChar;
    typedef int *PInt;

    typedef struct ponto Ponto;
    struct ponto
    {
        float x;
        float y;
    };

    Ponto sp;
    sp.x = 10; // Adiciona o valor 10 para o ponto x
    sp.y = 12;

    printf ("x=%.2f y=%.2f\n", sp.x, sp.y);

    return 0;
}
