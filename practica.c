EJERCICIO
int numeros[5] = {3, 7, 9, 1, 4};
int buscado = 9;

//las posiciones empiezan desde 0 en C
resultado: imprime posicion 2 

EJERCICIO
#include <stdio.h>
void agregarFinal(int arr[], int valor, int size) {
    arr[size - 1] = valor;
}
int main() {
    int valores[4] = {1, 2, 3, 4};
    agregarFinal(valores, 99, 4);
    printf("%d\n", valores[3]);
    return 0;
}
resultado:99

EJERCICIO
int datos[] = {1, 4, 6, 8};
for (int i = 0; i < 4; i++) {
    if (datos[i] > 5) {
        datos[i] = 0;
    }
}
        
¿Qué valor tendrá datos[2] después de ejecutar el programa?
datos[0]= 1 → no es mayor que 5 → queda igual
datos[1]=4 → no es mayor que 5 → queda igual
datos[2]=6 → sí es mayor que 5 → se cambia a 0
datos[3]=8 → sí es mayor que 5 → se cambia a 0
resultado:0 

EJERCICIO
int main() {
   int mat[2][3] = {
                 {1, 2, 3},
                 {4, 5, 6}
     };
     for (int i = 0; i < 2; i++) {
         for (int j = 0; j < 3; j++) {
               printf("%d ", mat[i][j]);
         }
   }
     return 0;
}
¿Cuál será la salida?
//al termminar el segundo for,empieza el primero otra vez y "reinicia" j=0
resultado:1 2 3 4 5 6

EJERCICIO
#include <stdio.h>
void modificar( int x) {
x = 20;
}
int main() {
    int a = 10;
   modificar( a);
    printf("Resultado: %d\n", a);
    return 0;
}
resultado:10,se modifica solo x,a no cambia.

EJERCICIO
int datos[] = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; i++) {
    if (datos[i] % 2 == 0) {
        datos[i] = datos[i] * 10;
    }
}
printf("%d", datos[1]);
resultado:20

EJERCICIO
#include <stdio.h>
void insertarValor(int arr[], int pos, int valor) {
    arr[pos] = valor;
}
int main() {
    int numeros[5] = {1, 2, 3, 4, 5};
    insertarValor(numeros, 2, 99);
    printf("%d\n", numeros[2]);
    return 0;
}
RESULTADO: 99

EJERCICIO
El siguiente programa utiliza dos funciones: una para calcular el cuadrado y otra para sumar dos cuadrados.
#include <stdio.h>
int cuadrado(int x) { return x * x; }
int sumaCuadrados(int a, int b) {
   return nose;
}
int main() {
   int resultado =       sumaCuadrados( 2, 3 );
   printf("Resultado: %d\n", resultado);
   return 0;
}
¿Cuál es el resultado?
resultado: 13

EJERCICIO
La siguiente función imprime un mensaje pero no devuelve valor. Completá el código y seleccioná la afirmación correcta sobre su
comportamiento.
#include <stdio.h>
void saludar() {
printf("Hola mundo\n");
return ;//no es return 0,puede ser vacio
}
int main() {
saludar();

return 0;
}
¿Qué hace el programa?
imprime hola mundo

EJERCICIO
Analiza el siguiente código:
int matriz[2][2];
matriz[0][0] = 1;
matriz[0][1] = 2;
matriz[1][0] = 3;
matriz[1][1] = 4;
¿Qué valores tiene la matriz después de la INSERCION?
RESULTADO: 1 2 3 4

EJERCICIO
int numeros[] = {10, 20, 30, 40, 50};
for (int i = 0; i < 5; i++) {
if (i == 2) {
numeros[i] = 100;
}
}
printf("%d", numeros[2]);
¿Qué valor se imprimirá al final del programa?
resultado:100
    
DATOS:
sizeof:sirve para saber cuanto espacio ocupa una variable o un tipo de dato en la memoria.
general:
char: 1
int: 4
float:4
double:8
sizeof(arreglo[0]): tamaño de elemento
sizeof(arreglo):dependiendo el tipo,se multiplica por la cantidad de elementos.
ej: int arreglo[5] seria 5(elementos)*4(tipo int)=20 bytes

PREGUNTA
La búsqueda de un elemento en un arreglo consiste en: 
Recorrer el arreglo a fin de encontrar el valor buscado

PREGUNTA
Un arreglo es “un conjunto finito ordenado de elementos homogéneos”.
Ordenado:entendemos que los elementos están dispuestos de tal manera que hay un elemento cero, un elemento primero, un segundo
Homogeneo:entendemos que todos los elementos del arreglo son del mismo tipo.
Finito:entendemos que hay un número especifico de elementos en el arreglo; número que debe ser grande o pequeño

PREGUNTA
Una cadena no se puede ordenar aplicando cualquier método de ordenamiento que se utiliza para ordenar un arreglo:verdadero

PREGUNTA
Establecer las relaciones según corresponda:
El ordenamiento de un arreglo 
La búsqueda binaria no se puede aplicar 
El arreglo debe estar ordenada  
se realiza mediante un determinado criterio de ordenamiento

PREGUNTA
La o las ventajas de las funciones son:
cuando cada módulo esta bien probado se lo puede usar las veces que sea necesario sin volver a revisarlo.

PREGUNTA
En C las funciones pueden ser:
predefinidas por C y Definidas por el usuario

PREGUNTA
La sentencia RETURN fuerza la salida inmediata del cuerpo de la función y se vuelve a la siguiente sentencia  después de la llamada:
Verdadero

PREGUNTA
Una estructura o registro es una estructura de datos que agrupa variables que pueden tener tipos diferentes: Verdadero 
    
PREGUNTA
Establecer la relación entre la función y su significado:
strcmp(): compara una cadena con otra;
strchcr(): localiza primera instancia de un caracter dentro de un string;
islower(caracter): devuelve cierto si caracter es una letra minúscula, y falso en caso contrario

PREGUNTA
Que proposición  no esta asociada con arreglos
b. char <identificador> [<longitud máxima>];








