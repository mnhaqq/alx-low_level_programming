/**
 *reverse_array - function to reverse an array of integers
 *@a: array
 *@n: number of elements
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int i, half, g, h;

	half = n / 2;
	if (half % 2 != 0)
		half++;
	n--;
	for (i = 0; i < half; i++, n--)
	{
		g = *(a + i);
		h = *(a + n);
		*(a + n) = g;
		*(a + i) = h;
	}

}
