#include <stdio.h>
int N;

int recursive(int data, int cnt);

int main(void) {

	int tc;

	scanf("%d", &tc);
	while (tc--) {
		scanf("%d", &N);
		for (int x0 = 1; x0 <= N; x0++)
			recursive(x0,0);
		
	}
	


	return 0;
}

int recursive(int x, int cnt) {
	
	for (int x0 = x; x <= N;x0++)


	
}