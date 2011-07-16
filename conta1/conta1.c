/* Problem: Conta1 */
#include <stdio.h>

int main(){
	int pgto = 7;
	int consumo = 0;
	int i = 0;

	scanf("%d",&consumo);
	if ( consumo < 0 || consumo > 1000 ) return 0;
	if ( consumo < 11 ) {
		printf("7");
		return 0;
	}
	for ( i = 11; i <= consumo; i++ ) {
		if ( i <= 30 ) {
			pgto++;
			continue;
		}
		if ( i <= 100 ) {
			pgto += 2;
			continue;
		}
		pgto += 5;
	}
	printf("%d",pgto);
	return 0;
}
