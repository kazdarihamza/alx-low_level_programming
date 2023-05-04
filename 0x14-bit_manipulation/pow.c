unsigned int _pow(unsigned int a, unsigned int b)
{
	unsigned int i, result = 1;

	for (i = 0; i < b; i++)
		result *= a;
	return (result);
}
