#include <stdio.h>
#include "tempo.h"

void converterSegundos() {
    int segundos;
    printf("\nDigite o número de segundos: ");
    scanf("%d", &segundos);

    int minutos = segundos / 60;
    int horas = segundos / 3600;
    int restoSegundos = segundos % 60;

    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos.\n",
           segundos, horas, minutos % 60, restoSegundos);
}

void converterMinutos() {
    int minutos;
    printf("\nDigite o número de minutos: ");
    scanf("%d", &minutos);

    int segundos = minutos * 60;
    int horas = minutos / 60;

    printf("%d minutos equivalem a %d horas e %d segundos.\n",
           minutos, horas, segundos);
}

void converterHoras() {
    int horas;
    printf("\nDigite o número de horas: ");
    scanf("%d", &horas);

    int minutos = horas * 60;
    int segundos = horas * 3600;

    printf("%d horas equivalem a %d minutos e %d segundos.\n",
           horas, minutos, segundos);
}
