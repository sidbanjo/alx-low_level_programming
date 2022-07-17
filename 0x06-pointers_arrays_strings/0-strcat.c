/**
 * _strcat - concatenates two strings
 * @dest: pointer to string to merge into
 * @src: pointer to string to be merged
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int c = 0;

	while (*(dest + i))
		i++;
	while (*(src + c))
	{
		*(dest + i) = *(src + c);
		i++;
		c++;
	}
	return (dest);
}
