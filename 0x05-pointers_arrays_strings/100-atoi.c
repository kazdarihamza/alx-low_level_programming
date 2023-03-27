/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if no number is found
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
	}
	return (sign * result);
}
