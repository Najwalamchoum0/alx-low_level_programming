#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: prints all possible different combinations of two
 * digits in ascending order. The numbers must be separated by ", "
 * . The two digits must be different, and 01 and 10 are considered the
 * same combination. The program only prints the smallest combination of two
 * digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int tensDigit;
int onesDigit;

for (tensDigit = 0; tensDigit <= 8; tensDigit++)
{
for (onesDigit = tensDigit + 1; onesDigit <= 9; onesDigit++)
{
putchar(tensDigit + '0');
putchar(onesDigit + '0');

if (tensDigit != 8 || onesDigit != 9)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
