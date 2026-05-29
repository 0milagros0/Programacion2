/*Se desea calcular el costo de un telegrama,
 cada palabra esta separada por un * y cada oración por un . 
Si el telegrama consta de una oracion con 5 palabras el costo por caracter es de $100,
 si el telegrama tiene entre 2 y 3 párrafos y la cantidad de palabras no supera las 15 el costo de cada caracter es de $500
 y si no el costo de cada caracter es de $1.000 pesos,El final del telegrama se marca con el signo -*/
#include <stdio.h>

int main()
{
	char caracter;
	int cantCaracteres = 0;
	int cantPalabras = 1;
	int cantOraciones = 1;
	int costo;
	
	printf("Ingrese el telegrama y finalice con - \n");
	scanf("%c", &caracter);
	
	// WHILE DEL TELEGRAMA
	while(caracter != '-')
	{
		// WHILE DEL CARACTER
		while(caracter != '-' && caracter != '\n')
		{
			cantCaracteres++;
			
			// WHILE DE PALABRA
			while(caracter == '*')
			{
				cantPalabras++;
				scanf("%c", &caracter);
			}
			
			if(caracter == '.')
			{
				cantOraciones++;
			}
			
			scanf("%c", &caracter);
		}
	}
	
	// Calculo del costo
	if(cantOraciones == 1 && cantPalabras == 5)
	{
		costo = cantCaracteres * 100;
	}
	else
	{
		if(cantOraciones >= 2 && cantOraciones <= 3 && cantPalabras <= 15)
		{
			costo = cantCaracteres * 500;
		}
		else
		{
			costo = cantCaracteres * 1000;
		}
	}
	printf("Cantidad de caracteres: %d\n", cantCaracteres);
	printf("Cantidad de palabras: %d\n", cantPalabras);
	printf("Cantidad de oraciones: %d\n", cantOraciones);
	printf("Costo total: $%d\n", costo);
	
	return 0;
}
