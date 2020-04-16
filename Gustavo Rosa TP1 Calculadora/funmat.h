#ifndef FUNMAT_H_INCLUDED
#define FUNMAT_H_INCLUDED


/** \brief Muestra un menu de opciones al usuario.
 *
 * \return Devuelve la opcion seleccionada por el usuario.
 *
 */

char menu();

/** \brief Solicita que el usuario ingrese un numero entero.
 *
 * \return Devuelve el numero entero solicitado.
 *
 */
int getNumero();

/** \brief Suma dos numeros enteros.
 *
 * \param El primer numero entero ingresado por el usuario.
 * \param El segundo numero entero ingresado por el usuario.
 * \return Devuelve el resultado de la suma de ambos numeros enteros.
 *
 */
int sumar(int numero1,int numero2);

/** \brief Resta dos numeros enteros.
 *
 * \param El primer numero entero ingresado por el usuario.
 * \param El segundo numero entero ingresado por el usuario.
 * \return Devuelve el resultado de la resta de ambos numeros enteros.
 */
int restar(int numero1,int numero2);

/** \brief Multiplica dos numeros enteros.
 *
 * \param El primer numero entero ingresado por el usuario.
 * \param El segundo numero entero ingresado por el usuario.
 * \return Devuelve el resultado de la multiplicacion de ambos numeros enteros.
 *
 */
int multiplicar(int numero1, int numero2);

/** \brief Divide dos numeros enteros.
 *
 * \param El primer numero entero ingresado por el usuario.
 * \param El segundo numero entero ingresado por el usuario.
 * \return Devuelve el resultado de la division de ambos numeros enteros.
 *
 */
float dividir(float numero1, float numero2);

/** \brief Calcula el factorial de un numero entero ingresado por el usuario
 *
 * \param Numero entero ingresado por el usuario.
 * \return Devuelve el resultado del factorial del numero ingresado por el usuario.
 *
 */

int factorial(int numero);


#endif // FUNMAT_H_INCLUDED

