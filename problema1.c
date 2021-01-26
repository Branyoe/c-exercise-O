#include<stdio.h>

int main(){
  printf("Precio del producto: ");
  float x;
  scanf("%f",&x);
  printf("Cantidad recibida: ");
  float z;
  scanf("%f",&z);
  float cambio = z - x;
  printf("El cambio es: %.2f", cambio);
  return 0;
}