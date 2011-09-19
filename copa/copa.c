#include <stdio.h>

int main(int argc, const char *argv[])
{
  int T,N;
  int i;
  int pontos, pontos_total = 0;
  char time[11];
  while (scanf("%d %d",&T,&N) != EOF && T > 1 && N >= 0) {
    for(i=0; i < T;i++) {
      scanf("%s %d",time,&pontos);
      pontos_total += pontos;
    }
    printf("%d \n",(N*3 - pontos_total));
    pontos_total = 0;
  }
  return 0;
}
