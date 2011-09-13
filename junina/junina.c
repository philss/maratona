#include <stdio.h>
#define TAM 20
struct aluno {
  int tem_inimigo;
  int excluido;
  struct aluno *inimigos[TAM];
};

void limpa(struct aluno *);

int main() {
  struct aluno alunos[TAM];
  int n_casos = 0;
  int i,j,inimigo;
  
  while ( scanf("%d",&n_casos) && n_casos ) {
    limpa(alunos);
    i++;
    printf("Teste %d\n",i);
    for (j=0;j < n_casos;j++) {
      if ( scanf("%d",&inimigo) ) {
        printf("%d\n",inimigo);
      } 
    }
  }
  printf("saindo\n");
  return 0;
}


void limpa(struct aluno * alunos) {
  int i,j;
  for (i=0;i<TAM;i++) {
    alunos[i].tem_inimigo = 0;
    alunos[i].excluido = 0;
    for (j=0;j<TAM;j++)
      alunos[i].inimigos[j] = NULL;
  }
}
