#include <stdio.h>
#define MAX_N 50

int Parent[MAX_N];

void makeSet(int v) {
	for (int i = 0; i < MAX_N; i++)
		Parent[i] = -1;
}
int findSet(int v) {
	if (Parent[v] < 0) return v;
	return findSet(Parent[v]);
}

void UnionSet(int u, int v) {
	int root1 = Parent[u];
	int root2 = Parent[v];

	if (root1 == root2) return;
	Parent[root1] += Parent[root2];
	Parent[root2] = root1;
}

int main(void) {

	



	return 0;
}