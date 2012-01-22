#include <stdio.h>

char answer(int *);

int main(int argc, const char *argv[])
{
  int n = 0, j= 0, i = 0;
  int r[5] = {0,0,0,0,0};
  while ( scanf("%d\n", &n) != EOF && n != 0 ) {
    for( j= 0 ; j < n; j++) {
      scanf("%d %d %d %d %d\n",&r[0],&r[1],&r[2],&r[3],&r[4]);
      printf("%c\n", answer(r));
    }
  }
  return 0;
}

char answer(int * choices) {
  int i = 0;
  char ch[5] = {'A','B','C','D','E'};
  char r = 'Z';
  for(i;i< 5;i++) {
    if ( r == 'Z' && choices[i] <= 127 )
      r = ch[i];
    else if ( choices[i] <= 127 || choices[i] < 0 || choices[i] > 255 )
      return '*';
  }
  if ( r == 'Z' ) r = '*';
  return r;
}
