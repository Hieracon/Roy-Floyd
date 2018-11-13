#include <stdio.h>
#include <conio.h>
#include <iostream>

#include "roy-floyd.h"

int main()

{
	char ch;
	int x, y, n, m;
	int cost[100][100];

	initial_cost(cost, n, m);

	printf("\n The weight matrix is:\n");
	display_matrix(cost, n);
	Roy_Floyd(cost, n);

	printf("\n The minimum cost matrix is:\n");
	display_matrix(cost, n);

	do
	{
		printf("\n\nDetermine which is the minimum cost path between two nodes of the graph\n");
		printf("x= ");
		scanf_s("%d", &x);

		printf("y= ");
		scanf_s("%d", &y);
		print_path(x, y, cost, n);

		printf("\n\n\n Do you want to find a path between other nodes from the graph? <y/n>");
		ch = _getch();
	} while (ch == 'y' || ch == 'Y');

	_getch();
	return 0;
}