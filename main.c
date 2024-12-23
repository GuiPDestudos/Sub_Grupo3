#include <stdio.h>
#include "digital.h"
#include "temp.h"

int main(){
    int op, opc;
    printf("\n\t\033[1;31mCOVERSOR DE MEDIDAS SUB_GRUPO3\033[m\n\n");
    printf("\nQual tipo de medida voce deseja converter:\n");
    printf("\n1.Unidades de comprimento (metro, centímetro, milímetro)\n2. Unidades de massa (quilograma grama, tonelada)\n3. Unidades de volume (litro, mililitro, metros cúbicos)\n4. Unidades de temperatura (Celsius, Fahrenheit, Kelvin)\n5. Unidades de velocidade (km/h, m/s, mph)\n6. Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp)\n7. Unidades de área (metro quadrado, centímetro quadrado)\n8. Unidades de tempo (segundos, minutos, horas)\n9. Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB)");
    printf("\nEscolha a medida a ser convertida: ");
    scanf("%d",op);
    switch (op)
    {
    case 1:
        printf("\nEscolha a unidades a serem convertidas:\n");
        printf("1.Metro para Centrimetro\n2.Metro para Milemetro\n3.Centrimetro para Metro\n4.Centrimetro para Milimetro\n5.Milimetro para Metro\n6.Milimetro para Centrimetro\n ");
        printf("Escolha uma das opcoes acima:");
        scanf("%d",opc);
        switch (opc)
        {
        case 1:
        double valor;
        printf("Digite o valor: ");
        scanf("%f",valor);
        printf("\n%.2fm = %2.fcm\n", valor, /*Falta biblioteca*/);
            break;
        case 1:
        double valor;
        printf("Digite o valor: ");
        scanf("%f",valor);
        printf("\n%.2fm = %2.fcm\n", valor, /*Falta biblioteca*/);
            break;
        case 2:
        double valor;
        printf("Digite o valor: ");
        scanf("%f",valor);
        printf("\n%.2fm = %2.fmm\n", valor, /*Falta biblioteca*/);
            break;
        case 3:
        double valor;
        printf("Digite o valor: ");
        scanf("%f",valor);
        printf("\n%.2fcm = %2.fm\n", valor, /*Falta biblioteca*/);
            break;
        case 4:
        double valor;
        printf("Digite o valor: ");
        scanf("%f",valor);
        printf("\n%.2fcm = %2.fmm\n", valor, /*Falta biblioteca*/);
            break;
        case 5:
        double valor;
        printf("Digite o valor: ");
        scanf("%f",valor);
        printf("\n%.2fmm = %2.fm\n", valor, /*Falta biblioteca*/);
            break;
        case 6:
        double valor;
        printf("Digite o valor: ");
        scanf("%f",valor);
        printf("\n%.2fmm = %2.fcm\n", valor, /*Falta biblioteca*/);
            break;
        default:
            break;
        }
        break;
    
    default:
        break;
    }

}