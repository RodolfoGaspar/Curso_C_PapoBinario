#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main(void){
  int i = INT_MAX; 
  unsigned int ui = UINT_MAX;
  uint32_t i32 = UINT_MAX;
  uint16_t i16 = SHRT_MAX;

  printf("O tamanho de sc eh: %zu byte\n", sizeof i);
  printf("O tamanho de sc eh: %zu byte\n", sizeof i);
  printf("O tamanho de sc eh: %zu byte / %zu bits\n", sizeof i, sizeof i* 8);

  i=255;
  printf("O valor de i eh: %d\n", i);

  i=127;
  printf("O valor de i eh: %d\n", i);

  i=129;
  printf("O valor de i eh: %d\n", i);

  i=INT_MAX;
  printf("O valor de i eh: %d\n:", i);

  printf("O valor de ui eh: %u\n", ui);

  printf("O valor de i32 eh: %u\n", i32);
  printf("O valor de i16 eh: %u\n", i16);

  return 0;
}
