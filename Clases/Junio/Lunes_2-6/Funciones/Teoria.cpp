/* 
    ________________FUNCIONES:_________________
    * Void: Función vacia, no se recibe nada.
    -------------------------------------------
    ________________ESTRUCTURA:________________
    -------------------------------------------
        * Librerias
        * Funciones
        * Variables Globales o Locales
        * Utilización
            ° Funciones
        * Main
    -------------------------------------------
    _____________TIPOS DE VARIABLE:____________
    -------------------------------------------
        * Global/Public: Se puede acceder a ella desde 
        cualquier punto del codigo, incluso si no están 
        en el mismo documento.
        * Local/Private: Solo se puede acceder a ella 
        desde el mismo contexto en que se crea.
    -------------------------------------------
    _____________TIPOS DE ARCHIVOS_____________
    -------------------------------------------
    * .h: Un archivo .h se usa para declarar funciones, variables
    y estructuras que serán utilizadas en otros archivos, especialmente 
    en los .cpp. No contiene lógica ejecutable, sino definiciones que permiten
    organizar y reutilizar el código. Sirve como puente entre archivos, 
    facilitando la modularidad del programa.
    .h: declara (no se compila solo).
    .cpp: define y ejecuta (sí se compila).
    El compilador fusiona ambos cuando compila el 
    .cpp, usando las declaraciones del .h.
*/

#include <iostream>
using namespace std;

int suma(int a, int b)
{
    return (a + b);
}

int main()
{
    int num1 = 5, num2 = 7;
    cout << "La suma es: " << suma(num1, num2) << endl;
    return 0;
}
