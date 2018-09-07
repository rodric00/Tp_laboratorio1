#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(){
    int opcion;
    float variableUno=0;
    float variableDos=0;
    float resultadoSuma;
    float resultadoResta;
    float resultadoDivision;
    float resultadoMultiplicacion;
    float resultadoFactorialA;
    float resultadoFactorialB;

    do
        {

        printf("\n          CALCULADORA           \n ");
        printf("\n           MENU          \n\n");
        printf(" 1 - Ingresar el primer numero:  \n");
        printf(" 2 - Ingresar el segundo numero:  \n");
        printf(" 3 - Calcular todas las operaciones: \n");
        printf(" 4 - Mostrar todos los resultados: \n");
        printf(" 5 - Salir \n\n:  ");
        printf(" 6 - Seleccione una opcion:  ");
        scanf("%d",&opcion);

        switch  (opcion)
            {
                case 1:
                    printf("Ingrese el primer numero ");
                    scanf("%f",&variableUno);
                    break;
                case 2:
                    printf("Ingrese el segundo numero ");
                    scanf("%f",&variableDos);
                    break;
                case 3:
                    resultadoSuma=suma(variableUno,variableDos);
                    resultadoResta=resta(variableUno,variableDos);
                    resultadoDivision=division(variableUno,variableDos);
                    resultadoMultiplicacion=multiplicacion(variableUno,variableDos);
                    resultadoFactorialA=factorialop1(variableUno);
                    resultadoFactorialB=factorialop2(variableDos);
                    break;
                case 4:
                    printf("Resultado de la suma: %f\n", resultadoSuma);
                    printf("Resultado de la resta: %f\n", resultadoResta);
                    printf("Resultado de la division: %f\n", resultadoDivision);
                    printf("Resultado de la multiplicacion: %f\n", resultadoMultiplicacion);
                    printf("Resultado del factorial del primer numero: %f\n", resultadoFactorialA);
                    printf("Resultado del factorial del segundo numero: %f\n", resultadoFactorialB);
                    break;
            }

        }
        while (opcion!=5);

    return 0;

}
