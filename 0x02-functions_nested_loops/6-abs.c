/**
 * _abs - computes absolute value
 *
 * @n: input integer
 *
 * Description - computes absolute value of an integer
 *
 * Return: absolute value
 *
 */

int _abs(int n)
{
	while (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
