#include <stdio.h>
#define qte 5

int main () {
  char texto[qte][15];
  int i;
  for (i = 0; i < qte; i++) {
    printf ("\nDigite uma cadeia de caracteres: ");
    gets (texto[i]);
  }
  printf ("\n\nAs cadeias de caracteres digitadas foram:\n");
  for (i = 0; i < qte; i++)
    printf ("%s\n",texto[i]);
}

