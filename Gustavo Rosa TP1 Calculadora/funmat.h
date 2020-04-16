#ifndef FUNMAT_H_INCLUDED
#define FUNMAT_H_INCLUDED

char menu();

/** \brief Solicita que el usuario ingrese un numero entero
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

int factorial(int numero);
/* @brief	Nos permite obtener el resultado del factorial de un numero, utilizo for para igualar el contador al numero asi se cuantas veces tiene que dar
   la vuelta la iteracion, luego si el numero es mas grande que el contador aun, sigo y a medida que da vueltas, va decrementandose el contador.
* @param	En numeroIngresado, se completa con el numero que ingreso el usuario sea en el caso A o B.
* @return	Retorna el resultado del factorial de CADA numero.*/


#endif // FUNMAT_H_INCLUDED

