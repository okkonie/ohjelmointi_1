#include <stdio.h>

int main(){

  int luku1 = 0;
  int luku2 = 0;

  printf("1. luku > ");
  scanf("%d", &luku1);

  printf("2. luku > ");
  scanf("%d", &luku2);

  if (luku2 == 0){
    printf("Luku %d ei ole luvun %d monikerta.", luku1, luku2);
    return 0;
  }

  if (luku1 % luku2 == 0) {
    printf("Luku %d on luvun %d monikerta.", luku1, luku2);
  } else {
    printf("Luku %d ei ole luvun %d monikerta.", luku1, luku2);
  }

  return 0;
}