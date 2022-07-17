/**
 * _strcmp - compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: signed int of difference
 */
int _strcmp(char *s1, char *s2)
{
	signed int a;
	signed int b;
	signed int diff;

	a = *(s1 + 0);
	b = *(s2 + 0);
	diff = a - b;
	return (diff);
}
