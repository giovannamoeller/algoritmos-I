#include <stdio.h>
#include <string.h>

int main() {
    char str1[40], str2[40];
    strcpy (str1, "Algoritmos I");
    strcpy (str2, " - BSI\n");
    strcat (str1, str2); // concatenar duas strings
    printf("%s", str1);
}