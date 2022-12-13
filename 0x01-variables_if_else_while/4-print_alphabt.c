<<<<<<< HEAD
#include <stdio.h>

#include <stdlib.h>

/**
 *
 *  * main - Entry point
 *
 *   *
 *
 *    * Description: 'Skipping Q and E'
 *
 *     *
 *
 *      * Return: Always 0 (Success)
 *
 *       */

/* betty style doc for function main goes there */

int main(void)

{

		int ch;



			for (ch = 'a'; ch <= 'z'; ch++)

					{

								if (ch == 'e' || ch == 'q')

											{

															continue;

																	}

										putchar(ch);

											}

				putchar('\n');

					return (0);

}
=======
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
>>>>>>> 907117306c9c7f9be24910096d9683259a2520dc
