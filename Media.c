#include <stdio.h>


int main() {
  int n1, n2, n3;
  printf("Digire três números\n");
  scanf("%i %i %i", &n1, &n2, &n3 );
  printf("O resultado é: %i \n", (n1 + n2 + n3)/3);
  return 0;

}
