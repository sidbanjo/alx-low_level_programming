/**
 * _strncat - concatenates n bytes of a string to another string
 * @dest: pointer to string to merge into
 * @src: pointer to string to be merged
 * @n: n bytes of src to merge
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int c = 0;

	while (*(dest + i))
		i++;
	while (c < n && *(src + c))
	{
		*(dest + i) = *(src + c);
		i++;
		c++;
	}
	return (dest);
}
