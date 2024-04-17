#include <stdio.h>

void intercambio (int *puntero1, int *puntero2);

int main() {
	int numero1 = 20, numero2 = 10;
	printf("Valores iniciales\n numero 1 = %d \n numero 2 = %d\n", numero1, numero2);
	intercambio(&numero1, &numero2);
	printf("Valores finales\n numero 1 = %d \n numero 2 = %d", numero1, numero2);
}

void intercambio (int *puntero1, int *puntero2) {
	int temp = *puntero1;
	*puntero1 = *puntero2;
	*puntero2 = temp;
}
