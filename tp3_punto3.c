#include <stdio.h>

void encontrarMayorYMenor(int *array, int longitud, int *mayor, int *menor) {
	int i;
	*mayor = *menor = array[0];
	for (i = 1; i < longitud; i++) {
		if (array[i] > *mayor) {
            *mayor = *(array + i); 
        }
        if (array[i] < *menor) {
            *menor = *(array + i); 
        }
	}
}

int main() {
	int mayor, menor;
	int array[] = {10, 50, 100, 90, 20};
	int longitud = sizeof(array) / sizeof(array[0]);
	
	encontrarMayorYMenor(array, longitud, &mayor, &menor);
	
	printf("El numero mas grande del array es: %d\n", mayor);
	printf("El numero mas chico del array es: %d", menor);
}
