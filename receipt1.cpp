#include<stdio.h>
int main() {
	int money;
	int total = 0;
	int get;
	int thing[100][3];
	scanf("%d %d", &money, &get);
	for (int i = 0; i < get; i++) {
		scanf("%d %d", &thing[i][0], &thing[i][1]);
		total = total + thing[i][0] * thing[i][1];
	}
	if (money == total)
		printf("Yes");
	else
		printf("No");
	
	return 0;
}
