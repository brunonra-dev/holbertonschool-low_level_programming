/**
 * swap_int - Swaps int
 *
 * @a: pointer a
 * @b: pointer b
 */
void swap_int(int *a, int *b)
{
	int aa, bb;

	aa = *a;
	bb = *b;

	*a = bb;
	*b = aa;
}
