#include<stdio.h>
int ReverseNum(int n) {
	int res = 0;
	while (n) { //1023
		res = res * 10 + n % 10;
		n /= 10;
	}
	return res;
}
int main() {
  int n; scanf("%d",&n);
	int a =  ReverseNum(n);
	printf("%d",a);
	return 0;
}
