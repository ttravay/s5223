#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j;
  int nbColonne = 128, nbLigne = 128;

  printf("P3\n%d %d\n255\n", nbColonne, nbLigne);

  for (i = 0; i < nbLigne; i++)
    for (j = 0; j < nbColonne; j++) {
      printf("%d %d %d\n", (int)rand() % 256, (int)rand() % 256,
             (int)rand() % 256);
    }

  return 0;
}