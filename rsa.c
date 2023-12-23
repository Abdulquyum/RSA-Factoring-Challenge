#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void factorize(char *buffer);

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	FILE *fptr = NULL;
	size_t n = 0;
	char *buffer = NULL;
	char *file;

	if (argc != 2)
	{
		perror("Error");
	}

	file = argv[1];
	fptr = fopen(file, "r");

	if (fptr == NULL)
	{
		perror("Error");
		exit(1);
	}

	getline(&buffer, &n, fptr);

	factorize(buffer);

	fclose(fptr);
	free(buffer);

	return (0);
}

/**
 * factorize - factorize number into two products
 *
 * @buffer: line to be factorized
 *
 * Return: Nothing
 */
void factorize(char *buffer)
{
	int i, num, a;

	num = atoi(buffer);

	a = 2;

	for (i = 0; buffer[i] != '\0'; i++)
	u{
		while (a < num)
		{
			if (num % a == 0)
			{
				printf("%d=%d*%d\n", num, num / a, a);
				break;
			}
			a += 1;
		}
	}
}
