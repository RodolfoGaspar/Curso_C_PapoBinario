#include <stdio.h>

int main(void){
  char c;

  printf("O tamanho de c eh: %lu byte\n", sizeof c);
  printf("O tamanho de c eh: %lu byte\n", sizeof (char));
  printf("O tamanho de c eh: %lu byte / %lu bits\n", sizeof c, sizeof c * 8);

  c=255;
  printf("O valor de c eh %i\n", c);

  c=127;
  printf("O valor de c eh: %i\n", c);

  c=128;
  printf("O valor de c eh: %i\n", c);

  return 0;
}
