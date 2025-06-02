#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	srand(time(NULL));
	int retry, random;

	do {
		random = rand() % 10;
		if (random == 0 )
			printf("おみくじの結果は「大吉」です\n");
		else if (random == 1 || random == 2)
			printf("おみくじの結果は「中吉」です\n");
		else if (random == 3 || random == 4)
			printf("おみくじの結果は「小吉」です\n");
		else if (random == 5 || random == 6)
			printf("おみくじの結果は「吉」です\n");
		else if (random == 7)
			printf("おみくじの結果は「末吉」です\n");
		else if (random == 8)
			printf("おみくじの結果は「凶」です\n");
		else
			printf("おみくじの結果は「大凶」です\n");

		printf("もう一度引くなら\"1\"を, 引かないならそれ以外の数字を入力してください: ");
		scanf("%d", &retry);
	} while (retry == 1);

	return (0);
}
