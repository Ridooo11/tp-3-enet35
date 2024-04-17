#include <stdio.h>


int i;
void copiarArray(int *arr1, int *arr2, int longitud);

int main() {
	
	int arr1[] = {50, 30, 40, 120, 20, 22};
    int longitud = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[longitud];
    
	copiarArray(arr1, arr2, longitud);
	
	printf("Array 1:\n\n");
	for ( i = 0; i < longitud; i++) {
		printf("Posicion %d: %d\t", i, arr1[i]);
	}
	printf("\n\nArray 2:\n\n");
	for ( i = 0; i < longitud; i++) {
		printf("Posicion %d: %d\t", i, arr2[i]);
	}
	
}

void copiarArray(int *arr1, int *arr2, int longitud) {
	for ( i = 0; i < longitud; i++) {
		*(arr2 + i) = *(arr1 + i);
	}
}
