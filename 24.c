  #include <stdio.h>
  #include <math.h>

  double pyorista(double luku){

    double pyoristetty = floor(luku + 0.5);
    return(pyoristetty);
  }

  int main(){

    double luvut[5];

    for (int i = 0; i < 5; i++) {
      printf("%d. luku > ", i + 1);
      scanf("%lf", &luvut[i]);
    };

    for (int i = 0; i < 5; i++) {
      printf("%lf %lf\n", luvut[i], pyorista(luvut[i]));
    }

    return 0;
  }