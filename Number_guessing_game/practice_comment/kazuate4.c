#include <time.h>
#include <stdio.h>
#include <stdlib.h>

// 入力回数に制限を設ける

int main ()
{
	srand(time(NULL));

	const int max_stage = 10; // 最大入力回数
	int remain = max_stage; // 残り何回

	int ans = rand() % 1000;
	int no;

	printf("Guess the numbers 0 to 999.\n");

	do	{
		printf("%d left! What is the number?: ", remain);
		scanf("%d", &no);
		remain--;

		if (no > ans)
			printf("Too large.\a\n");
		else if (no < ans)
			printf("Too small.\a\n");
		else
			break;
	} while (no != ans && remain > 0);

	if (no != ans)
		printf("Too bad! The correct answer was %d.\n", ans);
	else
	{
		printf("Correct answer!\n");
		printf("You went %d moves to the correct answer.\n", max_stage - remain);
	}

	return (0);
}
