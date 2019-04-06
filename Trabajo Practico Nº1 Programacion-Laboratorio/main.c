#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main()
{
    int num1=0;
    int num2=0;
    int opciones;
    int resultadosumar;
    int resultadorestar;
    int resuttadodividir;
    int resultadomultiplicar;
    int resultadofactorial;
    int flag_1=0;
    int flag_2=0;


        printf("CALCULADORA\n");

    do{

         if(flag_1==0)
            {
                printf("\n1- Ingrese el primer operando ");
            }
            else
                {
                printf("\n1- Ingrese el primer operando A=%d ",num1);
                }

                if(flag_2==0)
                    {
                        printf("\n2- Ingrese el segundo operando \n");
                }
                else
                {
                    printf("\n2- Ingrese el segundo operando  B=%d \n",num2);
                }
                printf("3- Calcular todas las operaciones \n");
                printf("4- Informar resultados \n");
                printf("5- Salir \n");

                printf("\nDigite su opcion: ");
                scanf("%d" , &opciones);

        switch(opciones)
        {
            case 1:
                printf("1.ingrese el primer operando: \n");
                scanf("%d", &num1);
                printf("El primer operando es:%d \n", num1);
                flag_1=1;
            break;
            case 2:
                printf("2.ingrese el segundo operando: \n");
                scanf("%d", &num2);
                printf("El segundo operando es:%d \n", num2);
                flag_2=1;
            break;
            case 3:
                printf("3.Calculando todas las operaciones, Ingrese 4 para mostrarlo \n");
            break;
            case 4:
                 if(flag_1==0 || flag_2==0)
                {
                    printf("Error. La operacion no se puede realizar porque falta ingresar los operando");
                }else
                {
                printf("4.informar todos los resultados: \n");

                resultadosumar= sumar(num1, num2);
                resultadorestar= restar(num1, num2);
                resuttadodividir= dividir(num1, num2);
                resultadomultiplicar= multiplicar(num1, num2);
                resultadofactorial= factorial(num1, num2);
                }
            break;
            case 5:
                printf("5.salir\n");
            break;
            default:
                printf("Error, ingrese una opcion correcta\n\n");
            break;
        }
    }
    while(opciones != 5);

    return 0;
}
