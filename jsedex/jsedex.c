#include <stdio.h>
#define MAX_SIZE 10000 
#define MIN_SIZE 1 

int main() {
	int diameter = 0;
	int h = 0;
	int w = 0;
	int d = 0;

	scanf("%d\n%d %d %d",&diameter,&h,&w,&d);
	if ( diameter < 1 || diameter > MAX_SIZE ) return 0;
	if ( h > MAX_SIZE || h < MIN_SIZE ) return 0;
	if ( w > MAX_SIZE || w < MIN_SIZE ) return 0;
	if ( d > MAX_SIZE || d < MIN_SIZE ) return 0;
	if ( h >= diameter && w >= diameter && d >= diameter ) 
		printf("S");
	else
		printf("N");
	return 0;
}
