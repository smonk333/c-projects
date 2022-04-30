//pointer exercise 1
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *z, n, o, m = 10;
  z = &m;

  printf("z stores the address of m = %p\n", z);
  printf("*z stores the value of m = %d\n", *z);
  printf("&m is the address of m = %p\n", &m);
  printf("&n is the address of n = %p\n", &n);
  printf("&o is the address of o = %p\n", &o);
  printf("&z is the address of z = %p\n", &z);

  return 0;
}
