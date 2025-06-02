#include <stdio.h>

int main ()
{
	printf("Guess the numbers 0 to 9.\n");

	int ans = 7;
	int no;

	do { // 後判定繰り返し　ループ全体を実行した後に判定　少なくとも一回は実行される
		printf("What is the number?: ");
		scanf("%d", &no);

		if (no > ans)
			printf("Too large.\a\n");
		else if (no < ans)
			printf("Too small.\a\n");
	} while (no != ans); // 条件式が正(1) ならば実行
	printf("Correct answer!\n");

	return (0);
}
