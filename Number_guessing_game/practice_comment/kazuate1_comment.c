#include <stdio.h>

int main (void)
{
	printf("Guess the numbers 0 to 9.\n");

	int ans = 7;
	int no;

	printf("What is the number?: ");
	scanf("%d", &no);

	if (no > ans)
		printf("Too large.\a\n");
	else if (no < ans)
		printf("Too small.\a\n");
	else
		printf("Correct answer!\n");

	// if (no > ans)
	// 	printf("Too large.\a\n");
	// else if (no < ans)
	// 	printf("Too small.\a\n");
	// else if (no == ans)
	// 	printf("Correct answer!\n");
	// この書き方だと, 判定回数と読みやすさ両方の面で一番上のプログラムより劣る。
	// 条件式の判定を最大三回繰り返さなければいけない。
	// また, それ以外の条件分岐がある可能性があるように見えてしまう。

	// if (no > ans)
	// 	printf("Too large.\a\n");
	// if (no < ans)
	// 	printf("Too small.\a\n");
	// if (no == ans)
	// 	printf("Correct answer!\n");
	// この書き方だと, 判定回数と読みやすさ両方の面で一番上のプログラムより劣る。
	// 条件式の判定を常に三回繰り返さなければいけない。
	// また, それ以外の条件分岐がある可能性があるように見えてしまう。

	return (0);
}
