#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  unsigned int i,j = 0;
  char numero[100];
  char d[2] = "\0";
  char buf[100];

  while ( scanf("%s %s",d,numero) && ( strcmp("0\0",d) && strcmp("0\0",numero) )) {
    for(i=0; i < strlen(numero);i++) {
      strcpy(buf,numero);
      if ( d[0] == numero[i] ) {
        for(j=i;numero[j] != '\0';j++) {
          numero[j] = buf[j+1];
        }
      }
    }
      printf("%s",numero);
  }
  return 0;
}
