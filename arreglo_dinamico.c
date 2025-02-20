//Haz un arreglo dinamico

//fuente consulatada para desarrollarlo: 
//https://es.stackoverflow.com/questions/99538/array-dinamico-en-c
//Link de mi repositorio personal de github para exportar mi codigo a linux mediante el comando git clone
//https://github.com/Spiderhack222/Arreglo_Dinamico.git

//Comando para instalar valgrind en Ubuntu: sudo apt install valgrind


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

/*Respuesta al ejecutar le codigo en Ubuntu, bueno en este caso solo en la terminal de Ubuntu instalada
Windows usando la herramienta WSl*/

/*
spiderhack222@Ivan:~/Arreglo_Dinamico$ gcc arreglo_dinamico.c -o arreglo_dinamico
spiderhack222@Ivan:~/Arreglo_Dinamico$ ./arreglo_dinamico
Ingrese el tama�o del arreglo (5-20): 7
Arreglo: 1 2 3 4 5 6 7
spiderhack222@Ivan:~/Arreglo_Dinamico$ valgrind --leak-check=yes ./arreglo_dinamico              Comando visto en clase
==4191== Memcheck, a memory error detector
==4191== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4191== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==4191== Command: ./arreglo_dinamico
==4191==
Ingrese el tama�o del arreglo (5-20): 7
Arreglo: 1 2 3 4 5 6 7
==4191==
==4191== HEAP SUMMARY:
==4191==     in use at exit: 0 bytes in 0 blocks
==4191==   total heap usage: 3 allocs, 3 frees, 2,076 bytes allocated
==4191==
==4191== All heap blocks were freed -- no leaks are possible
==4191==
==4191== For lists of detected and suppressed errors, rerun with: -s
==4191== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
spiderhack222@Ivan:~/Arreglo_Dinamico$ valgrind --leak-check=full --show-leak-kinds=all ./arreglo_dinamico    Comando generado por IA
==4276== Memcheck, a memory error detector
==4276== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4276== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==4276== Command: ./arreglo_dinamico
==4276==
Ingrese el tama�o del arreglo (5-20): 7
Arreglo: 1 2 3 4 5 6 7
==4276==
==4276== HEAP SUMMARY:
==4276==     in use at exit: 0 bytes in 0 blocks
==4276==   total heap usage: 3 allocs, 3 frees, 2,076 bytes allocated
==4276==
==4276== All heap blocks were freed -- no leaks are possible
==4276==
==4276== For lists of detected and suppressed errors, rerun with: -s
==4276== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
spiderhack222@Ivan:~/Arreglo_Dinamico$
*/