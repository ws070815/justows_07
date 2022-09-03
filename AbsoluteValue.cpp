#include<stdio.h>
int AbsoluteValue(int n) {
	if (n >= 0)
		return n;
	else
		return -1 * n;
}
int main() {
	int n; scanf("%d", &n);

	printf("%d", AbsoluteValue(n));
	return 0;
}
