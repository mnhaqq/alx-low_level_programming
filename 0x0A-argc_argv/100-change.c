#include <stdio.h>
#include <stdlib.h>

int min_coins(int cents);

/**
 *main - program to print minumum number of coins needed to make change
 *@argc: number of cl args
 *@argv: amount of chenge to be given
 *Return: 0 if succesful else 1
 */

int main(int argc, char *argv[])
{
	int output, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	output = min_coins(cents);
	printf("%d\n", output);

	return (0);
}

/**
 *min_coins - actual implementation of minimum coins
 *@cents: amount of change to be given
 *Return: number of coins
 */

int min_coins(int cents)
{
	int num_coins = 0;

	if (cents <= 0)
		return (0);

	/* check 25 cents */
	num_coins += cents / 25;
	cents -= 25 * (cents / 25);

	/* check 10 cents */
	num_coins += cents / 10;
	cents -= 10 * (cents / 10);

	/* check 5 cents */
	num_coins += cents / 5;
	cents -= 5 * (cents / 5);

	/* check 2 cents */
	num_coins += cents / 2;
	cents -= 2 * (cents / 2);

	/* check 1 cent */
	num_coins += cents;
	cents -= (cents);

	return (num_coins);
}
