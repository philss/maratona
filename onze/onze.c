#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
  char number[1001];
  int i = 0, size = 0, even = 1, total = 0;
  while ( scanf("%s\n",number) != EOF && strcmp(number,"0\0") ) {
    size = strlen(number);
    for (i=0; i < size; i++) {
      total = (even ? total + (number[i] - 48) : total - (number[i] - 48));
      even = ( even ? 0 : 1);
    }
    printf("%s is%s a multiple of 11.\n",number, ( ( total % 11 == 0 ) ? "" : " not" ) );
    total = 0;
    even = 1;
    size = 0;
  }
  return 0;
}
