#include <stdio.h>
void converteTempo(int total_segundos, int *horas, int *minutos, int *segundos){
    *segundos = total_segundos % 60;
    *minutos = (total_segundos / 60) % 60;
    *horas = total_segundos / 3600;
}
int main() {

    int total_segundos, segundos, minutos, horas;
    
    printf("informe quantos segundos você quer dar: ");
    scanf("%d", &total_segundos);
    converteTempo(total_segundos, &segundos, &horas, &minutos);

    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);
    return 0;
}
