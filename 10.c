#include <stdio.h>

int main(void){

  int i;

  printf("\n%-7s%-7s%-7s%-7s","N", "10*N", "100*N", "1000*N");

  for (i = 1; i < 11; i++) {
    printf("\n%-7d%-7d%-7d%-7d", i, 10*i, 100*i, 1000*i);
  };

  return 0;
}