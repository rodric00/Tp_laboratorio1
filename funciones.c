#include <stdio.h>
#include <stdlib.h>

/** \brief la funcion "suma" recibe dos valores, realiza la operacion y devuelve el resultado.
*
* \param es el primer numero ingresado (variableUno)
* \param es el segundo numero ingresado (variableUno)
* \param return Devuelve el resultado de la suma de ambas variables
*
*/
float suma(float variableUno,float variableDos)
{
    float resultadoSuma;
    resultadoSuma = variableUno + variableDos;
    return resultadoSuma;
}

/** \brief La funcion "resta" recibe dos valores, realiza la operacion y devuelve el resultado.
*
* \param es el primer numero ingresado (variableUno)
* \param es el segundo numero ingresado (variableUno)
* \param return Devuelve el resultado de la resta de ambas variables
*
*/

float resta(float variableUno,float variableDos)
{
    float resultadoResta;
    resultadoResta = variableUno - variableDos;
    return resultadoResta;
}

/** \brief La funcion "division" recibe dos valores, realiza la operacion y devuelve el resultado.
*
* \param es el primer numero ingresado (variableUno)
* \param es el segundo numero ingresado (variableUno)
* \param return Devuelve el resultado de la division de ambas variables
*
*/

float division(float variableUno,float variableDos)
{
    float resultadoDivision;
    resultadoDivision = variableUno / variableDos;
    return resultadoDivision;
}

/** \brief La funcion "multiplicacion" recibe dos valores, realiza la operacion y devuelve el resultado.
*
* \param es el primer numero ingresado (variableUno)
* \param es el segundo numero ingresado (variableUno)
* \param return Devuelve el resultado de la multiplicacion de ambas variables
*
*/

float multiplicacion(float variableUno,float variableDos)
{
    float resultadoMultiplicacion;
    resultadoMultiplicacion = variableUno * variableDos;
    return resultadoMultiplicacion;
}

/** \brief La funcion factorial el primer valor, multiplica por su nº consecutivo inmediato de forma decreciente
 *        Devuelve la sumatoria de las sucesivas multiplicaciones a traves de la variable resultado
 *          (no incluye la multiplicacion por 1 por carecer de sentido).
*
* \param es el numero ingresado (variableCambiante)
* \param return devuelve el resultado del del factorial de dicho numero ingresado
*
*/

float factorialop1(float variableUno)
{
    float i;
    float resultadoFactorialA=1;
    for (i=variableUno; i > 1; i--)
        {
            resultadoFactorialA = resultadoFactorialA * i;
        }
    return resultadoFactorialA;

 }

/** \brief La funcion factorial recibe el segundo valor, multiplica por su nº consecutivo inmediato de forma decreciente
           Devuelve la sumatoria de las sucesivas multiplicaciones a traves de la variable resultado
           (no incluye la multiplicacion por 1 por carecer de sentido).
*
* \param es el numero ingresado (variableCambiante)
* \param return devuelve el resultado del del factorial de dicho numero ingresado
*
*/

float factorialop2(float variableDos)
{
    float i;
    float resultadoFactorialB=1;

    for (i=variableDos; i > 1; i--)
        {
            resultadoFactorialB = resultadoFactorialB * i;
        }
return resultadoFactorialB;

 }
