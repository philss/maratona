#include <stdio.h>
#define MAX_N 5000

int main() {
	int size = 0;
	int tmp = 0;
	int i = 0;
	int soma = 0;

	scanf("%d",&size);
	if ( size < 1 || size > 50 ) return 0;
	while ( i < size ) {
		scanf("%d",&tmp);
		if ( tmp >= -MAX_N && tmp <= MAX_N )
			soma += tmp;
		i++;
	}
	printf("%d",soma);
	return 0;
}
