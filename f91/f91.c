#include <stdio.h>

int main(int argc, const char *argv[])
{
  int i=0;

  while( scanf("%d\n",&i) != EOF && i != 0 ) {
    if ( i > 1000000) continue;
    printf("f91(%d) = %d\n",i,( i > 100 ? ( i - 10 ) : 91 ));
  }
  return 0;
}
