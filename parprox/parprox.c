/* Problem at: http://br.spoj.pl/problems/PARPROX/ 
 * Author: Philip Sampaio
 */
#include <stdio.h>
#include <math.h>
#define EMPTY_LESSER -1.0
#define MAX_POINT 2000000 
#define MIN_POINT -2000000 

int main() {
  int array[1000][2];
  int i = 0;
  int j = 0;
  int size = 0;
  double lesser = EMPTY_LESSER;
  double dist = 0.0;
  double delta_a = 0.0;
  double delta_b = 0.0;

  scanf("%d",&size);
  if( size == 0 || size > 1000 ) return 0;	

  for(i = 0; i < size; i++) {
    scanf("%d %d",&array[i][0],&array[i][1]);
    if ( array[i][0] <= MAX_POINT && array[i][0] >= MIN_POINT && array[i][1] <= MAX_POINT && array[i][1] >= MIN_POINT ) {
      for(j = i - 1; j >= 0; j--) {
        delta_a = array[i][0] - array[j][0];
        delta_b = array[i][1] - array[j][1];
        dist = (delta_a*delta_a) + (delta_b*delta_b);
        if ( dist < lesser || lesser == EMPTY_LESSER ) lesser = dist;
      }
    }
  }
  lesser = sqrt(lesser);
  printf("%.3f", lesser); 
  return 0;
}
