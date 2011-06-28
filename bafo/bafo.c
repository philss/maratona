#include <stdio.h>

/* Problem code: BAFO */


int verify_cases(int);
int verify_games(int,int);
int verify_winner(int,int);
int winner_points(int,int);

int main() {
	char player[2][5] = { "Aldo\0", "Beto\0" };
	int player_points[2] = { 0, 0 };
	int a = 0;
	int b = 0;
	int i = 0;
	int j = 0;
	int cases = 0;
	
	scanf("%d",&cases);

	while ( verify_cases(cases) ) {
		for(i=0; i < cases; i++) {
			scanf("%d %d", &a, &b);
			if ( verify_games(a,b) )
				player_points[verify_winner(a,b)] += winner_points(a,b);
		}
		j++;
		printf("Teste %d\n%s\n\n",j,player[verify_winner(player_points[0],player_points[1])]);
		player_points[0] = 0;
		player_points[1] = 0;
		scanf("%d",&cases);

	}
	return 0;
}

int verify_winner(int a, int b) {
	/* Return 0 for player 1 and 1 for player 2 */
	if ( b > a )
		return 1;
	return 0;
}

int winner_points(int a, int b) {
	if ( verify_winner(a,b) == 0 ) 
		return a - b;
	return b - a;
}

int verify_cases(int cases) {
	if ( cases < 1 ||	cases > 1000 ) return 0;
	return 1;
}
int verify_games(int a, int b) {
	if ( a < 0 || a > 100 || b < 0 || b > 100 ) return 0;
	return 1;
}
