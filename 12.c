#include <stdio.h>

int main(void){
  int celsius;
  double fahrenheit;

  printf("%7s%12s\n", "Celsius", "Fahrenheit");

  for(celsius = -100; celsius <= 100; celsius = celsius + 10){

    fahrenheit = 1.8 * celsius + 32;
    printf("%5d%12.2f\n", celsius, fahrenheit);
  }

  return 0;
}