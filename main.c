#include <stdio.h>

/*
  EJERCICIO 14: Defina la función copyString que recibe un puntero, que apuntará a una cadena de caracteres. Al ejecutarse la función, la misma deberá retornar una copia, en una nueva porción de memoria.
*/
char* copyString(char *str);

char* copyString(char *str) {
    int len = 0;
    while (str[len] != '\0') { // calcular la longitud de la cadena
        len++;
    }
    char *newStr = malloc((len + 1) * sizeof(char)); // reservar memoria para la nueva cadena
    if (newStr == NULL) { // comprobar si se pudo reservar memoria
        return NULL;
    }
    for (int i = 0; i <= len; i++) { // copiar la cadena caracter por caracter
        newStr[i] = str[i];
    }
    return newStr;
}


int main() {
    char str[] = "hola";
    char *newStr = copyString(str);
    if (newStr != NULL) {
        printf("La cadena original es: %s\n", str);
        printf("La nueva cadena es: %s\n", newStr);
        free(newStr); // liberar la memoria reservada
    } else {
        printf("Error al reservar memoria\n");
    }
    return 0;
}
