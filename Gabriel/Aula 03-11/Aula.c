    #include <stdio.h> 
    #include <locale.h> // CORREÇÃO: Necessário para usar a função setlocale

int main (int argc, char *arg[]) {
    setlocale (LC_ALL, ""); // CORREÇÃO: O correto é LC_ALL (com 'C' de Constant) e não LA_ALL

    typedef unsigned char UChar;
    typedef int *PInt;

    typedef struct ponto Ponto; // CORREÇÃO: Faltava o ponto e vírgula (;) no final desta linha
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
