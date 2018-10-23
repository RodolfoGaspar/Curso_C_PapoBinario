#include <stdio.h>

int main(void){
  int ret = 0;

  ret=printf("hello world\n");
  printf("%x - %x - %x - %c\n", ret, 10, 0xa, 65);
	return 0;
}
