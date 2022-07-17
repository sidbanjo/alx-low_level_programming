/**
 * _strncpy - copies n bytes of a string to another string
 * @dest: pointer to string to copy into
 * @src: pointer to string to copy from
 * @n: n bytes of src to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = 0;
		i++;
	}
	return (dest);
}
