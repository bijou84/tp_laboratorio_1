#include <stdio.h>
#include <stdlib.h>
#include "funmat.h"

int main()
{
    int opcion;
    int num1;
    int num2;
    int flagNum1=0;
    int flagNum2=0;
    int flagResultados=0;
    int suma;
    int resta;
    int multiplicacion;
    float division;
    int factorialNum1;
    int factorialNum2;

    do
    {
        switch(menu())
        {
        case 'a':
            num1 = getNumero();
            flagNum1=1;
            break;
        case 'b':
            if(flagNum1==1)
            {
                num2 = getNumero();
                flagNum2=1;
            }
            else
            {
                printf("\nError. Antes debe ingresar el primer numero\n\n");
            }
            break;
        case 'c':
            if(flagNum1==1&&flagNum2==1)
            {
                suma=sumar(num1, num2);
                resta=restar(num1, num2);
                multiplicacion=multiplicar(num1, num2);
                division=dividir(num1, num2);
                factorialNum1=factorial(num1);
                factorialNum2=factorial(num2);
                flagResultados=1;
                printf("\nCalculando %d + %d = ?\nCalculando %d - %d = ?\nCalculando %d * %d = ?\nCalculando %d / %d = ?\nCalculando Factorial de %d = ?\nCalculando Factorial de %d = ?\n\n", num1, num2, num1, num2, num1, num2, num1, num2,num1, num2);

            }
            else
            {
                printf("\nError. Debe ingresar ambos numeros\n\n");
            }
            break;
        case 'd':
            if(flagResultados==1)
            {
                printf("\nEl resultado de %d + %d es: %d", num1, num2, suma);
                printf("\nEl resultado de %d - %d es: %d", num1, num2, resta);
                printf("\nEl resultado de %d * %d es: %d", num1, num2, multiplicacion);
                printf("\nEl resultado de %d / %d es: %.2f\n", num1, num2, division);
                printf("\nEl factorial de %d es: %d\n\n", num1, factorialNum1);
                printf("\nEl factorial de %d es: %d\n\n", num2, factorialNum2);
                flagNum1=0;
                flagNum2=0;
            }
            else
            {
                printf("\nError.No se pueden mostrar los resultados\n\n");
            }
            break;
        case 'e':
            opcion = 'e';
            printf("Saliste de la calculadora\n\n");
            break;
        }
        system("pause");
    }
    while (opcion != 'e');













    return 0;
}
