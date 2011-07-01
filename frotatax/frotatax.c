#include <stdio.h>

int main() {
  float a = 0.0f;
  float g = 0.0f;
  float ra = 0.0f;
  float rg = 0.0f;
  scanf("%f %f %f %f",&a, &g, &ra, &rg);
  printf("%c",( (( rg / g ) >= ( ra / a )) ? 'G' : 'A') );  

  return 0;
}
