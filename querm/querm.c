#include <stdio.h>

int main(int argc, const char *argv[])
{
  int i = 0,j = 0, n = 0, p = 0;
  while (scanf("%d",&n) != EOF && n) {
    printf("Teste %d\n",i+1);
    for(j=0; j < n; j++) {
      scanf("%d",&p);
      if ( p == j+1) {
        printf("%d\n\n",p);
      }
      p = 0;
    }
    i++;
  }
  return 0;
}
