#include <stdio.h>


void encotrarSumaYPromedio(int *array, int longitud, int *suma, float *promedio);

int main() {
	int suma;
	float promedio;
	int array[] = {10, 20, 30, 40, 47};
	int longitud = sizeof(array) / sizeof(array[0]);
	
	encotrarSumaYPromedio(array, longitud, &suma, &promedio);
	
	printf("La suma del arreglo es: %d\n", suma);
	printf("El promedio del arreglo es: %f", promedio);
}

void encotrarSumaYPromedio(int *array, int longitud, int *suma, float *promedio) {
	int i;
	*suma = 0;
	for (i = 0; i < longitud; i++) {
		*suma += *(array + i);
	}
	
	*promedio = (float)*suma / longitud;
}
