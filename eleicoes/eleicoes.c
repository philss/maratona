/* 
 * Problem at: http://br.spoj.pl/problems/ELEICOES/
 * Author: Philip Sampaio
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX_ID 1000000000

int main() {
	int votes[100000];
	int candidate_vote[100000];
	int total_votes = 0;
	int winner[2] = {0, 0};
	int i = 0;
	int j = 0;

	scanf("%d",&total_votes);
	if ( total_votes < 1 || total_votes > 100000 ) return 0;

	for (i=0; i < total_votes; i++) {
		scanf("%d",&j);
		if ( j > 0 && j < MAX_ID ) {
			votes[i] = j;
			if ( !candidate_vote[j] ) {
				candidate_vote[j] = 0;
			}
			candidate_vote[j]++;
			if ( candidate_vote[j] > winner[0] ) {
				winner[0] = candidate_vote[j];
				winner[1] = j;
			}
		}
	}
	if ( total_votes > 0 && winner[1] != 0 )
		printf("%d",winner[1]);

	return 0;
}
