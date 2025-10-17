#include <stdio.h>

int kertoma(int luku){
  int kertoma = 1;
  for(int i = 1; i <= luku; i++){
    kertoma *= i;
  }
  return kertoma;
}

int main()
{
    // Tulosmuuttuja e
    double e = 1.0;

    for(int i = 1; i <= 10; i++){
      printf("\n%lf", e);
      e += 1.0 / (double)kertoma(i);
    }

    // Ohjelman lopussa yksi tyhjä rivi    
    printf("\n");
    
    return 0;
}