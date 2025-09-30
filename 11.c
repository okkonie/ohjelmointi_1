#include <stdio.h>

int main(void) {

  int luku = 0;
  int luku1 = 0;
  int luku2 = 0;
  int luku3 = 0;
  int luku4 = 0;
  int luku5 = 0;

  printf("Anna 5 numeroinen positiivinen kokonaisluku > ");
  scanf("%d", &luku);

  if (luku / 10000 > 10 || luku / 10000 < 1) {
    printf("Syote ei ole viisinumeroinen positiivinen kokonaisluku");
    return 0;
  }

  int alkuperainen = luku;

  luku1 = luku / 10000;
  luku = luku % 10000;

  luku2 = luku / 1000;
  luku = luku % 1000;

  luku3 = luku / 100;
  luku = luku % 100;

  luku4 = luku / 10;
  luku = luku % 10;

  luku5 = luku;
  
  if (luku1 == luku5 && luku2 == luku4) {
    printf("Luku %d on palindromi", alkuperainen);
  } else {
    printf("Luku %d ei ole palindromi", alkuperainen);
  };

  return 0;
}