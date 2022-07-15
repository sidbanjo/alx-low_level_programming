#include <stdio.h>

/**
 * main - print combination of single digit numbers
 *
 * Return: 0 to exit program
 */
int main(void)
{
	int a, b, c, d;

	for (a = '0'; a <= '9'; a++)
	{
	for (b = '0'; b <= '9'; b++)
	{
	for (c = '0'; c <= '9'; c++)
	{
	for (d = '0'; d <= '9'; d++)
	{
		if (!((a == b) && (a == c) && (a == d)))
		{
		if (!(a == c && b == d))
		{
		if (c >= a)
		{
		if (!(d < b))
		{
			putchar(a);
			putchar(b);
			putchar(' ');
			putchar(c);
			putchar(d);
			if (!(a == '8' && b == '9'))
			{
				putchar(',');
				putchar(' ');
			}}}}}}}}}
	putchar('\n');
	return (0);
}
