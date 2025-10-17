#include <stdio.h>
#include <math.h>

int pyoristaKokonaisluvuksi(double luku){
  return floor(luku + 0.5);
}

double pyoristaKymmenesosat(double luku){
  return floor(luku * 10.0 + 0.5) / 10;
}

double pyoristaSadasosat(double luku){
  return floor(luku * 100.0 + 0.5) / 100;
}

double pyoristaTuhannesosat(double luku){
  return floor(luku * 1000.0 + 0.5) / 1000;
}

int main(){
  double luku = 0.0;

  for(int i = 0; i < 5; i++){
    printf("Syota reaaliluku > ");
    scanf("%lf", &luku);
    
    printf("\n%lf %d\n%lf %lf\n%lf %lf\n%lf %lf\n\n", luku, pyoristaKokonaisluvuksi(luku), luku, pyoristaKymmenesosat(luku), luku, pyoristaSadasosat(luku), luku, pyoristaTuhannesosat(luku));

  }
  
  return 0;
}