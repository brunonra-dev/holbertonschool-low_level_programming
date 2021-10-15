/**
 * swap_int - swap two integers.
 *
 * @a: int
 * @b: int
 */
void swap_int(int *a, int *b)
{
	int i, e;

	i = *a;
	e = *b;

	*a = e;
	*b = i;
}
