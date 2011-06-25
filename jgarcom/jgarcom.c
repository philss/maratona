#include <stdio.h>

/* Problem code: JGARCOM */


int broken_cups(int,int);

int main() {
	int n_cases = 0;
	int broken = 0;
	int bottle = 0;
	int cup = 0;
	int i = 0;

	scanf("%d",&n_cases);
	if ( n_cases < 1 || n_cases > 100 ) return 0;
	
	for ( ; i < n_cases; i++ ) {
		scanf("%d %d",&bottle,&cup);
		broken += broken_cups(bottle,cup);
	}
	printf("%d",broken);	
	return 0;
}

int broken_cups(int bottles,int cups) {
	if ( bottles < 1 || bottles > 100 || cups < 1 || cups > 100 ) return 0;
	if ( bottles > cups )
		return cups;
	else
		return 0;
}
