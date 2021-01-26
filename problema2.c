#include<stdio.h>

int main(){
  printf("Radio: ");
  float r;
  scanf("%f", &r);
  float A = 4 * 3.1416 * (r*r);
  //en la formula del volumen si no me equivo se multiplca por 4/3 no por 1/3 pero lo dejé así para seguir bien las insrucciones.
  float V = 3.1416*1/3*r*r*r;
  printf("Area: %.4f\n", A);
  printf("Volumen: %.4f", V);
}