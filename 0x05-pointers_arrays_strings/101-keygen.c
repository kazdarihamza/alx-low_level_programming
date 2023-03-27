#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char password[11];
	const char charset[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	srand(time(NULL));

	for (i = 0; i < 10; i++)
	{
		password[i] = charset[rand() % (sizeof(charset) - 1)];
	}
	password[10] = '\0';
	printf("%s\n", password);
return 0;
}
