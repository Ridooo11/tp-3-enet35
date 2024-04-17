#include <stdio.h>


int i;

void contarOcurrencias(int *arr, int longitud, int *contador, int elemento);

int main() {
	int contador = 0;
	int arr[] = {20, 40, 20, 50, 20, 20, 100};
	int longitud = sizeof(arr) / sizeof(arr[0]);
	int elemento = 20;
	
	contarOcurrencias(arr, longitud, &contador, elemento);
	printf("Array completo.\n\n");
	for (i = 0; i < longitud; i++) {
		printf("Posicion %d: %d\t", i, arr[i]);
	}
	
	printf("\n\nCantidad de veces que se repite el elemento %d: %d", elemento, contador);
	
}

void contarOcurrencias(int *arr, int longitud, int *contador, int elemento) {
	for (i = 0; i < longitud; i++) {
		if (*(arr + i) == elemento) {
			(*contador)++; // si fuera sin parentesis se estaria intentando aumentar la direccion de memoria.
		}
	}
}
