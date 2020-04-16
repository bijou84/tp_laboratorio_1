#include <stdio.h>
#include <stdlib.h>
#include "funmat.h"

char menu()
{

    char opcion;

    system("cls");
    printf("-------CALCULADORA------\n");
    printf("------GUSTAVO ROSA------\n\n");
    printf("----Elija una opcion----\n\n");
    printf("a- Ingresar primer numero\n");
    printf("b- Ingresar segundo numero\n");
    printf("c- Calcular todas las operaciones\n");
    printf("d- Informar resultados\n");
    printf("e- Salir \n\n");
    fflush(stdin);
    scanf("\n%c", &opcion);

    return opcion;
}

int getNumero()
{
    int numero;

    printf("\nIngrese un numero: ");
    scanf("%d", &numero);

    return numero;

}

int sumar(int a, int b)
{
    return a + b;
}

int restar(int a, int b)
{
    return a - b;
}

int multiplicar(int a, int b)
{
    return a * b;
}

float dividir(float a, float b)
{
    float resultado;

    if(b!=0)
    {
        resultado= a/ b;
    }
    else
    {
        printf("La division por cero no esta permitida\n\n");
    }


    return resultado;
}

int factorial(int numero)
{
    int fact;

    if(numero == 1){
        fact = 1;
    }
    else
    {
        fact = numero * factorial(numero-1);
    }
    return fact;



}
