/* 
 * Problem at: http://br.spoj.pl/problems/ELEICOES/
 * Author: Philip Sampaio
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX_ID 1000000000

struct t_node { 
	struct t_node *right;
	struct t_node *left;
	int info;
	int votes;
};
struct t_node * insert(struct t_node*,int);
struct t_node * search(struct t_node*,int); 

int main() {
	struct t_node * votes = NULL;
	struct t_node * tmp_vote = NULL;
	int total_votes = 0;
	int winner[2] = {0, 0};
	int i = 0;
	int j = 0;

	scanf("%d",&total_votes);
	if ( total_votes < 1 || total_votes > 100000 ) {
		free(votes);	
		return 0;
	}

	for ( i=0; i < total_votes; i++) {
		scanf("%d",&j);
		if ( j > 0 && j <= MAX_ID ) {
			if ( i == 0 ) {
				votes = insert(votes,j);
			} else {
				tmp_vote = search(votes, j);
				if ( tmp_vote != NULL ) { 
					tmp_vote->votes++; 
					if ( tmp_vote->votes > winner[0] ) {
						winner[1] = tmp_vote->info;
						winner[0] = tmp_vote->votes;
					}
				} else {
					tmp_vote = insert(votes,j);
				}

				tmp_vote = NULL;
			}
		}
	}
	if ( total_votes > 0 && winner[1] != 0 )
		printf("%d",winner[1]);

	free(votes);
	free(tmp_vote);
	return 0;
}
struct t_node * insert(struct t_node* node, int info) 
{
    if ( node == NULL ) {
		struct t_node * new_node = malloc(sizeof(struct t_node));
		new_node->info = info; 
		new_node->votes = 1; 
		new_node->right = NULL; 
		new_node->left = NULL;
		return (struct t_node*)new_node;
    }
    else 
    {
		if ( info <= node->info)
			node->left = insert(node->left,info);
		else
			node->right = insert(node->right,info);
		return (struct t_node*)node; 
    }
   
}

struct t_node * search(struct t_node* node, int info) 
{
    if ( node == NULL ) 
		return NULL; 
    else 
    {
		if ( node->info == info) 
			return (struct t_node*)node; 
		else
		{
			if ( info < node->info ) 
				return search(node->left,info); 
			else 
				return search(node->right,info);
		}
    }
}
