//Haz un arreglo dinamico

//fuente consulatada para desarrollarlo: 
//https://es.stackoverflow.com/questions/99538/array-dinamico-en-c
//Link de mi repositorio personal de github para exportar mi codigo a linux mediante el comando git-clone
//https://github.com/Spiderhack222/Arreglo_Dinamico.git


#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamano;
    
    // Solicitar el tamaño del arreglo
    printf("Ingrese el tama%co del arreglo (5-20): ", 164);
    scanf("%d", &tamano);
    
    // Validar que el tamaño esté en el rango
    if (tamano < 5 || tamano > 20) {
        printf("Error: El tama%co debe estar entre 5 y 20.\n", 164);
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
