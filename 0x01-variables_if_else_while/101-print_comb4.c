#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: prints all possible different combinations of three
 * digits in ascending order. The numbers must be separated by ", "
 * . The three digits must be different, and combinations like 012, 120,
 * 102, etc., are considered the same combination. The program only prints the
 * smallest combination of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int hundredsDigit;
int tensDigit;
int onesDigit;

for (hundredsDigit = 0; hundredsDigit <= 7; hundredsDigit++)
{
for (tensDigit = hundredsDigit + 1; tensDigit <= 8; tensDigit++)
{
for (onesDigit = tensDigit + 1; onesDigit <= 9; onesDigit++)
{
putchar(hundredsDigit + '0');
putchar(tensDigit + '0');
putchar(onesDigit + '0');

if (hundredsDigit != 7 || tensDigit != 8 || onesDigit != 9)
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');

return (0);
}
