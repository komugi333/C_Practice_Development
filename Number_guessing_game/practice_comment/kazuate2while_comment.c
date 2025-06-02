#include <stdio.h>

// 当たるまで繰り返すように変更

int main ()
{
	printf("Guess the numbers 0 to 9.\n");

	int ans = 7;
	int no;

	while (1) // 前判定繰り返し　ループ全体を実行する前に判定
	{
		printf("What is the number?: ");
		scanf("%d", &no);

		if (no > ans)
			printf("Too large.\a\n");
		else if (no < ans)
			printf("Too small.\a\n");
		else
			break;
	}
	printf("Correct answer!\n");

	return (0);
}
