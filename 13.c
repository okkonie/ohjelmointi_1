#include <stdio.h>

int main(void){

  int i;
  int j;

  for(i = 1; i <= 8; i++){
    for(j = 1; j <= i; j++) {
      printf("a");
    }
    printf("\n");
  };

  return 0;
}