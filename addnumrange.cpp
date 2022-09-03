#include<stdio.h>
void Sum1() {
	int n;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum = sum + i;
	}
	printf("%d"sum);
}
void Sum2(int a) {
	int sum = 0;
	for (int i = 1; i <= a; i++) {
		sum + sum + i;
	}
}
int Sum3() {
	int n;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum = sum + i;
	}
	return sum;
}
int Sum4(int a) {
	int sum = 0;
	for (int i = 1; i <= a; i++) {
		sum = sum + i;
	}
	return sum;
}
int main() {

	return 0;
}

