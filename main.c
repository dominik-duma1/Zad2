#include "kwadrat.h"
#include "szescian.h"

int main(int argc, char **argv) {
  printf("Podaj bok kwadratu: ");
  double bok;
  scanf("%lf", &bok);
  printf("Pole kwadratu = %.3f\n", poleKwadratu(bok));
  
  printf("Podaj bok szescianu: ");
  scanf("%lf", &bok);
  printf("Pole szescianu = %.3f\n", poleSzescianu(bok));
  printf("Objetosc szescianu = %.3f\n", objetoscSzescianu(bok));

  return 0;
}
