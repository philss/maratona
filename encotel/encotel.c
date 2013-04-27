#include <stdio.h>
#include <string.h>

struct Number {
  char chars[5];
  char val;
};

char find_number(struct Number [], char);

int main()
{
  struct Number numbers[8];
  int d = 0;
  char n = '-';
  char line[31];
  char answer[31];
  strcpy(numbers[0].chars, "ABC\0");
  strcpy(numbers[1].chars, "DEF\0");
  strcpy(numbers[2].chars, "GHI\0");
  strcpy(numbers[3].chars, "JKL\0");
  strcpy(numbers[4].chars, "MNO\0");
  strcpy(numbers[5].chars, "PQRS\0");
  strcpy(numbers[6].chars, "TUV\0");
  strcpy(numbers[7].chars, "WXYZ\0");

  numbers[0].val = '2';
  numbers[1].val = '3';
  numbers[2].val = '4';
  numbers[3].val = '5';
  numbers[4].val = '6';
  numbers[5].val = '7';
  numbers[6].val = '8';
  numbers[7].val = '9';

  while( scanf("%s", line) != EOF ) {
   for(d = 0; d < strlen(line); d++) {
      n = find_number(numbers,  line[d]);
      answer[d] = ( n == '-' ? line[d] : n );
    }
    answer[d] = '\0';
    printf("%s\n", answer);
    answer[0] = '\0';
    line[0] = '\0';
  }
  return 0;
}

char find_number(struct Number numbers[], char ch) {
  int i = 0;
  int j = 0;

  for(i = 0; i < 8; i++) {
    for(j = 0; j < 4; j++) {
      if (numbers[i].chars[j] == ch) {
        return numbers[i].val;
      }
    }
  }
  return '-';
}
