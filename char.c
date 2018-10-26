#include <stdio.h>

int main(void){
  signed char sc;
  unsigned char uc;

  printf("O tamanho de sc eh: %lu byte\n", sizeof sc);
  printf("O tamanho de sc eh: %lu byte\n", sizeof (char));
  printf("O tamanho de sc eh: %lu byte / %lu bits\n", sizeof sc, sizeof sc * 8);

  sc=255;
  printf("O valor de sc eh: %i\n", sc);

  sc=127;
  printf("O valor de sc eh: %i\n", sc);

  sc=129;
  printf("O valor de sc eh: %i\n", sc);

  uc = 255;
  printf("O valor de uc eh: %i\n", uc);

  uc=127;
  printf("O valor de uc eh: %i\n", uc);

  uc=129;
  printf("O valor de uc eh: %i\n", uc);

  sc = 10;
  printf("O valor de sc eh: %i\n", sc);

  sc = 0xa;
  printf("O valor de sc eh: %i\n", sc);

  sc = '\n';
  printf("O valor de sc eh: %i\n", sc);
    

  return 0;
}
