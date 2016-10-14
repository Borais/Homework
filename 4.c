# include <stdio.h>
int main(void) {
	int i, x, n, r = 1;
	scanf("%d", &x);
	scanf("%d", &n);
	for (i = 1; i < n; i++) {
		r = r*x;
	}
	printf("%d", r);
	return 0;
}

