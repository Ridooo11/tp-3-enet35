#include <stdio.h>
#include <string.h>

void concatenar(char *string1, char *string2, char *cadenaJunta);

int main() {
	char string1[100] = "Hola, ";
	char string2[100] = "buen dia!";
	char cadenaJunta[200];
	
	concatenar(string1, string2, cadenaJunta);
	
	printf("String 1: %s\n", string1);
	printf("String 2: %s\n", string2);
	
	printf("\nEl string concatenado quedo asi: %s", cadenaJunta);
	
}

void concatenar(char *string1, char *string2, char *cadenaJunta) {
	int i, j;
	
	for (i = 0; *(string1 + i) != '\0'; i++) {
		*(cadenaJunta + i) = *(string1 + i);
	}
	
	for (j = 0; *(string2 + j) != '\0'; j++) {
		*(cadenaJunta + (i + j)) = *(string2 + j);
	}
	
	*(cadenaJunta + (i + j)) = '\0';
}
