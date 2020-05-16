#include <stdio.h>

int main(){

    char c;
    int cod;
    scanf("%c", &c);
    cod = (c == 'A' || c == 'a') ? 65 : (c == 'B') ? 66 : (c == 'C') ? 67 : -1; // o -1 é como se fosse um default
    printf("Codigo ASCII: %i\n", cod); // %i e %d são basicamente a mesma coisa
}

// #include <ctype.h>
// c = toupper(c) => transforma o c em maíusculo