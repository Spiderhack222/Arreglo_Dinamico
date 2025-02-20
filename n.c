//Haz un arreglo dinamico

//fuente consulatada para desarrollarlo: 
//https://es.stackoverflow.com/questions/99538/array-dinamico-en-c
//Link de mi repositorio personal de github para exportar mi codigo a linux mediante el comando git clone
//https://github.com/Spiderhack222/Arreglo_Dinamico.git

//Comando para instalar valgrind en Ubuntu: sudo apt install valgrind

//Este si tiene numeros seudoaleatorios

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tamano;
    
    // Inicializar la semilla de números aleatorios
    srand(time(NULL));
    
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
    
    // Llenar el arreglo con números aleatorios en el rango 70-120
    for (int i = 0; i < tamano; i++) {
        arreglo[i] = (rand() % 51) + 70; // Genera valores entre 70 y 120
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
