/**
 * _isalpha - my function
 *
 * @c: the character to be checked
 *
 * Description - checks for alphabetic character
 *
 * Return: 1 if is alphabetic, else 0
 *
 */

int _isalpha(int c)
{
	while ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	return (0);
}
