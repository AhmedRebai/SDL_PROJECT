#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "time.h"

int maximum (int valeur1, int valeur2) {
  int max;
  if (valeur1<valeur2)
    max=valeur2;
  else
    max=valeur1;
  return max;
}



int main () {
  int i1,i2;
  printf("entrez 1 valeur:");
  scanf("%d",&i1);
  printf("entrez 2 valeur:");
  scanf("%d",&i2);
  printf("max des 2 valeurs :%d\n", maximum(i1,i2));
  return 0;
}



