#include <stdio.h>

double laskeParkkiMaksu(double aika){
  double hinta = 0.0;

  if(aika < 3.0){
    hinta = 2.0;
  } else {
    hinta = 2.0 + (aika - 3.0) * 0.5;
  }

  if(hinta > 10.0){
    return 10.0;
  } else {
    return hinta;
  }
}

int main(){

  for(int i = 0; i < 4; i++){
    
  }

  printf("%11s %11s %11s \n", "Asiakas", "Tunnit", "Veloitus");

  for(i)

  return 0;
}