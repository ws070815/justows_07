#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	int n =26 ;
	char* ar = (char*) malloc(sizeof(char)*n);
	
	for (int i = 0; i <n; i++) {
		ar[i] = 'a' + i;

		printf("%c\n", ar[i]);
	}
	free(ar);
	return 0;
}
//동적할당하고 그 메모리에 알파벳 넣기
