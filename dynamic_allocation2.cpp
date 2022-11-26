#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	char* ar = (char*)malloc(sizeof(char));
	double* jr = (double*)malloc(sizeof(double));

	*ar = 'A';

	*jr = 3.141592;

	printf("%lf %c\n", *jr, *ar);

	free(ar);
	free(jr);

	return 0;
}
