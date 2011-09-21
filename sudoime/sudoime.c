#include <stdio.h>

/* Problem SUDOIME https://br.spoj.pl/problems/SUDOIME/ */

int solved_game(int[9][9]);
int * reset_stretch(int[9][2]);
int check_rows(int[9][9],int[9][2],int);
int check_columns(int[9][9],int[9][2],int);
int check_block(int[9][2]);

int main(int argc, const char *argv[])
{
  int s[9][9];
  int instances = 0;
  int i = 0;

  scanf("%d",&instances);
  if ( instances <= 0 )
    return 0;
  while ( instances ) {
    i++;
    scanf("%d %d %d %d %d %d %d %d %d\n%d %d %d %d %d %d %d %d %d\n%d %d %d %d %d %d %d %d %d\n%d %d %d %d %d %d %d %d %d\n%d %d %d %d %d %d %d %d %d\n%d %d %d %d %d %d %d %d %d\n%d %d %d %d %d %d %d %d %d\n%d %d %d %d %d %d %d %d %d\n%d %d %d %d %d %d %d %d %d",&s[0][0],&s[0][1],&s[0][2],&s[0][3],&s[0][4],&s[0][5],&s[0][6],&s[0][7],&s[0][8],&s[1][0],&s[1][1],&s[1][2],&s[1][3],&s[1][4],&s[1][5],&s[1][6],&s[1][7],&s[1][8],&s[2][0],&s[2][1],&s[2][2],&s[2][3],&s[2][4],&s[2][5],&s[2][6],&s[2][7],&s[2][8],&s[3][0],&s[3][1],&s[3][2],&s[3][3],&s[3][4],&s[3][5],&s[3][6],&s[3][7],&s[3][8],&s[4][0],&s[4][1],&s[4][2],&s[4][3],&s[4][4],&s[4][5],&s[4][6],&s[4][7],&s[4][8],&s[5][0],&s[5][1],&s[5][2],&s[5][3],&s[5][4],&s[5][5],&s[5][6],&s[5][7],&s[5][8],&s[6][0],&s[6][1],&s[6][2],&s[6][3],&s[6][4],&s[6][5],&s[6][6],&s[6][7],&s[6][8],&s[7][0],&s[7][1],&s[7][2],&s[7][3],&s[7][4],&s[7][5],&s[7][6],&s[7][7],&s[7][8],&s[8][0],&s[8][1],&s[8][2],&s[8][3],&s[8][4],&s[8][5],&s[8][6],&s[8][7],&s[8][8]);
    if ( solved_game(s) )
      printf("Instancia %d\nSIM\n\n",i);
    else
      printf("Instancia %d\nNAO\n\n",i);
    instances--;
  }
  return 0;
}

int solved_game(int s[9][9]) {
  int i;
  int p[9][2];
  int n_r = 0;
  int n_c = 0;
  reset_stretch(p);
  
  for (i = 0; i < 9; i++) {
    if ( check_rows(s,p,i) )
      return 0;
    
    reset_stretch(p);
    
    if ( check_columns(s,p,i) )
      return 0;

    reset_stretch(p);
  }

  while (n_r < 9) {
    while (n_c < 9 ) {
      reset_stretch(p);

      p[0][0] = s[n_r][n_c];
      p[1][0] = s[n_r][n_c+1];
      p[2][0] = s[n_r][n_c+2];
      p[3][0] = s[n_r+1][n_c];
      p[4][0] = s[n_r+1][n_c+1];
      p[5][0] = s[n_r+1][n_c+2];
      p[6][0] = s[n_r+2][n_c];
      p[7][0] = s[n_r+2][n_c+1];
      p[8][0] = s[n_r+2][n_c+2];

      if ( check_block(p) )
        return 0;

      n_c = n_c + 3;
    }
    n_c = 0;
    n_r = n_r + 3;
  }

  return 1;
}

int * reset_stretch(int s[9][2]) {
  int i = 0;
  for (i;i < 9;i++) {
    s[i][0] = i;
    s[i][1] = 0;
  }
  return (int*)s;
}

int check_rows(int game[9][9], int stretch[9][2], int n_row) {
  int i = 0;
  for (i = 0; i < 9; i++) {
    if ( stretch[game[n_row][i]-1][1] ) 
      return 1;
    else
      stretch[game[n_row][i]-1][1] = 1;
  }
  return 0;
}

int check_columns(int game[9][9],int stretch[9][2],int n_column) {
  int i = 0;
  for (i = 0; i < 9; i++) {
    if ( stretch[game[i][n_column]-1][1] ) 
      return 1;
    else
      stretch[game[i][n_column]-1][1] = 1;
  }
  return 0;
}

int check_block(int s[9][2]) {
  int i,j;
  for (i = 0; i < 9; i++) {
    for (j = i+1; j < 9; j++) {
      if( s[i][0] == s[j][0] )
        return 1;
    }
  }
  return 0;
}
