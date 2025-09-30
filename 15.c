#include <stdio.h>

int main(){
  int luku = 0;
  printf("Anna 5 numeroinen kokonaisluku > ");
  scanf("%d", &luku);

  printf("Luku %d eroteltuna: ", luku);
  
  for(int i = 10000; i >= 1; i = i / 10){
    if(luku / i == 0){
      printf("0 ");
    } else {
      printf("%d ", luku / i);
    }

    luku = luku % i;
  };
  return 0;
}