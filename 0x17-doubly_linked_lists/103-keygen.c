#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Keygen for an ELF 64bits program
 * @argc: Number of arguments.
 * @argv: array of string arguments.
 *
 * Return: 0, Always
 */
int main(int argc, char **argv)
{
	char pass[6], *alphas;
	int len = strlen(argv[1]), i, temp;

	(void)(argc);
	alphas = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temp = (len ^ 59) & 63;
	pass[0] = alphas[temp];

	temp = 0;
	for (i = 0; i < len; i++)
		temp += argv[1][i];
	pass[1] = alphas[(temp ^ 79) & 63];

	temp = 1;
	for (i = 0; i < len; i++)
		temp *= argv[1][i];
	pass[2] = alphas[(temp ^ 85) & 63];

	temp = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > temp)
			temp = argv[1][i];
	}
	srand(temp ^ 14);
	pass[3] = alphas[rand() & 63];

	temp = 0;
	for (i = 0; i < len; i++)
		temp += (argv[1][i] * argv[1][i]);
	pass[4] = alphas[(temp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		temp = rand();
	pass[5] = alphas[(temp ^ 229) & 63];

	pass[6] = '\0';
	printf("%s", pass);
	return (0);
}

