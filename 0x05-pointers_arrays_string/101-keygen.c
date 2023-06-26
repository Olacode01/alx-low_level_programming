
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void)
{
	char str[100];
	int i = 0, randNum = 0, sumah = 0;

	srand (time(NULL));


	for (i = 0; sumah <= 2644; i++)
	{
		randNum = (rand() % 25) + 65;

		str[i] = randNum;
		sumah = sumah + randNum;
	}

	str[i++] = 2772 - sumah;
	str[i++] = '\0';

	printf("%s\n", str);

	return (0);
}
