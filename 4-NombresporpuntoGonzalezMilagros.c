#include <stdio.h>

int main()
{
	FILE *arch;
	char texto[100];
	char c;
	
	arch = fopen("nombres.txt", "w");
	
	printf("ingresar 5 nombres separados por punto:\n");
	scanf("%s", texto);
	
	fprintf(arch, "%s", texto);
	fclose(arch);
	
	arch = fopen("nombres.txt", "r");
	
	printf("\nNombres:\n");
	
	while ((c = fgetc(arch)) != EOF)
	{
		if (c == '.')
			printf("\n");
		else
			printf("%c", c);
	}
	
	fclose(arch);
	
	return 0;
}
