#include <stdio.h>
#include "digital.h"
#include "temp.h"

int main(){
    double valor;
    printf("\n\tCOVERSOR DE MEDIDAS SUB_GRUPO3\n\n");
    printf("Escolha o valor de kilobytes a serem convertidos em kilobytes: ");
    scanf("%.2f",valor);
    printf("\n%.2fb = %2.fkb\n\n",valor,b_kb(valor));
    return 0;
}