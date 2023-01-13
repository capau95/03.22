#include <stdio.h>

int main () {

	int i, n, ergebnis = 1;

	printf("Geben Sie n ein:\n");
	scanf("%d", &n);

	for (i=1; i<=n; i++) {
	
		ergebnis = ergebnis*i;

	}

	printf("Das Ergebnis ist %d\n", ergebnis);

	return 0;

}
