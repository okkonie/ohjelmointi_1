#include <stdio.h>

int main(void){

  int pisteet;

  printf("Anna pistemaara > ");
  scanf("%d", &pisteet);
  
  if (0 > pisteet || pisteet > 24){
    printf("Virheellinen pistemaara");
  } else if (pisteet <= 11){
    printf("Hylatty");
  } else if (pisteet <= 13){
    printf("1");
  } else if (pisteet <= 16){
    printf("2");
  } else if (pisteet <= 19){
    printf("3");
  } else if (pisteet <= 22){
    printf("4");
  } else {
    printf("5");
  }
}