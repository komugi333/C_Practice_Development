#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_STAGE 9

int main ()
{
	srand(time(NULL));

	int ans = rand() % 333 * 3 + 3;
	int no;

	int num[MAX_STAGE];
	int stage = 0;

	printf("Guess a multiple of 3 between 3 to 999.\n");

	do	{
		printf("%d left! What is the number?: ", MAX_STAGE - stage);
		scanf("%d", &no);
		if (no % 3 != 0)
		{
			printf("That number is not a multiple of 3. Terminating the program.\n");
			exit(1);
		}
		num[stage++] = no;

		if (no > ans)
			printf("Too large.\a\n");
		else if (no < ans)
			printf("Too small.\a\n");
		else
			break;
	} while (no != ans && stage < MAX_STAGE);

	if (no != ans)
		printf("Too bad! The correct answer was %d.\n", ans);
	else
	{
		printf("Correct answer!\n");
		printf("You went %d moves to the correct answer.\n", stage);
	}

	puts("\n--- Input History ---");
	for (int i = 0; i < stage; i++)
		printf(" %2d : %4d %+4d\n", i + 1, num[i], num[i] - ans);

	return (0);
}
