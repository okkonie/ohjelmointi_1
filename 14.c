#include <stdio.h>

int main(void){

  // i kasvaa 1 kunnes 8
  for(int i = 1; i <= 8; i++){
    // 8 - i kertaa valilyonteja
    for(int k = 8 - i; k > 0; k--){
      printf(" ");
    }
    // i kertaa "a"
    for(int j = 1; j <= i; j++) {
      printf("a");
    }
    printf("\n");
  };

  return 0;
}