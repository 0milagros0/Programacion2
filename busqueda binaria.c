#include <stdio.h>

int main()
{
	int lista[9]= {0, 4,5 ,7, 32, 40, 77, 100,123};
	int i,inicio,final,medio,num; 
	
	for(i = 0; i < 9; i++)
  //imprime digitos 0:0,1:4, 2:5...
     		printf("Digito %d:%d\n",i,lista[i]);
	/*busqueda binaria*/
	printf("Ingresar el numero a buscar:\n");
	scanf("%d",&num);
	inicio = 0;
	final = 9 - 1; /*n-1, n es la cantidad de elementos del arreglo*/
	
	medio=0;
  //el ciclo sigue mientras haya espacio para buscar y el numero no haya sido encontrado
	while ((inicio <= final) && num!=lista[medio])
	{
    //calculo el medio
		medio = (inicio + final) / 2;
		if (num > lista[medio])
      //numero ingresado  es mayor 
			inicio = medio + 1;
		else
			final = medio - 1;
	}
	
	if (num == lista[medio])
	   {
		printf(" %d encontrado en la posicion %d\n",num,medio);
        final=9;
		//este elimina el elemento desplazando todo a la izquierda
		while(medio < final)
		{
			lista[medio]=lista[medio+1];
	        medio++;	
		}
		
		   
	   }
	
	else
		printf(" %d no esta en el arreglo\n",num);



	
return 0;
}
