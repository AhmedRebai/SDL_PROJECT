#include <stdio.h>
/* Fonction affichant un caractère */
void affiche_car (char car) {
  printf ("%c\n",car);
}
int main () {
  char c;
  int i;
  printf("Veuillez entrer un caractère:");
  scanf("%c",&c);
  for (i=0; i<100; i++)
    affiche_car(c);
  return 0;
}
