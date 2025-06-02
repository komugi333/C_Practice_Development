#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	printf("This processer can generate random numbers from 0 to %d\n", RAND_MAX);
	int retry;
	do {
		printf("\nGenerated random number %d. \n", rand());
		printf("Retry? ... (0) No.  (1) Yes.: ");
		scanf("%d", &retry);
	} while (retry == 1);

	return (0);
}
