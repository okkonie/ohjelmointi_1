#include <stdio.h>

int kaanna(int luku){

  if(luku < 10){return luku;}

  int kaannos = 0;

  int tuhannet = luku / 1000;
  int sadat = (luku / 100) % 10;
  int kymmenet = (luku / 10) % 10;
  int ykkoset = luku % 10;

  if(tuhannet > 0){
    kaannos += tuhannet;
    kaannos += 10 * sadat;
    kaannos += 100 * kymmenet;
    kaannos += 1000 * ykkoset;
  } else if(sadat > 0){
    kaannos += sadat;
    kaannos += 10 * kymmenet;
    kaannos += 100 * ykkoset;
  } else {
    kaannos += kymmenet;
    kaannos += 10 * ykkoset;
  }


  return kaannos;
}

int main(){
  int luku; 

  printf("Anna kokonaisluku (1-9999) > ");

  scanf("%d", &luku);
  printf("Luku %d kaannettyna %d", luku, kaanna(luku));
}