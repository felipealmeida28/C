#include <stdio.h>


int main() {

int a;
  printf("Digite um Número: ");
  scanf("%i", &a);
  if ( a < 0)
  printf("Número negativo: %i", a);
  else if(a==0)
  printf("Número igual a zero: %i", a );
  else
  printf("Número possitivo: %i", a );
  return 0;
}
