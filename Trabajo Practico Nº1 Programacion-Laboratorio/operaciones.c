#include <stdio.h>
#include <stdlib.h>


/** \brief Suma los enteros num1 y num2, devuelve el total
 *
 * \param   num1 primer operando entero
 * \param   num2 segundo operando entero
 * \return retorna el total de los 2 operando
 *
 */

int sumar(int num1, int num2)
{
    int totalsuma;
    printf("El resultado del calculo (A+B) es : %d \n" , num1 + num2);
    return totalsuma;

}

/** \brief resta  los enteros num1 y num2, devuelve el total
 *
 * \param num1 primer operando entero
 * \param num2 segundo operando entero
 * \return retorna el total de la resta de los 2 operando
 *
 */


int restar(int num1, int num2)
{
    int totalresta;
    printf("El resultado de su calculo (A-B) es: %d \n" , num1 - num2);
    return totalresta;

}

/** \brief multiplicacion de los enteros num1 y num2, devuelve el total
 *
 * \param num1 primer operando entero
 * \param num2 segundo operando entero
 * \return retorna el total de la multiplicacion
 *
 */
int multiplicar(int num1, int num2)
{
    int totalmutiplicar;
    printf("El resultado de su calculo (A*B) es: %d \n" , num1 * num2);
    return totalmutiplicar;
}

/** \brief division de los enteros num1 y num2 con casting, devuelve el resutaldo o error en caso de dividir valores menor a 0
 *
 * \param num1 primer operando entero con casting (float)
 * \param num2 segundo operando entero
 * \return el total de la divicion de num1 y num2, en el caso que se divida por 0 envia error
 *
 */

int dividir(int num1, int num2)
{
    int totaldividir;
    if (num2 == 0)
    {
        printf("Error. no se pudo dividir por 0 \n");
    }
    else
    {
        printf("El resultado de su calculo (A/B) es : %.2f \n" ,(float)num1 / num2);
    }
    return totaldividir;


}
/** \brief factorial del operando entero num1 y operando entero num2
 *
 * \param num1 primer operando entero
 * \param num2 segundo operando entero
 * \return devuelve el resultado o en el caso que algun operando sea negativo indicara que no es posible hacer el factorial
 *
 */


int factorial(int num1, int num2)
{
    int totalfactorial;
    int i;
    int i2;
    int factorial_1=1;
    int factorial_2=1;

    if (num1 > 0)
    {
        for(i=1;i<=num1;i++)
    {
    factorial_1=factorial_1*i;

    }
    }
    else
    {
        printf("El primer numero no tiene factorial \n");
    }
    if (num2 > 0)
    {
        for(i2=1;i2<=num2;i2++)
    {
    factorial_2=factorial_2*i2;
    }
    }
    else
    {
        printf("El segundo numero no tiene factorial \n");
    }
    printf("El factorial de A es : %d\n\n El factorial de B es: %d\n\n",factorial_1,factorial_2);
    return totalfactorial;
}

