/**
 * swap_int - swaps the value of two variables
 * @a: first variable pointer
 * @b: second variable pointer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
