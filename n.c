#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamano;
    
    // Solicitar el tamaño del arreglo
    printf("Ingrese el tamaño del arreglo (5-20): ");
    scanf("%d", &tamano);
    
    // Validar que el tamaño esté en el rango
    if (tamano < 5 || tamano > 20) {
        printf("Error: El tamaño debe estar entre 5 y 20.\n");
        return 1;
    }
    
    // Asignar memoria dinámicamente
    int *arreglo = (int*)malloc(tamano * sizeof(int));
    if (arreglo == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }
    
    // Llenar el arreglo para evitar valores basura
    for (int i = 0; i < tamano; i++) {
        arreglo[i] = i + 1;
    }
    
    // Imprimir el arreglo
    printf("Arreglo: ");
    for (int i = 0; i < tamano; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
    
    // Liberar memoria
    free(arreglo);
    
    return 0;
}
