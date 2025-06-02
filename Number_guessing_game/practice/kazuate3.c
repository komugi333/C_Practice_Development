#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	srand(time(NULL));
	int ans = rand() % 1000;
	int no;

	printf("Guess the numbers 0 to 999.\n");

	do	{
		printf("What is the number?: ");
		scanf("%d", &no);

		if (no > ans)
			printf("Too large.\a\n");
		else if (no < ans)
			printf("Too small.\a\n");
		else
			break;
	} while (no != ans);
	printf("Correct answer!\n");

	return (0);
}
