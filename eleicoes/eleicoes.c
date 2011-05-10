/* 
 * Problem at: http://br.spoj.pl/problems/ELEICOES/
 * Author: Philip Sampaio
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *votes;
  int total_votes = 0;
  int i = 0;
  int winner = 0;
  int j = 0;
  scanf("%d",&total_votes);
  votes = malloc(total_votes * sizeof(int));
  if ( votes == NULL ) {
    printf("out of memory \n");
    return 0;
  }
  for (i=0; i < total_votes; i++) {
    votes[i] = 0;
    scanf("%d",j);
    if ( j < 1000000000 && j > 0 ) votes[i] = j;
  }

  free(votes); 
  return 0;
}
